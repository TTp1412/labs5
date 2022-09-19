

#include <stdio.h>

int main()
{
	int count = 0;
	int money;
	printf("Input Money: ");
	scanf_s("%d", &money);
	int i, j;
	for (i = 0; i * 5000 <= money; i++) {
		for (j = 0; i * 5000 + j * 2000 <= money; j++) {
			count++;
		}
	}
	printf("Tong cac phuong an co the la %d\n", count);
	return 0;
}

