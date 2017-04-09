#include <bits/stdc++.h>
#include "boy.hpp"
using namespace std;
void boy :: sorta(boy B[], int n )
{
	int i, j;
	bool swapped;
	for (i = 0; i < n-1; i++)
	{
		swapped = false;
		for (j = 0; j < n-i-1; j++)
		{
			if (B[j].attract > B[j+1].attract)
			{
				boy temp;
				temp = B[j];
				B[j] = B[j+1];
				B[j+1] = temp;
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}
}
