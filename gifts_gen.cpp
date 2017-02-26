#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <cstdlib>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
	srand(time(NULL));
	freopen("input_gift.txt", "w", stdout);
	int i;
	int temp;
	int gift_num = rand() % 95;
	gift_num++;
	while(gift_num < 90 ) {
		gift_num = rand() % 95;
		gift_num++;
	}
	int type[gift_num+1], price[gift_num+1], value[gift_num+1], uvlr[gift_num+1], ucd[gift_num+1];
	for(i = 0; i < gift_num; i++){
		//cout << i << " ";				
		temp = rand()%3;				// GIFT TYPE
		temp++;
		type[i] = temp;			
		temp = rand()% 500;			// GIFT PRICE
		temp++;
		price[i] = temp;
		temp = rand()% 10;			// GIFT VALUE
		temp++;
		value[i] = temp;
		temp = rand()% 10;			// GIFT UVLR
		temp++;
		uvlr[i] = temp;
		temp = rand()% 3;			// GIFT UCD
		temp++;
		ucd[i] = temp;									
	}
	sort(price,price+gift_num);
	cout << gift_num << endl;
	for( i = 0; i < gift_num; i++ ) {
		cout << i+1 << " " << type[i] << " " << price[i] << " " << value[i] << " " << uvlr[i] << " " << ucd[i] << endl;
	}
}
