/*Write a program that reads two integer, let's say a and b, 
in the main function(main ()) then passes them (a and b) as 
an argument to a function which computes their product. if 
the product is greater than fifteen, it displays the value 
of a and b and the product. then passes control back to the 
calling function(main()) which displays the string "increment".*/
# include <stdio.h>
int multiply(int a, int b)
{
    int prod  = a*b;
 
 
 return prod;
}
int main()
{
int a,b,prod;

printf("\nEnter value a:");
scanf("%d",&a);


printf("\nEnter value b:");
scanf("%d",&b);


prod = multiply(a,b);
if(prod>15)
 {
    printf("\nValue of a:%d",a);
    printf("\nValue of b:%d",b);
    printf("\nValue of prod:%d",prod);
    printf("\nincrement");
 }


} 