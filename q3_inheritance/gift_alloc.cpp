#include <iostream>
#include <stdio.h>
#include "gift_alloc.hpp"
using namespace std;	
void gift_alloc :: make_basket(gift_alloc gift_basket[], gifts GIFT[], couples c[], int number_of_gifts, int number_of_couples, int *(count) )
{
	int i,j;
	int countc = 0;
	gift_alloc GD1;
	for( i = 0;i < number_of_couples; i++ ) {
		int cost = GIFT[1].price;
		int parameter = c[i].B.type;
		if ( cost > c[i].B.budget ) {
			c[i].B.budget = cost;
			GD1.add(gift_basket,GIFT[i].gname,GIFT[i].gtype,GIFT[i].price,GIFT[i].value,c[i],&countc);
			continue;
		}
		int prev,maxx;
		if ( parameter == 1 ) {
			j = 2;
			maxx = c[i].G.maintenance;
			while( cost+GIFT[j].price < maxx && j <= number_of_gifts ) {
				cost+=GIFT[j].price;
				GD1.add(gift_basket,GIFT[j].gname,GIFT[j].gtype,GIFT[j].price,GIFT[j].value,c[i],&countc);
				prev = j;
				j++;
			}
			cost+=GIFT[j].price;
			GD1.add(gift_basket,GIFT[j].gname,GIFT[j].gtype,GIFT[j].price,GIFT[j].value,c[i],&countc);
		} else if ( parameter == 2 ) {
			j = 1;
			maxx = c[i].B.budget;
			j++;
			while( cost+GIFT[j].price < maxx && j <= number_of_gifts ) {
				cost+=GIFT[j].price;
				GD1.add(gift_basket,GIFT[j].gname,GIFT[j].gtype,GIFT[j].price,GIFT[j].value,c[i],&countc);
				prev = j;
				j++;
			}
		} else {
			j = 2;
			maxx = c[i].G.maintenance;
			while( cost+GIFT[j].price < maxx && j <= number_of_gifts ) {
				cost+=GIFT[j].price;
				GD1.add(gift_basket,GIFT[j].gname,GIFT[j].gtype,GIFT[j].price,GIFT[j].value,c[i],&countc);
				prev = j;
				j++;
			}
			cost+=GIFT[j].price;
			GD1.add(gift_basket,GIFT[j].gname,GIFT[j].gtype,GIFT[j].price,GIFT[j].value,c[i],&countc);
		}
	}
	(*count) = (countc);
}
void gift_alloc::add(gift_alloc GADD[],int n, int t,int p,int v,couples c,int *count) 
{  	/** Stores the information about the gifts. */
	GADD[(*count)].B = c.B;
	GADD[(*count)].G = c.G;
	GADD[(*count)].gname = n;
	GADD[(*count)].gtype = t;
	GADD[(*count)].price = p;
	GADD[(*count)].value = v;
	(*count)++;
}
void gift_alloc::print(gift_alloc GADD[],int count) 
{ 
	freopen("gift_distribution.txt","w",stdout);
	cout << count << endl;
	for( int i = 1; i <= count; i+=1) {
		if ( GADD[i].gtype == 1) {
			cout << GADD[i].B.name << " " << "gifted " << GADD[i].gname << "(Essential)" <<  " of price " << GADD[i].price << " and value "<< GADD[i].value << " to " << GADD[i].G.name << " gtype " << GADD[i].G.type <<  endl;	
		} else if ( GADD[i].gtype == 2) {
			cout << GADD[i].B.name << " " << "gifted " << GADD[i].gname << "(Luxury)" <<  " of price " << GADD[i].price << " and value "<< GADD[i].value << " to " << GADD[i].G.name << " gtype " << GADD[i].G.type << endl;	
		} else if ( GADD[i].gtype == 3) {
			cout << GADD[i].B.name << " " << "gifted " << GADD[i].gname << "(Utility)" <<  " of price " << GADD[i].price << " and value "<< GADD[i].value << " to " << GADD[i].G.name << " gtype " << GADD[i].G.type<<endl;	
		}
	}
}

void gift_alloc:: xyz()
{
	gifts::prints();
	cout << "Hello from dervied" << endl;
}