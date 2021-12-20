#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter number for table\n");
    scanf("%d", &a);

    printf("Enter number upto which\n");
    scanf("%d", &b);

    for (int i = 1; i < b; i++)
    {
        /* code */
         printf(a " x %d" b " = %d" a*b);
    }
    
    

    return 0;
}

