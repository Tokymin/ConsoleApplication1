#include "stdafx.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>
using namespace std;
//int isPrime(long n) {
//	if (n == 1)
//		return 0;
//	if (n == 2)
//		return 1;
//	if (n % 2 == 0)
//		return 0;
//	for (long i = 3; i*i <= n; i += 2)
//		if (n % i == 0)
//			return false;
//	return 1;
//}
//int isPalindromic(long n) {
//	//����������һ�����ķ���������
//	int m = n;       //n��ֵ����m
//	int sum = 0;
//	while (m) {          //��m���ã���n�ĵ��ã�����sum��
//		sum = sum * 10 + m % 10;
//		m /= 10;
//	}
//	if (sum == n)     //�ж�sum�����ú��n����n�Ƿ����
//		if (isPrime(n)) {
//			return 1;
//		}
//	return false;
//}
//int mainTest() {
//	long numAarry[30][2];
//	int length = 0;
//	while (true) {
//		int a; int b;
//		cin >> a >> b;
//		if (a == 0) {
//			break;
//		}
//		else
//		{
//			numAarry[length][0] = a;
//			numAarry[length][1] = b;
//		}
//		length++;
//	}
//	for (int i = 0; i <length; i++) {
//		int count = 0;
//		for (long j = numAarry[i][0]; j <= numAarry[i][1]; j++) {
//			if (isPalindromic(j)) {
//				count++;
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 1;
//}