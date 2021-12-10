#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//写一个插入函数
/*
struct student {
	long num;
	float score;
	struct student* next;
};

struct student *insert(struct student * head,struct student * stud)//被插入节点和插入节点
{
	struct student* p0, * p1, * p2;
	p1= head;
	p0 = stud;
	if (head == NULL) {
		head = p0;
		p0->next = NULL;
	}
	else {
		while ((p0->num > p1->num) && (p1->next != NULL)) {
			p2 = p1;
			p1 = p1->next;
		}
		if (p0->num < p1->num) {//p0<p1,插入
			if (head == p1) {//如果p1是头结点
				p0->next = p1;
				head->next = p0;
			}
			else {//不在头结点
				p2->next = p0;
				p0->next = p1;
				
			}
		}
		else {//在尾结点p1.next=NULL
			p1->next = p0;
			p0->next = NULL;
		}
	}
	return head;
};
*/