#include <stdio.h>
void main()
{
	int x,n,k,array[50],flag=0;
	printf("enter the n and k value");
	scanf("%d %d",&n,&k);
	for(x=0;x<n;x++)
	{
		scanf("%d",&array[x]);
	}
	for(x=0;x<n;x++)
	{
		if(array[x]==k)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
