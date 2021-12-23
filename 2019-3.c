#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
/*
#define M 10
#define N 20
int main() {
	void Sort(char s[][N], int style);
	char s[M][N];
	//char s[M][N] = {"jfytdtd","gdgxr","gdtdc",};
	printf("please input 10 strings\n");
	for (int i = 0; i < M; i++) {
		gets(s[i]);
	}
	Sort(s, 0);
	for (int i = 0; i < M; i++) {
		printf("style0: %s\n", s[i]);
	}
	printf("\n");

	Sort(s, 1);
	for (int i = 0; i < M; i++) {
		printf("style1: %s\n", s[i]);
	}
}

void Sort(char s[][N], int style){
	char temp[N] = { 0 };
	for(int i=0;i<M;i++){
		for(int j=0;j<M-i-1;j++){
			if (style == 0 && strcmp(s[j], s[j + 1])<0 ||
				style == 1 && strcmp(s[j], s[j + 1])>0) {
				strcpy(temp, s[j]);
				strcpy(s[j], s[j + 1]);
				strcpy(s[j+1], temp);
			}
		}
	}
}

*/