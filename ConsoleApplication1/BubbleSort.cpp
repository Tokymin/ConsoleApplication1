#include "stdafx.h"
#include "math.h"
#include <stdlib.h>

#define MaxSize 30

typedef struct {
	int data[MaxSize];
	int length;

}Sqlist;
void bubbleSort(Sqlist arr, int len) {
	/*冒泡排序*/
	int temp;
	int i, j;
	for (i = 0; i<len - 1; i++) /*外循环为排序趟数，len个数进行len-1趟*/
		for (j = 0; j<len - 1 - i; j++) { /*内循环为每趟比较的次数，第i趟比较len-i次*/
			if (arr.data[j] > arr.data[j + 1]) { /*相邻元素比较，若逆序则交换（升序为左大于右，逆序反之） */
				temp = arr.data[j];
				arr.data[j] = arr.data[j + 1];
				arr.data[j + 1] = temp;
			}
		}
}

int testmain()
{

	Sqlist L;
	L.length = 5;
	L.data[0] = 4;
	L.data[1] = 3;
	L.data[2] = 1;
	L.data[3] = 2;
	L.data[4] = 5;
	bubbleSort(L, 5);
	for (int i = 0; i < 5; i++) {
		printf("%d,", L.data[i]);
	}
	return 0;
}