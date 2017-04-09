#include <bits/stdc++.h>
#include "gifts.hpp"
#include "Essential_gifts.hpp"
#include "luxury_gifts.hpp"
#include "utility_gifts.hpp"
using namespace std;

void gifts :: inputgifts(gifts g[], int *cnt )
{
	freopen("input_gift.txt","r+",stdin);
	int i,number_of_gifts;
	cin >> number_of_gifts;
	(*cnt) = number_of_gifts;
	int Gnumber, Gtype, Gprice, Gvalue;
	for( i = 1; i<= number_of_gifts; i++ ) {
		cin >> Gnumber >> Gtype >> Gprice >> Gvalue;
		if ( Gtype == 1 ) {
			//cout << Gtype << endl;
			int t1,t2;
			cin >> t1 >> t2;
			Essential_gifts *temp = new Essential_gifts(Gnumber,Gtype,Gprice, Gvalue);
			g[i] = *temp;
		}
		// else if ( Gtype == 2) {
		// 	int t1,t2;
		// 	cin >> t1 >> t2;
		// }
		else if ( Gtype == 2 ) {
			int Lux_rat, Lux_diff;
			cin >> Lux_rat >> Lux_diff;
			luxury_gifts *temp = new luxury_gifts(Gnumber,Gtype,Gprice, Gvalue, Lux_rat, Lux_diff);
			g[i] = *temp;
		} else {
			//cout << Gtype << endl;
			int Util_class, Util_val;
			cin >> Util_val >> Util_class;
			utility_gifts *temp = new utility_gifts(Gnumber,Gtype,Gprice, Gvalue, Util_val, Util_class);
			g[i] = *temp;
		}

	}
	fclose(stdin);
}

void gifts :: prints()
{
	cout << "Hello from parent" << endl;
}
