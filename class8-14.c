#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//��n�����������˳�����������
/*
int main() {
	void sort(char* p, int m);
	int i, n;
	char* p, num[20];
	printf("���������\n");
	scanf("%d", &n);
	printf("�������֣�\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	p = &num[0];
	sort(p, n);
	printf("����ǣ�");
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