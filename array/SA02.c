#include <stdio.h>

int main()
{

	char str[10];
	int total;

	printf("enter value:");
	scanf("%s[^\n]s",&str);
	
	for(int i=0;str[i]!='\0';i++)
	{
		printf("str[%d]value is:%c\n",i,str[i]);
	}
	for(int i=0;str[i]!='\0';i++)
	{
		printf("str[%d]value is:%c\n",i,str[i]);
	}


return 0;
}