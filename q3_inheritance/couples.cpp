#include <bits/stdc++.h>
#include "couples.hpp"
using namespace std;
void couples:: formcouples(couples c[], boy B[], girl G[], int number_of_boys, int number_of_girls, int *count)
{
	int i,j;
	int max,f;
	for ( i = 1; i <= number_of_girls; i++ ) {							
		//cout << "Girl " << i <<" is " << G[i].committed << endl;
		if (G[i].committed == false ) {
			max = 0,f=0;
			int parameter = G[i].criteria;
			//cout << i << " " << parameter << endl;
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
					//cout << i << " done" << endl; 
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
					//cout << i << " done" << endl;
					B[max].committed = true;
					G[i].committed = true;
					c[(*count)++].add(B[max],G[i]);
				}

			} else if ( parameter == 3 ) {				
				for ( j = 1; j <= number_of_boys; j++ ) {				
					if ( !B[j].committed && B[j].budget >= G[i].maintenance && B[j].min_attract <= G[i].attract ) {

						if ( B[max].intelligence < B[j].intelligence ) {
							max = j;
							f = 1;
						}
					}
				}
				if(f) {
					//cout << i << " done" << endl;
					B[max].committed = true;
					G[i].committed = true;
					c[(*count)++].add(B[max],G[i]);
				}	
			}
		}
	}
}

void couples:: add(boy b, girl g)
{
	B = b;
	G = g;
}

void couples:: breakup(couples c[],boy B[], girl G[], int number_of_boys, int number_of_girls, couples newCouples[], boy breakup_boy[], girl breakup_girl[], int count_breakup, int countc)
{
	//cout << "itne couples h " << countc << endl;
	int i,j;
	int flag[countc],flag_boy[10005];
	for( i = 0; i < countc; i++ ) {
		flag[i] = 0;
	}

	for( i = 0; i < 10005; i++ ) {
		flag_boy[i] = 0;
	}

	// for( i = 0; i < count_breakup; i++ ) {
	// 	cout << "ladka " << breakup_boy[i].name << " ladki " << breakup_girl[i].name << endl;
	// }
	for( i = 0; i < count_breakup; i++) {
		flag_boy[breakup_boy[i].name] = breakup_girl[i].name;
		for( j = 0; j < countc; j++) {
			if ( c[j].B.name == breakup_boy[i].name ) {
				//cout << "couple ka naam " << c[j].B.name  << " breakp wala naam " << breakup_boy[i].name << endl;
				flag[j] = 1 ;
				//cout << "Flag of " << j << " ki value " << flag[j] << endl;
				break;
			}
		}
	}
	//cout << "Loop ke andar jaate huye " << endl;
	int k=0;
	for( i = 0; i < countc; i++ ) {
		//cout << "Flag of " << i << " ki value " << flag[i] << endl;
		if ( flag[i] == 0 ) {
			newCouples[k++] = c[i];
		}
	}
	//cout << "before k " << k << endl;
	couples caller;
	for( i = 0; i < count_breakup; i++ ) {
		for( j = 0; j < number_of_girls; j+=1) {
			if ( breakup_girl[i].name == G[j].name ) {
				G[j].committed = false;
				break;
			}
		} 
		for( j = 0; j < number_of_boys; j+=1) {
			if ( breakup_boy[i].name == B[j].name ) {
				B[j].committed = false;
				break;
			}
		}
	}
	// for( i = 0; i < number_of_boys; i++ ) {
	// 	cout << "I " << i << " status " << B[i].committed << endl;
	// }
	caller.formnewcouples(newCouples,B,G,number_of_boys,number_of_girls,&k,flag_boy);
	//cout << "k " << k << endl; 
	caller.printcouples(newCouples,k);

}

void couples:: printcouples( couples C[], int count)
{
	freopen("couples_afterbreakup.txt","w+",stdout);
	for( int i = 0; i < count; i++ ) {
		cout << "Boy " << C[i].B.name << " and girl " << C[i].G.name << endl; 
	}
}

void couples:: formnewcouples(couples c[], boy B[], girl G[], int number_of_boys, int number_of_girls, int *count, int flag[])
{
	int i,j;
	int max,f;
	for ( i = 1; i <= number_of_girls; i++ ) {							
		//cout << "Girl " << i <<" is " << G[i].committed << endl;
		if (G[i].committed == false ) {
			max = 0,f=0;
			int parameter = G[i].criteria;
			//cout << i << " " << parameter << endl;
			if ( parameter == 1 ) {							
				for ( j = 1; j <= number_of_boys; j++ ) {				
					if ( !B[j].committed && B[j].budget >= G[i].maintenance && B[j].min_attract <= G[i].attract && flag[B[j].name] != G[i].name) {
						if ( B[max].attract < B[j].attract ) {
							max = j;
							f = 1;
						}
					}
				}

			} else if ( parameter == 2 ) {				

				for ( j = 1; j <= number_of_boys; j++ ) {				
					if ( !B[j].committed && B[j].budget >= G[i].maintenance && B[j].min_attract <= G[i].attract && flag[B[j].name] != G[i].name ) {
						if ( B[max].budget < B[j].budget ) {
							max = j;
							f = 1;
						}
					}
				}

			} else if ( parameter == 3 ) {				
				for ( j = 1; j <= number_of_boys; j++ ) {				
					if ( !B[j].committed && B[j].budget >= G[i].maintenance && B[j].min_attract <= G[i].attract && flag[B[j].name] != G[i].name ) {

						if ( B[max].intelligence < B[j].intelligence ) {
							max = j;
							f = 1;
						}
					}
				}
			}
			if(f) {
					//cout << i << " done" << endl;
				B[max].committed = true;
				G[i].committed = true;
				c[(*count)++].add(B[max],G[i]);
			}	
		}
	}
}

void couples:: form2(couples c[], boy B[], girl G[], int number_of_boys, int number_of_girls, int *count)
{
	int i,j;
	int max,f;
	int k;
	int gc=0,bc=0;
	for ( i = 1; i <= number_of_girls + number_of_boys; i++ ) {	
		if ( i%2 == 0 && gc < number_of_girls ) {
		//cout << "Inside Girl loop " << i << endl;						
		//cout << "Girl " << i <<" is " << G[i].committed << endl;
			if (G[gc].committed == false ) {
				max = 0,f=0;
				int parameter = G[gc].criteria;
			//cout << i << " " << parameter << endl;
				if ( parameter == 1 ) {							
					for ( j = 1; j <= number_of_boys; j++ ) {				
						if ( !B[j].committed && B[j].budget >= G[gc].maintenance && B[j].min_attract <= G[gc].attract ) {
							if ( B[max].attract < B[j].attract ) {
								max = j;
								f = 1;
							}
						}
					}

				} else if ( parameter == 2 ) {				

					for ( j = 1; j <= number_of_boys; j++ ) {				
						if ( !B[j].committed && B[j].budget >= G[gc].maintenance && B[j].min_attract <= G[gc].attract  ) {
							if ( B[max].budget < B[j].budget ) {
								max = j;
								f = 1;
							}
						}
					}

				} else if ( parameter == 3 ) {				
					for ( j = 1; j <= number_of_boys; j++ ) {				
						if ( !B[j].committed && B[j].budget >= G[gc].maintenance && B[j].min_attract <= G[gc].attract ) {

							if ( B[max].intelligence < B[j].intelligence ) {
								max = j;
								f = 1;
							}
						}
					}
				}
				if(f) {
					//cout << i << " done" << endl;
					B[max].committed = true;
					G[gc].committed = true;
					c[(*count)++].add(B[max],G[gc]);
				}
				gc++;	
			}
		} else if (i%2 == 1 && bc < number_of_boys ){
			//cout << "Inside Boy loop " << i << endl;
			max = -1;
			int index;
			for( j = 0; j < number_of_girls; j++) {
				if ( G[j].attract > max ) {
					max = G[i].attract;
					index = j;
				}
			}
			if ( max > 0 ) {
				B[bc].committed = true;
				G[index].committed = true;
				c[(*count)++].add(B[bc],G[max]);	
			}
			bc++;
		}
	}
}