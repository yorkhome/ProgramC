#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//#define N 2
//�е�覴ã����ø���
/*
struct Student {
	char num[5];
	char name[8];
	int score[3];
	int avg;
}stu[N];
int main() {
	int sum,max,tag;
	//------------------����
	printf("���������ݣ�");
	for (int i = 0; i < N; i++) {//��������
		tag = i;
		sum = 0;
		printf("������ѧ�ţ�");
		scanf("%s",&stu[i].num);
		printf("������������");
		scanf("%s", &stu[i].name);
		for (int j = 0; j < 3; j++) {
			printf("������ɼ�%d��", j + 1);
			scanf("%d", &stu[i].score[j]);
			sum += stu[i].score[j];
		}

		stu[i].avg = sum / 3;//ƽ��ֵ

		max = stu[i].avg;//�����ֵ
		if (max < stu[i + 1].avg && i < 3) {
			max = stu[i + 1].avg;
			tag = i+1;
		}
	}

	//------------------���
	printf("ƽ���ɼ���\n");//���ƽ���ɼ�
	for (int i = 0; i < N; i++) {
			printf("ѧ��%d��ƽ���ɼ���%d\n",i + 1, stu[i].avg);
	}

	printf("��õ�ƽ���ɼ�Ϊѧ��%d��\n",tag);//�����߷ֳɼ�
	printf("%s %s ", stu[tag].num, stu[tag].name);
	for(int i=0;i<3;i++)
	printf("%d ", stu[tag].score[i]);
	
	
}
*/