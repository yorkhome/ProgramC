#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//��9.1���ԭ�ͣ�дһ��days��������
/*
struct dates{    //����date�ṹ��
	int year;
	int month;
	int day;
}date;


int main() {
	int days(int year, int month, int day);
	int sum;
	printf("������������");
	scanf("%d %d %d", &date.day, &date.month, &date.year);
	sum=days(date.year,date.month,date.day);
	printf("%d", sum);
}

int days(int year,int month,int day) {
	int daysum = 0;
	int days_table[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 1; i < date.month; i++) {//���·��ۼ�
		daysum = daysum + days_table[i];
	}
	daysum = daysum + date.day;
	//����+1��
	if ((date.year % 4 == 0 && date.year % 100 != 0 || date.year % 400 == 0) && date.month >= 3) {
		daysum += 1;
	}
	return daysum;
}
*/