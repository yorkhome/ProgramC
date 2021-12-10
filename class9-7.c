#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//删除节点
/*
struct student {
	long num;
	float score;
	struct student* next;
};
int main() {
	struct student* del(struct student* head, long num);
	struct student a, b, c, * head, * p;
	a.num = 1011; a.score = 90;
	b.num = 1012; b.score = 80;
	c.num = 1013; c.score = 70;
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;
	do {
		printf("%ld,%5.1f\n", p->num, p->score);
		p = p->next;
	} while (p != NULL);
	p = del(head, 1012);//删除
	do {
		printf("%ld,%5.1f\n", p->num, p->score);
		p = p->next;
	} while (p != NULL);
}

//删除
struct student* del(struct student* head, long num) {
	struct student * p1, * p2;
	if (head == NULL) {//如果为空直接返回
		printf("\nlist null!\n");
		return head;
	}
	p2= p1 = head;
	while (p1->num != num&&p1->next!=NULL) {//没找到继续找
		p2 = p1;
		p1 = p1->next;
	}
	//找到了，分情况
	if (num == p1->num) {
		if (p1 == head) {//在头节点
			head = p1->next;
		}
		else {//不在头节点
			p2->next = p1->next;
		}
		printf("delete:%ld\n", num);
	}
	else
		printf("%ld not been found!\n", num);
	return head;
}
*/