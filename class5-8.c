#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//水仙花数
/*
int main() {
	int j=0, k=0, l=0;
	for (int i = 100; i < 1000; i++) {
		j = i % 10;//个位
		k = (i % 100 - j)/10;//十位
		l = (i - i % 100) / 100;
		if (i == j * j * j + k * k * k + l * l * l)
			printf("%d\n",i);
	}
}
*/