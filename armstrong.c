#include<stdio.h>

int main()
{
	int a,multi = 0, temp , num;
	
	printf("Enter The Value Of Num :- ");
	scanf("%d",&num);
	
	temp = num;
	
	while(num != 0)
	{
		int lst = num % 10;
		multi = multi + (lst * lst * lst);
		num = num / 10;
	}
	
	if(temp == multi)
	{
		printf("This is a Armstrong Number");
	}
	else
	{
		printf("This is not a Armstrong Number");
	}
	
	
	return 0;
}
