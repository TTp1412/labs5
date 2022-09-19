
#include <stdio.h>

int main()
{
	//Tam giac can dac
	int n, i, j;
	printf("Input height: ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n + i; j++) {
			if (j < n - i - 1)
				printf("  ");
			else
				printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	//Tam giac can rong
	for (i = 0; i < n; i++) {
		for (j = 0; j < n + i; j++) {
			if (j == n - i - 1 || j == n + i - 1 || i==n-1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}

	printf("\n");
	//Tam giac vuong can dac
	for (i = 0; i < n; i++) {
		for (j = 0; j < i+1; j++) {
			printf("* ");
		}
		printf("\n");
	}

	printf("\n");
	//Tam giac vuong can rong
	for (i = 0; i < n; i++) {
		for (j = 0; j < i + 1; j++) {
			if (j == 0 || j == i || i == n - 1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}

	return 0;

}
