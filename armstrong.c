#include<stdio.h>

int main()
{
	int num, temp,multi = 1;
	
	printf("Enter The Number :- ");
	scanf("%d",&num);
	
	while(num != 0)
	{
		temp = num % 10;
		multi = multi * (temp * 3); // 
		num = num / 10;
	}
	printf("%d",multi);
	 
}
