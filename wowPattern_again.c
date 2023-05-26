#include<stdio.h>

int main()
{
    int n,a,b;
    scanf("%d",&n);
    a=n-1;
    b=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=a;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=b;j++)
        {
            if(i%2== 0)
            {
                printf("*");
            }
            else 
            {
                printf("^");
            }

        }
        a--;
        b=b+2;
        printf("\n");
    }
    return 0;
}
