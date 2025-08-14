#include<stdio.h>
#include<conio.h>

int main()
{
	int num,add=0,multi=1;
	
	printf("Enter The Number :- ");
	scanf("%d",&num);	
	
	while(num > 0)
	{
		int lst = num % 10; // lst = 151 % 10 = 1 , lst = 15 % 10 = 5, lst = 1 % 10 = 1
		multi = multi * lst; // multi = 1 * 1 = 1 , multi = 1 * 5 = 5, multi = 5 * 1 = 5 ====> 5
		add = add + lst; // add = 0 + 1 = 1 , add = 1 + 5 = 6 , add = 6 + 1 = 7          ====> 7   
		num = num /10; // num = 151 / 10 = 15 , num = 15 / 10 = 1, num = 1 / 10 = 0 
	}
	
	if(add == multi)
	{
		printf("This Is Magic Number ");
	}
	else
	{
		printf("This Is Not a Magic Number ");
	}
	
	
	
	
}
