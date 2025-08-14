#include <stdio.h>
int main()
{
    int num, multi = 1, add = 0;

    printf("Enter The Number :- ");
    scanf("%d", &num);

    while (num > 0)
    {
        int lst = num % 10;
        multi = multi * lst;
        add = add + lst;
        num = num / 10;
    }

    if (add == multi)
    {
        printf("The Number Is a Magic");
    }
    else
    {
        printf("The Number Not Is a Magic");
    }
}