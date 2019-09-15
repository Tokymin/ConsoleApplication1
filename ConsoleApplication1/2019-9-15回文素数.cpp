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
//	//！！！逆置一个数的方法！！！
//	int m = n;       //n的值赋给m
//	int sum = 0;
//	while (m) {          //将m倒置，即n的倒置，存在sum中
//		sum = sum * 10 + m % 10;
//		m /= 10;
//	}
//	if (sum == n)     //判断sum（倒置后的n）和n是否相等
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