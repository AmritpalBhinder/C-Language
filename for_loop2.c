#include<stdio.h>

int main()
{
	int i=1;
	int first=0;
	int second=1;
	int ans=first+second;
	
	
	
	
	printf("0 1 ");
	for(i=1;i<=10;i++)
	{
		printf("%d ",ans);
		first=second;
		second=ans;
		ans=first+second;
	}
}