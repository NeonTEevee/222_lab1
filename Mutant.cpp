#include <stdio.h>
int main ()
{
	int n, m, t;
	char leg;
	scanf("%d %d %d", &n, &m, &t);
	if(n < t && m < t && n < 1000 && n > 0 && m < 1000 && m > 0 && t < 1000000000 && t > 1)
	{
		scanf(" %c", &leg);
		if(leg == 'L')
		{
			while(t>0)
			{
				t = t-n;
				if(t<=0)
				{
					printf("L");
					return 0;
				}
				t = t-m;
				if(t<=0)
				{
					printf("R");
					return 0;
				}
			}
		}
		if(leg == 'R')
		{
			while(t>0)
			{
				t = t-m;
				if(t<=0)
				{
					printf("R");
					return 0;
				}
				t = t-n;
				if(t<=0)
				{
					printf("L");
					return 0;
				}
			}
		}
	}
}
