//�κ����.1
//tag������������front=rearʱ�Ƕ������Ƕӿ�
#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int

//����һ�����ݽṹ

typedef struct {
	//���е�˳��洢
	ElementType data[MaxSize];
	int front, rear;//��ͷ�Ͷ�βָ��
	bool tag;//���ڱ���Ƿ�Ϊ��
}SqQueue;
//������
//��ʼ״̬:tag=0;front=rear=0;
//�ӿգ�Q.front == Q.rear��tag = 0;
//����������Q.front==Q.rear��Q.tag==1;

//���Ӳ�����Q.data[Q.rear]=x����Q.rear=(Q.rear+1)%MaxSize;Q.tag=1;

//���Ӳ�����x=Q.data[Q.font]��Q.font=(Q.front+1)%MaxSize;Q.tag=0;

void InitQueue(SqQueue &Q) {
	Q.rear = Q.front = 0;

}

bool isEmpty(SqQueue &Q) {
	if (Q.rear == Q.front) {
		return true;
	}
	return false;
}
/*����*/
int EnQueue(SqQueue &Q, ElementType x) {
	if (Q.rear== Q.front&&Q.tag==1)//����
		return false;
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % MaxSize;//��βָ���1ȡģ
	Q.tag = 1;
	return true;
}
/*����*/
bool DeQueue1(SqQueue &Q, ElementType &x) {
	if (Q.rear == Q.front&&Q.tag == 0)//�ӿ�
		return false;
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;//��βָ���1ȡģ
	Q.tag = 0;
	return true;
}
