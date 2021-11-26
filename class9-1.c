#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//
/*
struct{    //定义date结构体
	int year;
	int month;
	int day;
}date;
int main() {
	int i, days;
	int days_table[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("请输入年月日");
	scanf("%d %d %d", &date.day, &date.month, &date.year);
	days = 0;
	for (i = 1; i < date.month; i++) {//按月份累加
		days = days + days_table[i];
	}
	days = days + date.day;
	//闰年+1天
	if ((date.year % 4 == 0 && date.year % 100 != 0 || date.year % 400 == 0) && date.month >= 3) {
		days += 1;
	}
	printf("%d", days);
}
*/