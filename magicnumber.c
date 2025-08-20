#include<stdio.h>
#include<conio.h>

int main()
{
	int num,add=0,multi=1;
	
	
	printf("Enter The Number :- ");
	scanf("%d",&num);	
	
	int temp = num; // temp = 153
	
	while(num > 0) // 153 > 0 true
	{
		multi = 1; 
		int lst = num % 10; 
		multi = (multi * lst) * (multi * lst) *(multi * lst) ; 
		add = add + multi; 
		num = num /10; 
	}
	
	if(temp == add)
	{
		printf("This Is Magic Number ");
	}
	else
	{
		printf("This Is Not a Magic Number ");
	}
	
	
	
	
}
