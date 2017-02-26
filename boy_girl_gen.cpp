#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <cstdlib>
#include <string.h>
using namespace std;

int main(){
	srand(time(NULL));
	freopen("input.txt", "w", stdout);
	int i;
	int b[31],g[16];
	for( i = 0; i < 31; i++) {
		b[i] = 0;
	}
	for( i = 0; i < 16; i++ ) {
		g[i] = 0;
	}
	int temp;
	int boy_num = rand() % 30;
	boy_num++;
	int girl_num = rand() % 15;
	girl_num++;
	cout << boy_num << endl;
	for(i = 0; i < boy_num; i++){
		temp = rand()% boy_num;   		// BOY NAME
		temp++;
		while(b[temp] != 0 ) {
			temp = rand()% boy_num;
			temp++;
		}
		b[temp] = 1;
		cout << temp << " ";
		temp = rand()%10;				// BOY ATTRACTIVENESS
		temp++;
		cout << temp << " ";			
		temp = rand()% 10000;			// BOY BUDGET
		temp++;
		cout << temp << " ";
		temp = rand()% 10;			// BOY INTELLIGENCE
		temp++;
		cout << temp << " ";
		temp = rand()% 10;			// BOY MIN_ATTRACTION REQUIRED
		temp++;
		cout << temp << " ";
		temp = rand()% 3;			// BOY TYPE
		temp++;
		cout << temp << endl;									
	}
	cout << girl_num << endl;
	for(i = 0; i < girl_num; i++){
		temp = rand()% girl_num;   		// GIRL NAME
		temp++;
		while(g[temp] != 0 ) {
			temp = rand()% girl_num;
			temp++;
		}
		g[temp] = 1;
		cout << temp << " ";
		temp = rand()%10;				// GIRL ATTRACTIVENESS
		temp++;
		cout << temp << " ";			
		temp = rand()% 10000;			// GIRL BUDGET
		temp++;
		cout << temp << " ";
		temp = rand()% 10;			// GIRL INTELLIGENCE
		temp++;
		cout << temp << " ";
		temp = rand()%3;			// GIRL CRITERIA
		temp++;
		cout << temp << " ";
		temp = rand()% 3;			// GIRL TYPE
		temp++;
		cout << temp << endl;											
	}
}
