#include "stdafx.h"
#include "math.h"
#include <stdlib.h>

#define MaxSize 30

typedef struct {
	int data[MaxSize];
	int length;

}Sqlist;
void bubbleSort(Sqlist arr, int len) {
	/*ð������*/
	int temp;
	int i, j;
	for (i = 0; i<len - 1; i++) /*��ѭ��Ϊ����������len��������len-1��*/
		for (j = 0; j<len - 1 - i; j++) { /*��ѭ��Ϊÿ�˱ȽϵĴ�������i�˱Ƚ�len-i��*/
			if (arr.data[j] > arr.data[j + 1]) { /*����Ԫ�رȽϣ��������򽻻�������Ϊ������ң�����֮�� */
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