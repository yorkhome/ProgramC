#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//用9.1题的原型，写一个days函数计算
/*
struct dates{    //定义date结构体
	int year;
	int month;
	int day;
}date;


int main() {
	int days(int year, int month, int day);
	int sum;
	printf("请输入年月日");
	scanf("%d %d %d", &date.day, &date.month, &date.year);
	sum=days(date.year,date.month,date.day);
	printf("%d", sum);
}

int days(int year,int month,int day) {
	int daysum = 0;
	int days_table[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 1; i < date.month; i++) {//按月份累加
		daysum = daysum + days_table[i];
	}
	daysum = daysum + date.day;
	//闰年+1天
	if ((date.year % 4 == 0 && date.year % 100 != 0 || date.year % 400 == 0) && date.month >= 3) {
		daysum += 1;
	}
	return daysum;
}
*/