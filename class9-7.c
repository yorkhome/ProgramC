#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//ɾ���ڵ�
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
	p = del(head, 1012);//ɾ��
	do {
		printf("%ld,%5.1f\n", p->num, p->score);
		p = p->next;
	} while (p != NULL);
}

//ɾ��
struct student* del(struct student* head, long num) {
	struct student * p1, * p2;
	if (head == NULL) {//���Ϊ��ֱ�ӷ���
		printf("\nlist null!\n");
		return head;
	}
	p2= p1 = head;
	while (p1->num != num&&p1->next!=NULL) {//û�ҵ�������
		p2 = p1;
		p1 = p1->next;
	}
	//�ҵ��ˣ������
	if (num == p1->num) {
		if (p1 == head) {//��ͷ�ڵ�
			head = p1->next;
		}
		else {//����ͷ�ڵ�
			p2->next = p1->next;
		}
		printf("delete:%ld\n", num);
	}
	else
		printf("%ld not been found!\n", num);
	return head;
}
*/