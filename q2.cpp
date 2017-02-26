#include <bits/stdc++.h>
#include "h_c.hpp"
using namespace std;
int main()
{ 
	srand(time(NULL));
	gifts GIFT[100],GA;
	couples c[1000];
	gift_alloc GADD[10000],GD;
	int number_of_couples=0, number_of_gifts=0, count = 1,cnt=1;
	GA.inputG(GIFT,&number_of_gifts);
	GA.inputC(c,&number_of_couples);
	GA.alloc(GADD,GIFT,c,number_of_couples,number_of_gifts,&count);
	GD.print(GADD,count);
	h_c H[1000],h1;
	h1.happiness(H,GADD,count,&cnt);
	int k = rand()%number_of_couples;
	k++;
	h1.printhnc(H,k,cnt);
}