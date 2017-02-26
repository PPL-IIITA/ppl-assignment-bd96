#include <bits/stdc++.h>
#include "gift_alloc.hpp"
using namespace std;	
void gift_alloc::add(gift_alloc GADD[],int n, int t,int p,int v,couples c,int *count) 
{  	/** Stores the information about the gifts. */
	GADD[(*count)].B = c.b;
	GADD[(*count)].G = c.g;
	GADD[(*count)].number = n;
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
		time_t now; now = time(0);
		char* TIM = ctime (&now);
		if ( GADD[i].gtype == 1) {
			cout << "Boy " << GADD[i].B.name << " " << "gifted " << GADD[i].number << "(Essential)" <<  " of price " << GADD[i].price << " and value "<< GADD[i].value << " to " << "Girl " << GADD[i].G.name << " at " <<TIM << endl;	
		} else if ( GADD[i].gtype == 2) {
			cout << "Boy " << GADD[i].B.name << " " << "gifted " << GADD[i].number << "(Luxury)" <<  " of price " << GADD[i].price << " and value "<< GADD[i].value << " to " << "Girl " << GADD[i].G.name << " at " << TIM << endl;	
		} else if ( GADD[i].gtype == 3) {
			cout << "Boy " << GADD[i].B.name << " " << "gifted " << GADD[i].number << "(Utility)" <<  " of price " << GADD[i].price << " and value "<< GADD[i].value << " to " << "Girl " << GADD[i].G.name << " at " << TIM <<endl;	
		}
	}
}
