#include <stdio.h>
void main()
{
	int x,n,k,array[50],count=0;
  printf("enter the  n and k value");
	scanf("%d %d",&n,&k);
	for(x=0;x<n;x++)
	{
		scanf("%d",&array[x]);
	}
	for(x=0;x<n;x++)
	{
		if(array[x]==k)
		{
			count=count+1;
		}
	}
	printf("\n%d",count);
	return 0;
}
