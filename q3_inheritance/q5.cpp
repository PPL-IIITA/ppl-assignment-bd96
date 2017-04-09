#include <bits/stdc++.h>
#include "couples.hpp"
#include "Input.hpp"
#include "h_c.hpp"
using namespace std;
int main()
{
	Input I;
	boy B[10005],caller_boy;
	girl G[10005],caller_girl;
	gift_alloc caller;
	int cb = 0, cg = 0, countc = 0,countg = 0;
	I.inputbg(B, G, &cb, &cg);
	gifts gif[10005];
	gift_alloc gift_basket[10005];
	couples Couples[10005];
	couples C;
	caller_girl.sortm(G,cg);
	caller_boy.sorta(B,cb);
	C.form2(Couples,B,G,cb,cg,&countc);
	int i;
	int tcnt = 0;
	caller.inputgifts(gif,&countg);
	caller.make_basket(gift_basket,gif,Couples,countg,countc,&tcnt);
	h_c callerhc;
	h_c H[1000];
	int cnt = 0;
	callerhc.happiness(H,gift_basket,tcnt,&cnt);
	int k = rand()%countc;
	k++;
	callerhc.printmost(H,k,cnt); 
}