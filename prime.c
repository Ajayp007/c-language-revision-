#include<stdio.h>

int main(){

	int i,n,prime = 1;

    printf("Enter the value of N :");
    scanf("%d",&n);
		
		for( i = 2; i<= n/2; i++) //(2; 2<= 10/2 =>5; 2++ => 3 
		{			
			if(n % i == 0)		// (10 % 2 == 0) true 
			{
				prime = 0;      // 
				break;	
			}	
		}       
		
		if(prime)
		{
			printf("The Number Is Prime");
		}
		else
		{
			printf("The Number Is Not Prime");
		}
        
    }
