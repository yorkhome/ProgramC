#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//#define N 5
//
/*
struct Student//����ṹ��
{
	char num[6];
	char name[8];
	int score[4];
}stu[N];
int main() {
	void prints(struct Student stu[6]);
	void inputs();
	inputs();
	prints(stu);
}
void inputs() {//��������
	for (int i = 0; i < N; i++) {
		printf("�������%d��ѧ�����ݣ�", i + 1);
		printf("NO.:");
		scanf("%s", stu[i].num);
		printf("name:");
		scanf("%s", stu[i].name);
		for (int j = 0; j < 3; j++) {
			printf("����%d:", j + 1);
			scanf("%d", &stu[i].score[j]);
		}
	}
}

void prints(struct Student stu[6]) {//�������
	for (int i = 0; i < N; i++) {
		printf("��%d��ѧ����Ϣ��%s %s %d %d %d\n", i + 1, stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
	}
}
*/