#include <stdio.h>
int main ()
{
	long int N;
	scanf("%ld", &N);
	if(N < 0 || N >= 10000000)
	{
		printf("Invalid input");
		return 0;
	}
	printf("%ld %ld", N%3, N%11);
}
