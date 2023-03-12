#include <stdio.h>
 int main()
 { 
    float a,b;
 int ch;
 printf("Enter two digits");
 scanf("%f%f", &a,&b);
 printf("Enter 1 for addition,2 for subtraction, 3 for multiplication, 4 for division");
 scanf("%d", &ch);
 switch(ch)
 {
    case 1:printf("Sum of %f and %f is %f",a,b,a+b);
    break;
    case 2:printf("Difference of %f and %f is%f",a,b,a-b);
    break;
    case 3:printf("Product of %f and %f is %f",a,b, a*b);
    break;
    case 4:printf("Quotient of %f divided by %f",a,b, a/b);
    break;
    default:printf("Enter correct choice");

 }
return 0;
 }