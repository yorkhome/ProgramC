#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
/* //建立链表有问题，整个代码暂时不写了
#define LEN sizeof(struct student)
//总和前几节函数，写一个main实现功能
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
	printf("请输入：\n");
	head = creat();
	print(head);
	printf("请输入要删除的编号：\n");
	scanf("%ld", &del_num);
	head = del(head, del_num);
	print(head);
	printf("请输入要插入的编号：\n");
	scanf("%ld,%f", &stu.num,&stu.score);
	head = insert(head, &stu);
	print(head);
	return 0;
}
//建立链表

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
//输出数据
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
//删除
struct student* del(struct student* head, long num) {
	struct student* p1, * p2;
	if (head == NULL) {//如果为空直接返回
		printf("\nlist null!\n");
		return head;
	}
	p2 = p1 = head;
	while (p1->num != num && p1->next != NULL) {//没找到继续找
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

//插入
struct student* insert(struct student* head, struct student* stud)//被插入节点和插入节点
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