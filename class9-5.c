#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//#define N 2
//有点瑕疵，懒得改了
/*
struct Student {
	char num[5];
	char name[8];
	int score[3];
	int avg;
}stu[N];
int main() {
	int sum,max,tag;
	//------------------输入
	printf("请输入数据：");
	for (int i = 0; i < N; i++) {//输入数据
		tag = i;
		sum = 0;
		printf("请输入学号：");
		scanf("%s",&stu[i].num);
		printf("请输入姓名：");
		scanf("%s", &stu[i].name);
		for (int j = 0; j < 3; j++) {
			printf("请输入成绩%d：", j + 1);
			scanf("%d", &stu[i].score[j]);
			sum += stu[i].score[j];
		}

		stu[i].avg = sum / 3;//平均值

		max = stu[i].avg;//找最大值
		if (max < stu[i + 1].avg && i < 3) {
			max = stu[i + 1].avg;
			tag = i+1;
		}
	}

	//------------------输出
	printf("平均成绩：\n");//输出平均成绩
	for (int i = 0; i < N; i++) {
			printf("学生%d的平均成绩：%d\n",i + 1, stu[i].avg);
	}

	printf("最好的平均成绩为学生%d：\n",tag);//输出最高分成绩
	printf("%s %s ", stu[tag].num, stu[tag].name);
	for(int i=0;i<3;i++)
	printf("%d ", stu[tag].score[i]);
	
	
}
*/