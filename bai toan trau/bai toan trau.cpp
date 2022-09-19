

#include <stdio.h>

int main()
{
	for (int tdung = 1; tdung < 20; tdung++) 
	{
		for (int tnam = 1; tnam < 34; tnam++) 
		{
			int tgia = 100 - (tdung + tnam);
			if (5 * tdung + 3 * tnam + tgia / 3 == 100 && tgia % 3 == 0)
				printf("trau dung = %d, trau nam = %d, trau gia = %d\n", tdung, tnam, tgia);
		}
	}
	return 0;
}

