#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int

//����һ�����ݽṹ

typedef struct  {
	//���е�˳��洢
	ElementType data[MaxSize];
	int front, rear;//��ͷ�Ͷ�βָ��
}SqQueue;
//������
//��ʼ״̬���ӿգ���Q.front == Q.rear = 0;
//���Ӳ������Ӳ���ʱ������ֵ����βԪ�أ��ٽ���βָ��rear��1��
//���Ӳ������Բ���ʱ����ȡ��ͷԪ��ֵ���ٽ���ͷָ���1��
