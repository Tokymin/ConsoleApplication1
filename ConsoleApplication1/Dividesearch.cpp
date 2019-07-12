/*择半查找*/
#include "stdafx.h"
#include "math.h"
#include <stdlib.h>

#define MaxSize 30
int searchExchange(int A[],int x,int n) {
	int low = 0, high = n - 1, mid;
	while (low < high) {
		mid = (low + high) / 2;
		if (A[mid] == x)break;
		else if (A[mid] < x)
			low = mid + 1;
		else
			high = mid - 1;
	}//下面if只执行一个
		if (A[mid]==x&&mid!=n-1) {
			int t = A[mid];
			A[mid] = A[mid + 1];
			A[mid + 1] = t;
			return t;
		}
		if (low>high) {
			for (int i = n - 1; i > high;i--) {
				A[i + 1] = A[i];
				A[i + 1] = x;
			}
			return 0;
		}
}

void mainer() {
	int R[] = { 1,2,5,6,8,10,13,14,16,17 };
	int result=searchExchange(R, 14, 10);
	printf("%d",result);
}