#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 30
#define ElementType int

//定义一个数据结构

typedef struct LNode {
	//单链表
	ElementType data;
	struct LNode *next;
}LNode, *LinkList;

LinkList createLinklist(LinkList &L) {
	//尾插法建立链表
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
	//删除指定值为x的元素,带头结点
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
			//删除元素的操作
			s = p->next;
			p->next=s->next;
			free(s);
		}
		if (p->data==x) {//最后可能碰到一串x在最后的情况。
			s = p;
			p = s->next;
			free(s);
		}
	}

	return lnode;
}


void Dele_x_head(LinkList &L, ElementType x) {
	//L为带头结点的单链表，删除所有值为x的节点
	LNode *p = L->next, *pre = L, *q;//置p和pre初值
	while (p != NULL) {
		if (p->data==x) {
			q = p;
			p = p->next;
			pre ->next = p;
			free(q);	
		}
		else {//否则两个指针同步后移
			pre = p;
			p = p->next;
		}
	}


}

void Dele_x_head2(LinkList &L, ElementType x) {
	//L为带头结点的单链表，删除所有值为x的节点
	LNode *p = L->next, *r = L, *q;//置p和r初值,r用于指向尾结点，其初值为头结点
	while (p != NULL) {
		if (p->data != x) {
			r->next = p;
			r = p;
			p = p->next;
		}
		else {//*p节点值为x时反而将其释放
			q = p;
			p = p->next;
			free(q);
		}
	}
	r->next = NULL;//插入结束置空

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
	//此函数用于反向输出链表元素的值，可用栈实现
	//也可用递归调用
	if (L->next!=NULL) {
		verseprint(L->next);
	}
	printf(",%d",L->data);

}


int mainSingleLink() {
	LinkList L;
	LNode *m;
	L=createLinklist(L);
	/*测试Input:2 2 3 2 2 4 2 0 7 2 2 2 2 2 9999;*/
	/*Dele_x_head(L,2);*/
	/*L=deleteX(L, 2);*/
	/*m = L;*/
	//while (m->next!= NULL) {
	//	printf("%d,", m->next->data);
	//	m = m->next;
	//}

	/*测试Input:1 2 3 4 5 6 7 8 9 9999;*/
	verseprint(L);
	return 0;
}