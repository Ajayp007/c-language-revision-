#include<stdio.h>

int main()
{
	int num, sum = 0, temp;
	
	printf("Enter The Number");
	scanf("%d",&num);
	
	while(num != 0)
	{
		temp = num % 10;
		sum = sum + temp;
		num = num / 10 ;
	}
	
	printf("%d",sum);
}

/*
 num = 345 => 3+4+5 = 12
 
 temp = num % 10; => temp = 345 % 10 => 5 
 sum = sum + temp => sum = 0 + 5 => 5
 num = num / 10 => num = 345 / 10 => 34
 
 num = 34
 
 temp = 34 % 10 => 4
 sum = 5 + 4 => 9
 num = 34 / 10 => 3
 
 num = 3 
 
 temp = 3 % 10 = 3
 sum = 9 + 3 => 12
 num = 3 / 10 => 0




*/








