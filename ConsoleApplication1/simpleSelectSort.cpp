
#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
int main1()
{
	int a[10], i, j, k, t;
	printf("input10numbers:\n");
	for (i = 0; i<10; i++)
		scanf("%d", &a[i]);
	printf("\n");
	for (i = 0; i<10; i++)
	{
		t = i;
		for (j = i + 1; j<10; j++)
		{
			if (a[t] > a[j])
				t = j;


		}
		int temp = a[i];
		a[i] = a[t];
		a[t] = temp;
	}
	printf("thesortednumbers:\n");
	for (i = 0; i<10; i++)
		printf("%-3d", a[i]);
	return 0;
}
