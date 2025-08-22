#include<stdio.h>

int main()
{
	int i, num;
	
	printf("Enter The Arrey Size :-");
	scanf("%d",&num);
	
	int a[num];
	
	for(i = 0; i< num; i++)
	{
		printf("Enter The Arrey Numbers %d:- ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n");
	
	for(i = 0; i < num; i++)
	{
		if(a[i] % 2 == 1)
		{
			printf("%d\n",a[i]);
		}
	}
	
	
	
	return 0;
}
