#include<stdio.h>

int main()
{
	int num;
	int rev = 0;
	
	printf("Enter Your Value ");
	scanf("%d",&num);
	
	int temp = num;
	
	while(temp > 0)
	{
		int lst = temp % 10;
		rev = (rev * 10) + lst;
		temp = temp / 10;
	}
	
	printf("Revers Number Is %d\n\n",rev);
	
	if(rev == num)
	{
		printf("Number Is Palindrom");
	}
	else
	{
		printf("Number Is Not Palindrom");
	}
	
	
}
