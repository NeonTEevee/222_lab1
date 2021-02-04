#include <stdio.h>
#include <string.h>
#include <iostream>
#include <sstream>
using namespace std;

int main ()
{
	char time[5], temp[5];
	int t;
	scanf("%s", time);
	char * token;
	token = strtok(time,".");
	printf("%s", token);
	
	strcpy(temp, token);
	stringstream ss;
	ss << temp;
	ss >> t;
	
	printf(":");
	token = strtok(NULL, ".");
	printf("%s ", token);
	if(t>=0&&t<=11)
		printf("a.m.");
	if(t>=12&&t<23)
		printf("p.m.");
	return 0;
}
