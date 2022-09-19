

#include <stdio.h>

int main()
{
	int n, a, b, c;
	printf("Input n: ");
	scanf_s("%d", &n);
	int temp = n;
	a = temp % 10;
	temp /= 10;
	b = temp % 10;
	temp /= 10;
	c = temp % 10;
	if (c != 0) {
		switch (c) {
		case 1:
			printf("Mot Tram ");
			break;
		case 2:
			printf("Hai Tram ");
			break;
		case 3:
			printf("Ba Tram ");
			break;
		case 4:
			printf("Bon Tram ");
			break;
		case 5:
			printf("Nam Tram ");
			break;
		case 6:
			printf("Sau Tram ");
			break;
		case 7:
			printf("Bay Tram ");
			break;
		case 8:
			printf("Tam Tram ");
			break;
		default:
			printf("Chin Tram ");
			break;
		}
		switch (b) {
		case 1:
			printf("Muoi ");
			break;
		case 2:
			printf("Hai Muoi ");
			break;
		case 3:
			printf("Ba Muoi ");
			break;
		case 4:
			printf("Bon Muoi ");
			break;
		case 5:
			printf("Nam Muoi ");
			break;
		case 6:
			printf("Sau Muoi ");
			break;
		case 7:
			printf("Bay Muoi ");
			break;
		case 8:
			printf("Tam Muoi ");
			break;
		case 9:
			printf("Chin Muoi ");
			break;
		default:
			if(a!=0)
				printf("Le ");
			break;
		}
		switch (a) {
		case 1:
			printf("Mot");
			break;
		case 2:
			printf("Hai");
			break;
		case 3:
			printf("Ba");
			break;
		case 4:
			printf("Bon");
			break;
		case 5:
			if (b == 0)
				printf("Nam");
			else
				printf("Lam");
			break;
		case 6:
			printf("Sau");
			break;
		case 7:
			printf("Bay");
			break;
		case 8:
			printf("Tam");
			break;
		case 9:
			printf("Chin");
			break;
		default:
			break;
		}
	}



	return 0;

}
