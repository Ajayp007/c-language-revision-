#include<stdio.h>

int main()
{
	int num, sum = 0, temp;
	
	printf("Enter The Number");
	scanf("%d",&num);
	
	while(num != 0)
	{
		temp = num % 10; // temp = 234 % 10 => 4 last digit // temp = 23 % 10 = 3 => last digit // temp = 2 % 10 => 2 lst digit
		sum = sum + temp; // sum = 0 + 4 => 4 => sum // sum = 4 + 3 = 7 => sum // sum = 7 + 2 ===== 9 => sum answer 
		num = num / 10 ; // num = 234 / 10 => 23 // num = 23 / 10 => 2 =>num // num = 2 / 10 = 0 condition false loop over 
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








