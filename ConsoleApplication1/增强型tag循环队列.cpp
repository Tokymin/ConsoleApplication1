//课后题二.1
//tag是用于区别在front=rear时是队满还是队空
#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int

//定义一个数据结构

typedef struct {
	//队列的顺序存储
	ElementType data[MaxSize];
	int front, rear;//队头和队尾指针
	bool tag;//用于标记是否为空
}SqQueue;
//操作：
//初始状态:tag=0;front=rear=0;
//队空：Q.front == Q.rear且tag = 0;
//队满条件：Q.front==Q.rear且Q.tag==1;

//进队操作：Q.data[Q.rear]=x；且Q.rear=(Q.rear+1)%MaxSize;Q.tag=1;

//出队操作：x=Q.data[Q.font]；Q.font=(Q.front+1)%MaxSize;Q.tag=0;

void InitQueue(SqQueue &Q) {
	Q.rear = Q.front = 0;

}

bool isEmpty(SqQueue &Q) {
	if (Q.rear == Q.front) {
		return true;
	}
	return false;
}
/*进队*/
int EnQueue(SqQueue &Q, ElementType x) {
	if (Q.rear== Q.front&&Q.tag==1)//队满
		return false;
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % MaxSize;//队尾指针加1取模
	Q.tag = 1;
	return true;
}
/*出队*/
bool DeQueue1(SqQueue &Q, ElementType &x) {
	if (Q.rear == Q.front&&Q.tag == 0)//队空
		return false;
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;//队尾指针加1取模
	Q.tag = 0;
	return true;
}
