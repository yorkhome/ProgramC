#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//筛选法，输出素数
/*
int main() {
	int i, j, n, a[101];
	for (i = 1; i <= 100; i++) {//赋值
		a[i] = i;
	}
	a[1] = 0;
	for (i = 2; i < sqrt(100); i++) {   //判断
		for (j = i+1; j <= 100; j++) {
			if (a[i] != 0 && a[j] != 0) {
				if (a[j] % a[i] == 0) {
					a[j] = 0;
				}
			}
		}
	}
	for (i = 2,n=0; i <= 100; i++) {//输出
		if (a[i] != 0) {
			printf("%d\t", a[i]);
			n++;
		}
			
		if (n == 10) {
			printf("\n");
			n = 0;
		}
	}
}

*/