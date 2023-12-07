#include<stdio.h>

main()
{
	int n,i,count=0;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n % i==0){
			count++;
		}
	}
	
	if(count==2)
	{
		printf("%d is a prime\n",n);
	}
	else{
		printf("%d is not prime\n",n);
	}
}