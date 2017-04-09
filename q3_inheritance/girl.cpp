#include <bits/stdc++.h>
#include "girl.hpp"
using namespace std;
void girl :: sortm(girl G[], int n )
{
	int i, j;
	bool swapped;
	for (i = 0; i < n-1; i++)
	{
		swapped = false;
		for (j = 0; j < n-i-1; j++)
		{
			if (G[j].maintenance > G[j+1].maintenance)
			{
				girl temp;
				temp = G[j];
				G[j] = G[j+1];
				G[j+1] = temp;
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}
}
