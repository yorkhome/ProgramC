#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
/*
int main() {
	FILE* fp;
	char ch,filename[10];
	printf("�������ļ�����");
	//gets(filename);
	scanf("%s", filename);
	getchar();
	if ((fp = fopen(filename,"w")) == NULL) {
		printf("�򲻿�");
		exit(0);
	}
	printf("�������ַ�����#�Ž�����");
	ch = getchar();
	while (ch != '#') {
		fputc(ch, fp);
		putchar(ch);
		ch = getchar();
	}
	fclose(fp);
	putchar(10);
	return 0;
}
*/