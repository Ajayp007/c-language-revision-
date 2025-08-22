#include <stdio.h>

int main()
{
    int startYear, endYear, i,b = 0;
    int arr[100];

    printf("Enter the starting year: ");
    scanf("%d", &startYear);

    printf("Enter the ending year: ");
    scanf("%d", &endYear);

    for(i = startYear; i <= endYear; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            printf("%d\n", i);
            arr[b] = i;
            b++;
        }
        
    }
    printf("\n");
    for(i = 0; i< b; i++)
    {
    	printf("%d ",arr[i]); 
	}
    
    

    return 0;
}

