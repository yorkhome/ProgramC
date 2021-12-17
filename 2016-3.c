#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 3
//
/*
int main() {
	int a[N][N],sum=0;
	//输入
	printf("请输入：\n");
	for (int i = 0; i < N; i++) {
		//for (int j = 0; j < N; j++) {
		scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
		//}
	}
	//对角相加
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) {
				sum += a[i][j];
			}
		}
	}
	//输出
	printf("总和：%d", sum);
}
*/