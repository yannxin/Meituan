// Bulb.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define N 101

int bulb[N];

int _tmain(int argc, _TCHAR* argv[])
{
	int i, j, k;
	for (i = 1; i < N; i++)
	{
		j = i;
		while (j < N)
		{
			bulb[j] = 1 - bulb[j];
			j += i;
		}
	}

	k = 0;
	for (i = 1; i < N; i++)
	{
		if (1 == bulb[i])
		{
			k++;
			printf("%d ", i);
		}
	}
	printf("\n%d\n", k);
	return 0;
}

