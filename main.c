#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char* argv[])
{
	char c;
	fflush(stdin);
	int wszystkie_znaki = 0;
	int male_litery = 0;
	int duze_litery = 0;
	int cyfry = 0;
	int biale_znaki = 0;
	int wiersze = 0;
	while ((c = getchar()) != EOF && c != 26)
	{
		wszystkie_znaki++;
		if (c >= 'a' && c <= 'z')
		{
			male_litery++;
		}
		else if (c >= 'A' && c <= 'Z')
		{
			duze_litery++;
		}
		else if (c >= '0' && c <= '9')
		{
			cyfry++;
		}
		else if (c == ' ' || c == '\t')
		{
			biale_znaki++;
		}
		else if (c == '\n')
		{
			wiersze++;
		}
	}
	printf("Ilosc malych liter: %d\n", male_litery);
	printf("Ilosc wielkich liter: %d\n", duze_litery);
	printf("Ilosc cyfr: %d\n", cyfry);
	printf("Ilosc bialych znakow: %d\n", biale_znaki);
	printf("Ilosc wierszy: %d\n", wiersze);
	printf("Ilosc wszytkich znakow: %li\n", wszystkie_znaki);
	system("PAUSE");
	return 0;
}
