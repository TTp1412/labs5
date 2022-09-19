
#include <stdio.h>

int main()
{
	int m, n;
	printf("Input chieu rong n: ");
	scanf_s("%d", &n);
	printf("Input chieu dai m: ");
	scanf_s("%d", &m);
	printf("\n");
	//Hinh chu nhat dac
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("* ");
		}
		printf("\n");

	}
	printf("\n");
	//Hinh chu nhat rong
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (j == 0 || j == m - 1 || i == 0 || i == n - 1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");

	}

	return 0;
}
