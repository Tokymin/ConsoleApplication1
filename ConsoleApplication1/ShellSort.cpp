#include "stdafx.h"
#include "math.h"
#include <stdlib.h>

#define MaxSize 30

typedef struct {
	int data[MaxSize];
	int length;

}Sqlist;

void shellSort(Sqlist L, int len) {
	/*Ï£¶ûÅÅÐò*/
	int temp;
	int i, j,d;
	d = len / 2;
	while (d>0) {
		for (i = d; i < len;i++) {
			temp = L.data[i];
			j = i - d;
			while (j>=0&&temp<L.data[j]) {
				L.data[j + d] = L.data[j];
				j = j - d;
			}
			L.data[j + d] = temp;
		}
		d = d / 2;
	}

}

int main()
{

	Sqlist L;
	L.length = 5;
	L.data[0] = 4;
	L.data[1] = 3;
	L.data[2] = 1;
	L.data[3] = 2;
	L.data[4] = 5;
	shellSort(L, 5);
	for (int i = 0; i < 5; i++) {
		printf("%d,", L.data[i]);
	}
	return 0;
}