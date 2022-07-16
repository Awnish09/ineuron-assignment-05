#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1, n;
    printf("Enter the number, how many 1st natural number you want to print in reverse.\n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n%d",n+1-i);
        i++;
    }
}
