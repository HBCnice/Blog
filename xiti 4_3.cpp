#include <stdio.h>

int main()
{
	int n;
	printf("Enter a number n");
	scanf("%d", &n);
	while(n != 1)
	{
		if(n%2 == 0)
		{
			printf("%d/2", n);
			n = n/2;
		}
		else
		{
			printf("%d*3+1", n);
			n = n*3 + 1;
		}
		printf("=%d\n", n);
	}
	printf("End\n");

	return 0;
}