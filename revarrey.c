#include<stdio.h>

int main()
{
	int num, i;
	
	printf("Enter The Value Of num :- ");
	scanf("%d",&num);
	
	int arrey[num];
	
	for(i = 0; i < num; i++)
	{
		printf("Enter The Elements %d[]:- ",i);
		scanf("%d",&arrey[i]);
	}
	printf("Your Elements is :- \n");
	
	for(i = 0; i < num; i++)
	{
		printf("%d\n",arrey[i]);
	}
	
	printf("Your Revers Elements is :- \n");
	
	i = num - 1; // i = 5 - 1 => 4 // i = 4 - 1 = 3
	while(i >= 0) // i = 4 // 4 >= 0 true // 3 >= 0 true
	{
		printf("%d\n",arrey[i]); // print = index 4 => 5th element // print = index 3 => 4th element
 		i--; // 4-1 = 3 // 3 - 1 = 2
	}
	

	
}
