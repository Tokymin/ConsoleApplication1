/*Ö÷ÔªËØ²éÕÒ*/
#include "stdafx.h"
#include "math.h"
#include <stdlib.h>

#define MaxSize 30

int Majority(int A[],int n) {
	int i, c, count = 1;
	c = A[0];
	for (int i = 1; i < n;i++) {
		if (A[i]==c) {
			count++;
		}
		else {
			if (count > 0) {
				count--;
			}
			else {
				c = A[i];
				count = 1;
			}
		}
	}
	if (count>0) {
		for (i = count = 0; i < n;i++) {
			if (A[i]==c) {
				count++;
			}
		}
	}
	if (count > n / 2)
		return c;
	else
	{
		return -1;
	}
}
int mainwork12() {
	int R[] = { 1,2,5,6,8,10,13,14,16,17 };
	int result = Majority(R,10);
	printf("%d", result);
	return 1;
}