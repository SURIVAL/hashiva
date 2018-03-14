#include<stdio.h>
void main()
{
	int x,y,r;
	printf("\n enter the number:");
	scanf("%d",&x);
	printf("\n enter the left and right range:");
	scanf("%d %d",&y,&r);
	if(x>y && x<r)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
