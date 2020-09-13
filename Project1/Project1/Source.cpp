#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int size;
scanf("%d", &size);
/*draw leaves*/
for (int i = 0; i < size; i++) {
	for (int j = 0; j < size * 2; j++) {
		if (i >= size - j - 1 && size - i <= 2 * size - j - 1) {
			printf("*");
		}
		else {
			printf(" ");
		}
	}printf("\n");
}
/*draw tree body*/
for (int i = 0; i < 2; i++) {
	for (int j = 0; j < size * 2; j++) {
		if (j >= size-2 && j<=size  ) {
			printf("*");
		}
		else {
			printf(" ");
		}
	}
	printf("\n");
}
	return 0;
}