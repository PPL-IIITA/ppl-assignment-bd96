#include <bits/stdc++.h>
#include "h_c.hpp"
using namespace std;

void h_c::happiness( h_c H[], gift_alloc GADD[] , int count, int *cnt ) { 
	double sumb;
	int i;
	int j; 
	double sum;
	for( i = 1; i < count;) {
		//cout << "Girl Type " << GADD[i].G.type << endl; 
		if ( GADD[i].G.type == 1 ) {
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
		} else if ( GADD[i].G.type == 2 ) {
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
		} else if ( GADD[i].G.type == 3 ) {
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
		//cout << "SUM " << sum << endl;
		//cout << "BOY Type " << GADD[i].B.type << endl;
		if ( GADD[i].B.type == 1 ) {
			//cout << "SUMB " << sumb << endl;
			sum = 0;
			sum = GADD[i].B.budget - sumb;
			H[(*cnt)].hb = sum;
		} else if ( GADD[i].B.type == 2 ) {
			H[(*cnt)].hb = H[(*cnt)].hg;
		} else if ( GADD[i].B.type == 3 ) {
			H[(*cnt)].hb = GADD[i].G.intelligence;
		}
		H[(*cnt)].hc = H[(*cnt)].hb + H[(*cnt)].hg;
		H[(*cnt)].B = GADD[i].B;
		H[(*cnt)].G = GADD[i].G;
		H[(*cnt)].cc = (GADD[i].B.budget - GADD[i].G.maintenance) + abs(GADD[i].B.attract - GADD[i].G.attract) + abs(GADD[i].B.intelligence - GADD[i].G.intelligence); 
		(*cnt)++;
		i = ++j;
	}
}

void h_c::printmost(h_c H[], int k,int cnt) 
{
	freopen("k_Couples.txt","w+",stdout);
	//cout << "Count " << cnt << endl;
	int temp = k,i;
	double maxx = -1;
	int flag[100];
	for( i = 0; i < 100; i++ ) {
		flag[i] = 0;
	}
	cout << k << " MOST HAPPY COUPLES" << endl;
	int index;
	while(temp > 0) {
		//cout << "Temp " << temp << endl;
		maxx = -1;
		for( i = 0; i < cnt; i++ ) {
			//cout << "I " << i << endl;
			if ( H[i].hc > maxx && flag[i] == 0 ) {
				maxx = H[i].hc;
				index = i;
			}
		}
		//cout << "Index " << index << endl;
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
		for( i = 0; i < cnt; i++ ) {
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

void h_c::least(h_c H[], boy breakup_boy[], girl breakup_girl[], int *count_breakup, int k,int cnt) 
{
	//cout << "Count " << cnt << endl;
	int temp = k,i;
	double minn;
	int flag[100];
	for( i = 0; i < 100; i++ ) {
		flag[i] = 0;
	}
	//cout << k << " MOST UNHAPPY COUPLES" << endl;
	int index;
	while(temp > 0) {
		//cout << "Temp " << temp << endl;
		minn = 99999999;
		for( i = 0; i < cnt; i++ ) {
			//cout << "I " << i << endl;
			if ( H[i].hc < minn && flag[i] == 0 ) {
				minn = H[i].hc;
				index = i;
			}
		}
		//cout << "Index " << index << endl;
		//cout << "Boy " << H[index].B.name << " Girl " <<H[index].G.name << " Happiness: " << H[index].hc << endl;
		breakup_boy[(*count_breakup)] = H[index].B;
		breakup_girl[(*count_breakup)] = H[index].G;
		(*count_breakup) = (*count_breakup) + 1;
		flag[index] = 1;
		temp--;
	}
	
}