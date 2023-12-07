#include<stdio.h>

main()
{
	int n,s,ans=0,temp;
	
	printf("Enter Number = ");
	scanf("%d",&n);
	temp=n;
	
	while(n!=0)
	{
		s=n%10;
		ans = ans*10 + s;
		n=n/10;
	}
	
	printf("Reverse number is = %d\n",ans);
	
	if(ans == temp){
		printf("Number is Palindrom");
	}
	else{
		printf("Number is not Palindrom");
	}
}