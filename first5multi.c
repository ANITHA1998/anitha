#include<stdio.h>
#include<conio.h>
int main()
{
        longint sum=0,i,n;
        clrscr();
        printf("\n Give The Value of N:  ");
        scanf("%ld",&n);
        for(i=1;i<=n;i++)
        {
            printf("\n 5 * %ld = %ld",i,5*i);
        }
        return 0;
}
