#include <bits/stdc++.h>
#include "Input.hpp"
using namespace std;
void Input::inputbg( boy b[], girl g[], int *cb, int *cg )
{
	freopen("input.txt","r",stdin);
	int i;
	int number_of_boys,number_of_girls,name,attract,budget,intelligence,min_attract,btype,criteria,gtype;
	cin >> number_of_boys;
	(*cb) = number_of_boys;
	//cout << " Boys " << number_of_boys << endl;
	for( i = 1; i <= number_of_boys; i++ ) {
		cin >> name >> attract >> budget >> intelligence >> min_attract >> btype;
		//cout << "Boy type " << btype << endl;
		if ( btype == 1 ) {
			Miser_boy *temp = new Miser_boy(name,attract,budget,intelligence,min_attract,btype);
			b[i] = *temp;
		} else if ( btype == 2 ) {
			Generous_boy *temp = new Generous_boy(name,attract,budget,intelligence,min_attract,btype);
			b[i] = *temp;
		} else {
			Geek_boy *temp = new Geek_boy(name,attract,budget,intelligence,min_attract,btype);
			b[i] = *temp;
		}
	}
	cin >> number_of_girls;
	(*cg) = number_of_girls;
	for( i = 1; i <= number_of_girls; i++ ) {
		cin >> name >> attract >> budget >> intelligence >> criteria >> gtype;
		if ( gtype == 1 ) {
			Choosy_girl *temp = new Choosy_girl(name,attract,budget,intelligence,criteria,gtype);
			g[i] = *temp;
		} else if ( gtype == 2 ) {
			Normal_girl *temp = new Normal_girl(name,attract,budget,intelligence,criteria,gtype);
			g[i] = *temp;
		} else {
			Desperate_girl *temp = new Desperate_girl(name,attract,budget,intelligence,min_attract,gtype);
			g[i] = *temp;
		}
	}
}
