#include <iostream>
#include <stdio.h>
#include "match_making.hpp"
using namespace std;
int main()			/*! \brief Main class for Question 1
 					 *         Calls appropirate methods of required class to form couples.
 					 *
 					 */
{
	couples c[1000];
	couples P;
	match_making m;
	int count = 0;
	m.match(c,&count);
	P.print(c,count);
}