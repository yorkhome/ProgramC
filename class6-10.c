#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//Í³¼Æ
/*
int main() {
	char a[3][3];
	int num, ule, lle, sp, oth;
	num = ule = lle = sp = oth = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%c", &a[i][j]);
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (a[i][j] >= '0' && a[i][j] <= '9')
				num++;
			else if (a[i][j] >= 'A' && a[i][j] <= 'Z')
				ule++;
			else if (a[i][j] >= 'a' && a[i][j] <= 'z')
				lle++;
			else if (a[i][j] == ' ')
				sp++;
			else
				oth++;
		}
	}
	
	printf("%d,%d,%d,%d,%d", num, ule, lle, sp, oth);
}
*/