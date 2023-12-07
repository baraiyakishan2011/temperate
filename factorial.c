#include<stdio.h>

main()
{
	int i,f,n;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	for(i=1,f=1;i<=n;i++)
	{
		f=f*i;
	}
	
	printf("Factorial of %d is = %d",n,f);
}