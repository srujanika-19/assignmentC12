#include <stdio.h>
int main()
{
    int n, sum=0, rem, p;
    printf("enter a number");
    scanf("%d",&n);
    p=n;
    while(p!=0)
    {
        rem=p%10;
        sum=sum+rem;
        p=p/10;
    
    }
    printf("\n Sum of digits of %d = %d",n ,sum);
    return 0;


}