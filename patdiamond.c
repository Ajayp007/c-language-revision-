#include<stdio.h>

int main()
{
	int i, j;
	
	for(i = 1; i <= 13; i++)
	{
		for(j = 1; j <= 13; j++)
		{
			if(i == 1 && j == 7)  
			{
				printf("* ");
			}
			else if(i == 2 && (j== 6 || j == 8)) 
			{
				printf("* ");
			}
			else if(i == 3&& (j== 5 || j == 9)) 
			{
				printf("* ");
			}
			else if(i == 4 && (j== 4 || j == 10) )
			{
				printf("* ");
			}
			else if(i == 5 && (j== 3 || j == 11) )
			{
				printf("* ");
			}
			else if(i == 6 && (j== 2 || j == 12) )
			{
				printf("* ");
			}
			else if(i == 7 && (j== 1 || j == 13) )
			{
				printf("* ");
	        }
	        else if(i == 8 && (j == 2 || j == 12 ))
	        {
	        	printf("* ");
			}
			else if(i == 9 && (j == 3 || j == 11 ))
	        {
	        	printf("* ");
			}
			else if(i == 10 && (j == 4 || j == 10))
	        {
	        	printf("* ");
			}
			else if(i == 11 && (j == 5 || j == 9 ))
	        {
	        	printf("* ");
			}
			else if(i == 12 && (j == 6 || j == 8 ))
	        {
	        	printf("* ");
			}
			else if(i == 13 && j == 7)
			{
				printf("* ");
			}
	        
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
