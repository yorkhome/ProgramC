#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
/* //�������������⣬����������ʱ��д��
#define LEN sizeof(struct student)
//�ܺ�ǰ���ں�����дһ��mainʵ�ֹ���
struct student {
	long num;
	float score;
	struct student* next;
};
int n;
int main() {
	struct student *creat();
	struct student* del(struct student* head, long);
	struct student* insert(struct student* head, struct student*);
	void print(struct Student *);
	struct student* head, stu;
	long del_num;
	printf("�����룺\n");
	head = creat();
	print(head);
	printf("������Ҫɾ���ı�ţ�\n");
	scanf("%ld", &del_num);
	head = del(head, del_num);
	print(head);
	printf("������Ҫ����ı�ţ�\n");
	scanf("%ld,%f", &stu.num,&stu.score);
	head = insert(head, &stu);
	print(head);
	return 0;
}
//��������

struct student *creat(){
	struct student* head;
	struct sutdent* p1, * p2;
	n = 0;
	p1 = p2 = (struct student * ) malloc(LEN);
	scanf("%ld,%f", &p1->num, &p1->score);
	head = NULL;
	while (p1->num != 0) {

	}
};
//�������
void print(struct Student *head) {
	struct student* p;
	{
		printf("xxxxx");
		p = head;
		if (head != NULL) {
			do {
				printf("%ld %5.1f\n", p->num, p->score);
				p = p->next;
			} while (p != NULL);
		}
	};
}
//ɾ��
struct student* del(struct student* head, long num) {
	struct student* p1, * p2;
	if (head == NULL) {//���Ϊ��ֱ�ӷ���
		printf("\nlist null!\n");
		return head;
	}
	p2 = p1 = head;
	while (p1->num != num && p1->next != NULL) {//û�ҵ�������
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

//����
struct student* insert(struct student* head, struct student* stud)//������ڵ�Ͳ���ڵ�
{
	struct student* p0, * p1, * p2;
	p1 = head;
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