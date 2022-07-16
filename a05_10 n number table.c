#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1, n;
    printf("Enter the number, you want to print the table of.\n");
    scanf("%d",&n);
    printf("\n");
    while(i<=10)
    {
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }
}
