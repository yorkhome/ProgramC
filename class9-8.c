#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//дһ�����뺯��
/*
struct student {
	long num;
	float score;
	struct student* next;
};

struct student *insert(struct student * head,struct student * stud)//������ڵ�Ͳ���ڵ�
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
		if (p0->num < p1->num) {//p0<p1,����
			if (head == p1) {//���p1��ͷ���
				p0->next = p1;
				head->next = p0;
			}
			else {//����ͷ���
				p2->next = p0;
				p0->next = p1;
				
			}
		}
		else {//��β���p1.next=NULL
			p1->next = p0;
			p0->next = NULL;
		}
	}
	return head;
};
*/