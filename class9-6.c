#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//#define N 13
//答案有问题，放弃
/*
struct person {
	int number;
	int nextp;
}link[N+1];
int main() {
	int count, i, h;
	for (i = 1; i <= N; i++) {
		if (i==N) {
			link[i].nextp = 1;
		}
		else {
			link[i].nextp = i + 1;
			link[i].number = i;
		}
	}
	h = N;
	count = 0;
	printf("离开的数有：\n");
	while (count < N - 1) {
		i = 0;
		while (i != 3) {
			h = link[h].nextp;
			if (link[h].number) i++;
		}
		printf("%4d", link[h].number);
		link[h].number = 0;
		count++;

	}
	printf("这个数是：");
	for (i = 1; i <= N; i++) {
		if (link[i].number)
			printf("%3d", link[i].number);
	}
}
*/