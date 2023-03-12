#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number to be checked");
    scanf("%d", &n);
    if(n==0)
    printf("ZERO");
    else if(n>=1)
    printf("number is positive");
    else if(n<0)
    printf("number is negative");
    return 0;

}