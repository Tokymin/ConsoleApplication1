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
}SqQueue;
//������
//��ʼ״̬���ӿգ���Q.front == Q.rear = 0;
//����ָ���1��Q.front=(Q.front+1)%MaxSize
//��βָ���1��Q.rear = (Q.rear + 1) % MaxSize
//���г��ȣ�(Q.rear+ MaxSize- Q.front) % MaxSize
//���Ӳ������Ӳ���ʱ������ֵ����βԪ�أ��ٽ���βָ��rear˳ʱ�뷽���1��
//���Ӳ������Ӳ���ʱ����ȡ��ͷԪ��ֵ���ٽ���ͷָ��˳ʱ�뷽���1��

//void InitQueue(SqQueue &Q) {
//	Q.rear = Q.front = 0;
//
//}

//bool isEmpty(SqQueue &Q) {
//	if (Q.rear == Q.front) {
//		return true;
//	}
//	return false;
//}
/*����*/
bool EnQueue(SqQueue &Q,ElementType x) {
	if ((Q.rear+1)&MaxSize==Q.front)//����
		return false;
	Q.data[Q.rear] = x;
  	Q.rear = (Q.rear + 1) % MaxSize;//��βָ���1ȡģ
	return true;
}
/*����*/
bool DeQueue(SqQueue &Q, ElementType &x) {
	if (Q.rear  == Q.front)//�ӿ�
		return false;
	x = Q.data[Q.front] ;
	Q.front = (Q.front + 1) % MaxSize;//��βָ���1ȡģ
	return true;
}

