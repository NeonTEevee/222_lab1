#include <stdio.h>
int main ()
{
	int N;
	scanf("%d", &N);
	if(N < 0 || N >= 10000000)
	{
		printf("Invalid input");
		return 0;
	}
	printf("%d %d", N%3, N%11);
}
