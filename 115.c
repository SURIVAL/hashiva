#include <stdio.h>
void main() 
{
	int x,n,k,array[50],temp;
	scanf("%d %d",&n,&k);
	for(x=0;x<n;x++)
	{
	    printf("enter the value");
		scanf("%d",&array[x]);
	}
	for(x=1;x<=n;x++)
	{
		if(array[x]>array[x+1])
		{
			temp=array[x];
			array[x]=array[x+1];
			array[x+1]=temp;
		}
	}
	for(x=1;x<=n;x++)
	{
		if(x==k-1)
		{
			printf("%d",array[x]);
		}
	}
			
	return 0;
}

