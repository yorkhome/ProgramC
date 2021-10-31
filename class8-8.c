#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//统计字符种类个数
/*
int main() {
	void find(char* p, int c);
	int str[20];
	gets(str);
	find(str,20);
}
void find(char* p,int c) {
	int uplet = 0, lowlet = 0, space = 0, num = 0, oth = 0;
	while(*p!='\0') {
		if (*p == ' ') {
			space++;
		}
		else if (*p >= 'a' && *p <= 'z') {
			lowlet++;
		}
		else if (*p >= 'A' && *p <= 'Z') {
			uplet++;
		}
		else if (*p >= '0' && *p <= '9') {
			num++;
		}
		else
			oth++;
		p++;
	}
	printf("%d %d %d %d %d", space, lowlet, uplet, num, oth);
}
*/