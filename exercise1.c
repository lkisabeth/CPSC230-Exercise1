#include <stdio.h>

int main()
{
	int number;
	printf("Enter an integer: ");
	scanf("%d", &number);
	while (number >= 0)
	{
		printf("%d\n", number);
		number--;
	}
}
