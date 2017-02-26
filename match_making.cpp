#include <bits/stdc++.h>
#include "match_making.hpp"
using namespace std;
void match_making::match(couples c[],int *count) 
{	
		boys B[100];
		girls G[100];
		freopen("input.txt","r",stdin);
		int i;
		int number_of_boys,number_of_girls;
		cin >> number_of_boys;
		for( i = 1; i <= number_of_boys; i++ ) {
			cin >> B[i].name >> B[i].attract >> B[i].budget >> B[i].intelligent >> B[i].min_attract >> B[i].btype;
		}
		cin >> number_of_girls;
		for( i = 1; i <= number_of_girls; i++ ) {
			cin >>G[i].name >> G[i].attract >> G[i].maintenance >> G[i].intelligent >> G[i].criteria >> G[i].gtype;
		}
		
		int j;
		int f,max;

		for ( i = 1; i <= number_of_girls; i++ ) {							

			if (G[i].committed == false ) {
				max = 0,f=0;
				int parameter = G[i].criteria;
		
			if ( parameter == 1 ) {							
				for ( j = 1; j <= number_of_boys; j++ ) {				
					if ( !B[j].committed && B[j].budget >= G[i].maintenance && B[j].min_attract <= G[i].attract ) {

						if ( B[max].attract < B[j].attract ) {
							max = j;
							f = 1;
						}
					}
				}
				
				if(f) {
					B[max].committed = true;
					G[i].committed = true;
					c[(*count)++].add(B[max],G[i]);
				}

			} else if ( parameter == 2 ) {				
				
				for ( j = 1; j <= number_of_boys; j++ ) {				
					if ( !B[j].committed && B[j].budget >= G[i].maintenance && B[j].min_attract <= G[i].attract ) {
						if ( B[max].budget < B[j].budget ) {
							max = j;
							f = 1;
						}
					}
				}
				
				if(f) {
					B[max].committed = true;
					G[i].committed = true;
					c[(*count)++].add(B[max],G[i]);
				}

			} else if ( parameter == 3 ) {				
				for ( j = 1; j <= number_of_boys; j++ ) {				
					if ( !B[j].committed && B[j].budget >= G[i].maintenance && B[j].min_attract <= G[i].attract ) {
						
						if ( B[max].intelligent < B[j].intelligent ) {
							max = j;
							f = 1;
						}
					}
				}
				if(f) {
					B[max].committed = true;
					G[i].committed = true;
					c[(*count)++].add(B[max],G[i]);
				}	
			}
		}
	}
}
