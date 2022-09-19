
#include <stdio.h>

int main()
{
	int n;
	printf("Input n: ");
	scanf_s("%d", &n);
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (i % 2 != 0)
			sum += i;
	}
	printf("Tong so le nguyen duong nho hon %d = %d", n, sum);

	return 0;
}
