#include<stdio.h>

int main()
{
	
	int i, j;
	
	for(i = 1; i <= 7; i++)
	{
		for(j = 1; j <= 5; j++)
		{
			if((i == 1 || i == 7) && (j != 1 && j!= 5))
			{
				printf("* ");
			}
			else if((i == 2 || i == 5 || i== 6) && (j == 1 || j == 5))
			{
				printf("* ");
			}
			else if(i == 3 && j == 1)
			{
				printf("* ");
			}
			else if(i == 4 && j != 2)
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
