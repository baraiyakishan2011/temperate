#include<stdio.h>

main()
{
	int n,count;
	
	printf("Enter value of N :");
	scanf("%d",&n);
	
	for(count=0;n!=0;count++)
	{
		n=n/10;
	}
		printf("%d",count);
}

