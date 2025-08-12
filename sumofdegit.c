#include<stdio.h>

int main()
{
	int num, fst, lst, sum;
	
	printf("Enter The Value :- ");
	scanf("%d",&num);
	
	lst = num % 10; // last digit
	
	int temp = num;
	
	while (temp >= 10)
	{
		temp = temp / 10; 
	}
	
	fst = temp; // first Digit
	
	//printf("%d",fst);
	
	sum = fst + lst; 
	
	printf("%d",sum);
}
