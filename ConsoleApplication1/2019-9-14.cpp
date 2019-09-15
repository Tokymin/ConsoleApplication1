#include "stdafx.h"
#include "math.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>
using namespace std;
//    _  _  _ 
//  | _||_ |_ 
//  ||_  _||_|
// _  _     _ 
// _| _||_| _|
//|_  _|  ||_ 

 //  _  _     _  _  _  _  _  _ 
 //| _| _||_||_ |_   ||_||_|| |
 //||_  _|  | _||_|  ||_| _||_|

int main1() {
	int a[4];//一个三维数组
	while (cin >> a[0] >> a[1] >> a[2] >> a[3])
	{
		for (int j = 1; j <= 3; j++)
		{   //分三行情况来
			if (j == 1)
			{
				for (int i = 0; i<4; i++)
				{//有两种情况
					if (a[i] == 1 || a[i] == 4)
						cout << "   ";
					else
						cout << " _ ";
				}
			}
			if (j == 2)
			{
				for (int i = 0; i<4; i++)
				{
					if (a[i] == 1 || a[i] == 7)
						cout << "  |";
					else if (a[i] == 0)
						cout << "| |";
					else if (a[i] == 2 || a[i] == 3)
						cout << " _|";
					else if (a[i] == 4 || a[i] == 8 || a[i] == 9)
						cout << "|_|";
					else
						cout << "|_ ";
				}
			}
			if (j == 3)
			{
				for (int i = 0; i<4; i++)
				{
					if (a[i] == 0 || a[i] == 6 || a[i] == 8)
						cout << "|_|";
					else if (a[i] == 1 || a[i] == 4 || a[i] == 7)
						cout << "  |";
					else if (a[i] == 2)
						cout << "|_ ";
					else
						cout << " _|";
				}
			}
			cout << endl;
		}
	}
	return 0;

}


//2
//4
//5
//0
//..*..
//..*..
//*****
//.***.
//*.*.*

//....*....
//....*....
//....*....
//....*....
//*********
//...***...
//..*.*.*..
//.*..*..*.
//*...*...*

//.....*.....
//.....*.....
//.....*.....
//.....*.....
//.....*.....
//***********
//....***....
//...*.*.*...
//..*..*..*..
//.*...*...*.
//*....*....*
void printLastColum(int num) {
	int total = num * 2 + 1;//5
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= total; j++) {
			if (j == (total+1)/2 || j == (total + 1) / 2 - i || j == (total + 1) / 2 + i) {
				printf("*");
			}
			else
			{
				printf(".");
			}
		}
		printf("\n");

	}
}
int main2(){
	int a[30];
	int length = 0;
	bool flag = true;
	while (flag) {
		cin >> a[length];
		if (a[length]==0) {
			break;
		}
		length++;	
	}
	for (int i = 0; i <length;i++) {
		//printf("%d",length);
		int column = (a[i] + 1) * 2 + 1;
			for (int firstRow = 0; firstRow < a[i]; firstRow++)
			{
				for (int k = 0; k < a[i]; k++) {
					printf(".");
				}
				printf("*");
				for (int k = 0; k < a[i]; k++) {
					printf(".");
				}
				printf("\n");
			}
			int starNumbers = 2 * a[i] + 1;
			for (int k = 0; k <starNumbers; k++) {
				printf("*");
			}
			printf("\n");
			printLastColum(a[i]);	
	}
	return 0;
}

int main3() {
	//把1看成是"love jiangli", 把2看成是"love xingong"。
	int T;//T组
	cin >> T;
	string strs[20];
	for (int i = 0;i < T; i++) {
		cin >> strs[i];
	}

	for (int i = 0; i < T;i++) {
		for (int k = 0; k < strs[i].length();k++) {
			/*int j = k + 1;*/
			string tag =strs[i].substr(k, 1);//substr(t1,t2);//是指从t1位置开始，长度为t2的字符串
			int label = atoi(tag.c_str());
			if (label==1) {
				printf("love jiangli");
				printf("\n");
			}
			else if(label == 2)
			{
				printf("love xingong");
				printf("\n");
			}
		}
	}
	return 0;
}