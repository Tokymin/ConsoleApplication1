#include "stdafx.h"
#include "math.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>
using namespace std;

//回文素数 
//给出两个整数a，b（1 <= a <= b <= 1000000）, 
//要你求出在闭区间[a, b](包含a，b)内有多少回文素数。
//palindromic prime
int isPrime(long n) {
	if (n == 1)
		return false;

	if (n == 2)
		return true;

	if (n % 2 == 0)
		return false;

	int end = sqrt(n);
	for (long i = 3; i <= end; i += 2)
		if (n % i == 0)
			return false;

	return true;
}
int isPalindromic(long n) {
	string str = std::to_string(n);
	string str2 = str;
	/*string strcopy = str.c_str();
	int front=0, rear=str.length()-1;
	std::reverse(str.begin(), str.end());*/
	//时间超限
	int front = 0, rear = str.length() - 1;
	for (int i = 0; i < str.length() / 2;i++) {
		if (!str.substr(front,1).compare(str.substr(rear,1))) {//返回0说明相等
			front++;
			rear--;
		}
		else
		{
			return 0;
		}
		
	}
	if (isPrime(n)) {
		return 1;
	}
	return 0;
}

	//反转字符串的方法
	//reverse(str.begin(), str.end());
	///*printf("%s",str.c_str());
	//printf("%s", str2.c_str());*/
	//if (!str.compare(str2)) {//返回0说明相等
	//	if (isPrime(n)) {
	//		return 1;
	//	}
	//}
	//else
	//{
	//	return 0;
	//}
	//return 1;
int main4() {
	long numAarry[30][2];
	int length = 0;
	/*printf("%d",isPalindromic("123215"));*/
	/*printf("%d", isPrime(2));*/
	while (true) {
		int a; int b;
		cin >> a>>b;
		if (a == 0) {
			break;
		}
		else
		{
			numAarry[length][0] = a;
			numAarry[length][1] = b;
		}
		length++;
	}
	for (int i = 0; i <length;i++) {
		int count = 0;
		for (long j = numAarry[i][0]; j <= numAarry[i][1];j++) {
			 //转字符串的方式！！！
			/*string s = std::to_string(j);*/
			//判断是不是回文
			/*int flag1 =isPalindromic(j);*/
			//判断是不是素数
				//= isPrime(j);
			if (isPalindromic(j)) {
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}


//sum = 2 + 5 + 8 + 11 + 14 + …，输入正整数n，求sum的前n项和。

int main() {
	int n;
	scanf("%d",&n);
	long sum = (n*(3 * n + 1)) / 2;
	printf("%lld",sum);
}