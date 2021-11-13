#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//将n个数按输入的顺序的逆序排序
/*
int main() {
	void sort(char* p, int m);
	int i, n;
	char* p, num[20];
	printf("输入个数：\n");
	scanf("%d", &n);
	printf("输入数字：\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	p = &num[0];
	sort(p, n);
	printf("结果是：");
	for (i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}
}

void sort(char* p, int m) {
	int i;
	char temp, * p1, * p2;
	for (int i = 0; i < m / 2; i++) {
		p1 = p + i;
		p2 = p +(m-1-i);
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}
}
*/