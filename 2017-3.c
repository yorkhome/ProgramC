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
	printf("请录入学生信息:");
	for (int i = 0; i < 4;i++) {//输入数据
		scanf("%s %f %f %f", stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	}
	//p = stu;
	for (int i = 0; i < 4; i++) {//算平均
		int temp;
		stu[i].avg = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
		if (max < stu[i].avg) {
			max = stu[i].avg;
			tag = i;
		}
	}
	//输出
	printf("平均成绩最高的信息：\n姓名：%s 语文：%f 数学：%f 外语：%f", stu[tag].name, stu[tag].score[0], stu[tag].score[1], stu[tag].score[2]);
}
*/