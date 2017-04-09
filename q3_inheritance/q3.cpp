#include <bits/stdc++.h>
#include "couples.hpp"
#include "Input.hpp"
#include "h_c.hpp"
using namespace std;
int main()
{
	Input I;
	boy B[10005];
	girl G[10005];
	gift_alloc caller;
	int cb = 0, cg = 0, countc = 0,countg = 0;
	I.inputbg(B, G, &cb, &cg);
	gifts gif[10005];
	gift_alloc gift_basket[10005];
	couples Couples[10005];
	couples C;
	C.formcouples(Couples,B,G,cb,cg,&countc);
	int i;
	//cout << countc << endl;o
	// for( i = 0; i < countc; i++ ) {
	// 	//cout << i  << " hey" << endl;
	// 	cout << Couples[i].B.name << " " << Couples[i].G.name << endl;
	// }
	int tcnt = 0;
	caller.inputgifts(gif,&countg);
	caller.make_basket(gift_basket,gif,Couples,countg,countc,&tcnt);
	// cout << "Gifts Allocation" << endl;
	// for( i = 0; i < tcnt; i++) {
	// 	cout << gift_basket[i].B.name << " " << gift_basket[i].G.name << " " << gift_basket[i].gname << endl;
	// }
	h_c callerhc;
	h_c H[1000];
	int cnt = 0;
	callerhc.happiness(H,gift_basket,tcnt,&cnt);
	// cout << " Happiness " << endl;
	// for( i = 0; i < cnt; i++ ) {
	// 	cout << "Happiness of Boy" << H[i].B.name  << " is " << H[i].hb << " , girl " << H[i].G.name  << " is " << H[i].hg << " and couple is " << H[i].hc << " and compatibility is " << H[i].cc << endl; 
	// }
	int k = rand()%countc;
	k++;
	callerhc.printmost(H,k,cnt); 
	//caller.xyz();
}