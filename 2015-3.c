#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
/*
int main() {
	FILE* fp;
	char ch,filename[10];
	printf("请输入文件名：");
	//gets(filename);
	scanf("%s", filename);
	getchar();
	if ((fp = fopen(filename,"w")) == NULL) {
		printf("打不开");
		exit(0);
	}
	printf("请输入字符串以#号结束：");
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