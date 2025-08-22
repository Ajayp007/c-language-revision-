#include<stdio.h>

int main()
{
	int i,j, num1,num2,sumone = 0,sumtwo = 0;
	
	printf("Enter The First Arrey Size :- ");
	scanf("%d",&num1);
	
	printf("Enter The Second Arrey Size :- ");
	scanf("%d",&num2);
	
	int a[num1];
	int b[num2];
	
	//First Arrey
	for(i = 0; i < num1; i++)
	{
		printf("Enter The Elements of Arrey %d :- ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nThe Elements\n");
	
	for(i = 0; i < num1; i++)
	{
		printf("%d\n",a[i]);
		sumone = sumone + a[i];
	}
	
	//Second Arrey
	for(j = 0; j < num2; j++)
	{
		printf("Enter The Elements of Arrey %d :- ",j);
		scanf("%d",&b[j]);
	}
	
	printf("\nThe Elements\n");
	
	for(j = 0; j < num2; j++)
	{
		printf("%d\n",b[j]);
		sumtwo = sumtwo + b[j];
	}
	
	printf("\nSum of All Elements Is =  %d",sumone);
	printf("\nSum of All Elements Is =  %d",sumtwo);
	
	int c[2] = { sumone, sumtwo };
    
    printf("\nThird Array (Sums Stored):\n");
    for(i = 0; i < 2; i++)
    {
        printf("%d\n", c[i]);
    }	
	
	return 0;
}
