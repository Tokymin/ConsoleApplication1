#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 30
#define ElementType int

//����һ�����ݽṹ

typedef struct LNode {
	//������
	ElementType data;
	struct LNode *next;
}LNode, *LinkList;

LinkList createLinklist(LinkList &L) {
	//β�巨��������
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	LNode *s, *r = L;
	scanf("%d",&x);
	while (x!=9999) {
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		r->next = s;
		r = s;
		scanf("%d",&x);

	}
	r->next = NULL;
	return L;
}
LinkList deleteX(LinkList &lnode, ElementType x) {
	//ɾ��ָ��ֵΪx��Ԫ��,��ͷ���
	/*LinkList *L;
	L = &linklist;*/
	LNode *p,*s;
	lnode = lnode->next;
	while ((lnode->data)==x) {
		lnode = lnode->next;
	}
	p = lnode;
	while (p->next!=NULL) {
		p = p->next;
		if (p->next->data==x) {
			//ɾ��Ԫ�صĲ���
			s = p->next;
			p->next=s->next;
			free(s);
		}
		if (p->data==x) {//����������һ��x�����������
			s = p;
			p = s->next;
			free(s);
		}
	}

	return lnode;
}


void Dele_x_head(LinkList &L, ElementType x) {
	//LΪ��ͷ���ĵ�����ɾ������ֵΪx�Ľڵ�
	LNode *p = L->next, *pre = L, *q;//��p��pre��ֵ
	while (p != NULL) {
		if (p->data==x) {
			q = p;
			p = p->next;
			pre ->next = p;
			free(q);	
		}
		else {//��������ָ��ͬ������
			pre = p;
			p = p->next;
		}
	}


}

void Dele_x_head2(LinkList &L, ElementType x) {
	//LΪ��ͷ���ĵ�����ɾ������ֵΪx�Ľڵ�
	LNode *p = L->next, *r = L, *q;//��p��r��ֵ,r����ָ��β��㣬���ֵΪͷ���
	while (p != NULL) {
		if (p->data != x) {
			r->next = p;
			r = p;
			p = p->next;
		}
		else {//*p�ڵ�ֵΪxʱ���������ͷ�
			q = p;
			p = p->next;
			free(q);
		}
	}
	r->next = NULL;//��������ÿ�

}

void Dele_x(LinkList &L,ElementType x ) {
	LNode *p;
	if (L==NULL) {
		return;
	}
	if (L->data==x) {
		p = L;
		L = L->next;
		free(p);
		Dele_x(L,x);
	}
	else
		Dele_x(L->next, x);
}

void verseprint(LinkList L) {
	//�˺������ڷ����������Ԫ�ص�ֵ������ջʵ��
	//Ҳ���õݹ����
	if (L->next!=NULL) {
		verseprint(L->next);
	}
	printf(",%d",L->data);

}


int mainSingleLink() {
	LinkList L;
	LNode *m;
	L=createLinklist(L);
	/*����Input:2 2 3 2 2 4 2 0 7 2 2 2 2 2 9999;*/
	/*Dele_x_head(L,2);*/
	/*L=deleteX(L, 2);*/
	/*m = L;*/
	//while (m->next!= NULL) {
	//	printf("%d,", m->next->data);
	//	m = m->next;
	//}

	/*����Input:1 2 3 4 5 6 7 8 9 9999;*/
	verseprint(L);
	return 0;
}