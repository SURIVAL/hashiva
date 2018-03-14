#include <stdio.h>
#include<string.h>
void main()
{
	char str[50];
	int j,flag=0;
	printf("\nenter the string:");
	scanf("%s",str);
	for(j=0;str[j]!='\0';j++)
	{
		if(str[j]==str[j+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}
	return 0;
}
