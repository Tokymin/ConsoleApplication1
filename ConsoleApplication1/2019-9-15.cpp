#include "stdafx.h"
#include "math.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>
using namespace std;

//�������� 
//������������a��b��1 <= a <= b <= 1000000��, 
//Ҫ������ڱ�����[a, b](����a��b)���ж��ٻ���������
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
	//ʱ�䳬��
	int front = 0, rear = str.length() - 1;
	for (int i = 0; i < str.length() / 2;i++) {
		if (!str.substr(front,1).compare(str.substr(rear,1))) {//����0˵�����
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

	//��ת�ַ����ķ���
	//reverse(str.begin(), str.end());
	///*printf("%s",str.c_str());
	//printf("%s", str2.c_str());*/
	//if (!str.compare(str2)) {//����0˵�����
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
			 //ת�ַ����ķ�ʽ������
			/*string s = std::to_string(j);*/
			//�ж��ǲ��ǻ���
			/*int flag1 =isPalindromic(j);*/
			//�ж��ǲ�������
				//= isPrime(j);
			if (isPalindromic(j)) {
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}


//sum = 2 + 5 + 8 + 11 + 14 + ��������������n����sum��ǰn��͡�

int main() {
	int n;
	scanf("%d",&n);
	long sum = (n*(3 * n + 1)) / 2;
	printf("%lld",sum);
}