#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter number for table \n");
    scanf("%d",&a);

    printf("Enter number upto which table is required \n");
    scanf("%d",&b);

    for(int i=0;i<=b;i++)
    {
        printf("%d x %d = %d \n",a,i,a*i);
    }
    return 0;
}
