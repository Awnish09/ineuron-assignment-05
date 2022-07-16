#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1, n;
    printf("Enter the number, how many number of squares you want to print.\n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n%d",i*i);
        i++;
    }
}
