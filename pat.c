#include<stdio.h>
#include<conio.h>

int main()
{
	/*
	
	1 				row ===> 5
	1 2  
	1 2 3
	1 2 3 4
	1 2 3 4 5
	column ==> 5
	
	*/
	
	int i , j; // i = row && j = column
	
	for(i = 1; i<= 5; i++)						// i = 1; i <= 5; i++ // i = 2; i <= 5; i++
	{
		for(j = i; j <= 5; j++)					// j = 1; j <= 1; j++ // j = 2; j <= 2; j++
		{
			printf("%d",j);						// print 1  // print 1 2  
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
