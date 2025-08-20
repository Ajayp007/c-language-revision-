/*

		1
	   12
      123
     1234
    12345
    
    
*/
#include<stdio.h>

int main()
{
	int i,j,k;
	
	for(i = 1; i<= 5; i++)
	{
		for(k=i;k<5;k++) // k = 1 ; k <= 5 ; k++ // k = 2 ; k<= 5; k++ // k = 3; k <= 5; k++
		{
			printf(" ");
		}
		for(j=1; j<= i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	
}
