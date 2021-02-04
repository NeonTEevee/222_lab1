#include <stdio.h>
int main ()
{
	int i, n, loc, max;
	scanf("%d", &n);
	int num[n];
	for(i=0; i<n; i++)
		scanf("%d", &num[i]);
	for(i=0; i<n; i++)
	{
		if(max < num[i])
		{
			max = num[i];
			loc = i+1;
		}
	}
	printf("%d %d", loc, max);
	return 0;
}
