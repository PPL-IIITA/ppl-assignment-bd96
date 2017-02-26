#include <cstring>
#include <iostream>
#include <stdio.h>
#include "gifts.hpp"
using namespace std;

void gifts::inputG ( gifts GIFT[], int *nog ) 
{	
	freopen("input_gift.txt","r+",stdin);
	int i,number_of_gifts;
	cin >> number_of_gifts;
	(*nog) = number_of_gifts;
	for( i = 1; i<= number_of_gifts; i++ ) {
		cin >> GIFT[i].gnumber >> GIFT[i].type >> GIFT[i].price >> GIFT[i].value >> GIFT[i].uvlr >> GIFT[i].ucd ; 
	}
	fclose(stdin);
}

void gifts::inputC ( couples c[], int *noc ) 
{		
	freopen("q2_input.txt","r+",stdin);
	int i,number_of_couples;
	cin >> number_of_couples;
	(*noc) = number_of_couples;
	char tmp1[10],tmp2[10];
	for( i = 1; i <= number_of_couples; i++) {
		cin >> c[i].b.name >> c[i].b.attract >> c[i].b.budget >> c[i].b.intelligent >> c[i].b.committed >> c[i].b.min_attract >>  c[i].b.btype >> c[i].g.name >> c[i].g.attract >> c[i].g.maintenance >> c[i].g.intelligent >> c[i].g.criteria >>c[i].g.committed >>c[i].g.gtype; 
	}
	fclose(stdin);
}

void gifts::alloc(gift_alloc GADD[],gifts GIFT[], couples c[], int number_of_couples, int number_of_gifts, int *count ) 
{	
	int i,j;
	int gifts_given[number_of_gifts+1];
	gift_alloc GD1,GD2;
	int countc = 1;
	for( i = 1;i <= number_of_couples; i++ ) {
		int cost = GIFT[1].price;
		int parameter = c[i].b.btype;
		if ( cost > c[i].b.budget ) {
			c[i].b.budget = cost;
			GD1.add(GADD,GIFT[j].gnumber,GIFT[j].type,GIFT[j].price,GIFT[j].value,c[i],&countc);
			continue;
		}
		int prev,maxx;
		if ( parameter == 1 ) {
			j = 2;
			maxx = c[i].g.maintenance;
			while( cost+GIFT[j].price < maxx && j <= number_of_gifts ) {
				cost+=GIFT[j].price;
				GD1.add(GADD,GIFT[j].gnumber,GIFT[j].type,GIFT[j].price,GIFT[j].value,c[i],&countc);
				prev = j;
				j++;
			}
			cost+=GIFT[j].price;
			GD1.add(GADD,GIFT[j].gnumber,GIFT[j].type,GIFT[j].price,GIFT[j].value,c[i],&countc);
		} else if ( parameter == 2 ) {
			j = 1;
			maxx = c[i].b.budget;
			j++;
			while( cost+GIFT[j].price < maxx && j <= number_of_gifts ) {
				cost+=GIFT[j].price;
				GD1.add(GADD,GIFT[j].gnumber,GIFT[j].type,GIFT[j].price,GIFT[j].value,c[i],&countc);
				prev = j;
				j++;
			}
		} else {
			j = 2;
			maxx = c[i].g.maintenance;
			while( cost+GIFT[j].price < maxx && j <= number_of_gifts ) {
				cost+=GIFT[j].price;
				GD1.add(GADD,GIFT[j].gnumber,GIFT[j].type,GIFT[j].price,GIFT[j].value,c[i],&countc);
				prev = j;
				j++;
			}
			cost+=GIFT[j].price;
			GD1.add(GADD,GIFT[j].gnumber,GIFT[j].type,GIFT[j].price,GIFT[j].value,c[i],&countc);
		}
	}
	(*count) = (countc);
}
