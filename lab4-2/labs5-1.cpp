

#include <stdio.h>

int main()
{
	//Tim so nguyen to

	/*int n, i;
	printf("Input n: ");
	scanf_s("%d", &n);
	if (n < 2)
		printf("%d is not a Prime number", n);
	else if (n == 2)
		printf("%d is a Prime number", n);
	else {
		for (i=2; i < n; i++)
		{
			if (n % i == 0) {
				printf("%d is not a Prime number", n);
				break;
			}
		}
		if (i == n)
			printf("%d is a Prime number", n);
	}*/


	//Tim UCLN

	/*int a, b, temp, ucln = 1;
	printf("Input a: ");
	scanf_s("%d", &a);
	printf("Input b: ");
	scanf_s("%d", &b);
	if (a > b)
		temp = b;
	else
		temp = a;
	for (int i = 1; i < temp; i++)
		if (a % i == 0 && b % i == 0) {
			ucln = i;
		}
	printf("%d la UCLN cua %d va %d\n", ucln, a, b);*/
	//UCLN cua a va b: UCLN = (a*b)/BCNN

	//Tim BCNN

	int a, b, bcnn = 0;
	printf("Input a: ");
	scanf_s("%d", &a);
	printf("Input b: ");
	scanf_s("%d", &b);
	if (a > b)
		bcnn = b;
	else
		bcnn = a;
	while (bcnn % b != 0) {
		bcnn += a;
	}
	printf("%d la BCNN cua %d va %d\n", bcnn, a, b);
	return 0;
}
