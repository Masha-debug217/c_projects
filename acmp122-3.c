#include <stdio.h>
int main ()
{
    int num1,num2, num3;
    /*int num,i;
  
   for (i=0; i<3; i++)
  
    {
   
   // scanf ("%d,%d, %d",num1, num2, num3);
   scanf ("%d",&num);
    }*/

     printf("enter three values \n");
     scanf("%d", &num1);
     scanf("%d", &num2);
     scanf("%d", &num3);

     if (num1>num2 && num1>num3)
     {
        printf(" %d is the largest number",num1);
     }
     else if ( num2>num1 && num2>num3)
     {
        printf("%d is the largest number", num2);
     }
     else 
     {
        printf("%d is the largest number", num3);
     }
return 0;
}