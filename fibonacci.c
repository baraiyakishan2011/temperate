#include<stdio.h>

main()
{
	int n,i,t1=0,t2=1,t3;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	printf("%d",t1);
	printf("%d",t2);
	
	t3=t1+t2;
	
	for(i=3;i<=n;i++)
	{
		printf("%d",t3);
		
		t1=t2;
		t2=t3;
		t3=t1+t2;
	}
	
}