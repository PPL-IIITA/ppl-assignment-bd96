#include <bits/stdc++.h>
#include "h_c.hpp"
using namespace std;

void h_c::happiness( h_c H[], gift_alloc GADD[] , int count, int *cnt ) { 
	double sumb;
	int i;
	int j; 
	double sum;
	for( i = 1; i < count;) {
		if ( GADD[i].G.gtype == 1 ) {
			sum = 0;
			j = i;
			while( GADD[j+1].B.name == GADD[j].B.name ) {
				sum += GADD[j].price + GADD[j].value;
				if ( GADD[j].gtype == 2 ) {
					sum+= GADD[j].value;
				}
				j++;
			}
			sum += GADD[j].price + GADD[j].value;
			if ( GADD[j].gtype == 2 ) {
				sum+= GADD[j].value;
			} 
			sumb = sum;
			sum = (double)(sum)/(double)GADD[i].G.maintenance;
			sum = log(sum);
			H[(*cnt)].hg = sum;
		} else if ( GADD[i].G.gtype == 2 ) {
			sum = 0;
			j = i;
			while( GADD[j+1].B.name == GADD[j].B.name ) {
				sum += GADD[j].price + GADD[j].value;
				j++;
			}
			sum += GADD[j].price + GADD[j].value;	
			sumb = sum;
			sum = (double)(sum)/(double)GADD[i].G.maintenance;
			H[(*cnt)].hg = sum; 
		} else if ( GADD[i].G.gtype == 3 ) {
			sum = 0;
			j = i;
			while( GADD[j+1].B.name == GADD[j].B.name ) {
				sum += GADD[j].price;
				j++;
			}
			sum += GADD[j].price;
			sumb = sum;
			sum = (double)(sum)/(double)GADD[i].G.maintenance;
			sum = (int)(sum)%25;
			sum = exp(sum);
			H[(*cnt)].hg = sum; 
		}
		if ( GADD[i].B.btype == 1 ) {
			sum = 0;
			sum = GADD[i].B.budget - sumb;
			H[(*cnt)].hb = sum;
		} else if ( GADD[i].B.btype == 2 ) {
			H[(*cnt)].hb = H[(*cnt)].hg;
		} else if ( GADD[i].B.btype == 3 ) {
			H[(*cnt)].hb = GADD[i].G.intelligent;
		}
		H[(*cnt)].hc = H[(*cnt)].hb + H[(*cnt)].hg;
		H[(*cnt)].B = GADD[i].B;
		H[(*cnt)].G = GADD[i].G;
		H[(*cnt)].cc = (GADD[i].B.budget - GADD[i].G.maintenance) + abs(GADD[i].B.attract - GADD[i].G.attract) + abs(GADD[i].B.intelligent - GADD[i].G.intelligent); 
		(*cnt)++;
		i = ++j;
	}
}

void h_c::printhnc(h_c H[], int k,int cnt) 
{
	freopen("k_Couples.txt","w+",stdout);
	int temp = k,i;
	double maxx = -1;
	int flag[100];
	for( i = 0; i < 100; i++ ) {
		flag[i] = 0;
	}
	cout << k << " MOST HAPPY COUPLES" << endl;
	int index;
	while(temp > 0) {
		maxx = -1;
		for( i = 1; i < cnt; i++ ) {
			if ( H[i].hc > maxx && flag[i] == 0 ) {
				maxx = H[i].hc;
				index = i;
			}
		}
		cout << "Boy " << H[index].B.name << " Girl " <<H[index].G.name << " Happiness: " << H[index].hc << endl;
		flag[index] = 1;
		temp--;
	}
	for( i = 0; i < 100; i++ ) {
		flag[i] = 0;
	}
	cout << k << " MOST COMPATIBLE COUPLES" << endl; 
	int maxc=-1;
	temp = k;
	while(temp > 0) {
		maxc = -1;
		for( i = 1; i < cnt; i++ ) {
			if ( H[i].cc > maxc && flag[i] == 0 ) {
				maxc = H[i].cc;
				index = i;
			}
		}
		cout << "Boy "<<H[index].B.name << " Girl " << H[index].G.name << " Compatibility: " << H[index].cc << endl;
		flag[index] = 1;
		temp--;
	}
}