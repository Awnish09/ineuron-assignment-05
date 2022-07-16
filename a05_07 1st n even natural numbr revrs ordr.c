#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0, n;
    printf("Enter the number, how many 1st even natural number you want to print in reverse.\n");
    scanf("%d",&n);
    while(i<n)
    {
        printf("\n%d",2*n-2*i);
        i++;
    }
}
