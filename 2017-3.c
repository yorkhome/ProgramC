#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
/*
struct student {
	char name[6];
	float score[3];
	float avg;
}stu[4];
int main() {
	int tag;
	float max = 0;
	struct student* p;
	//p = stu;
	printf("��¼��ѧ����Ϣ:");
	for (int i = 0; i < 4;i++) {//��������
		scanf("%s %f %f %f", stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	}
	//p = stu;
	for (int i = 0; i < 4; i++) {//��ƽ��
		int temp;
		stu[i].avg = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
		if (max < stu[i].avg) {
			max = stu[i].avg;
			tag = i;
		}
	}
	//���
	printf("ƽ���ɼ���ߵ���Ϣ��\n������%s ���ģ�%f ��ѧ��%f ���%f", stu[tag].name, stu[tag].score[0], stu[tag].score[1], stu[tag].score[2]);
}
*/