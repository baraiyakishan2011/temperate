#include<stdio.h>

main()
{
	int n,sum,ld,fd,count;
	
	printf("Enter Number : ");
	scanf("&d",&n);
	ld=n%10;
	
	while(n>=10)
	{
		n=n/10;
		count++;
	}
	fd=n;
	sum = fd+ld;
	
	printf("Sum of first & last number = %d",count);
}