/*Using a switch statement,write a program which prints"score 
range is 70 to 100" only if grade is A. If grade is B the program 
prints"the score range 60 to 70". It then prints "the score is 50 to
 59" if the grade is C and "the score range is 40 to 49" if grade is D otherwise "Fail".*/
#include <stdio.h>
int main ()
{
    char grade;
   
      printf(" Enter grade:");
     scanf("%c",&grade);
    switch (grade)
    {
    case 'A': {
        printf("The score range is 70 to 100\n");
        break;}

        case 'B':{
        printf("The score range 60 to 70\n");
        break;}

        case 'C':{
        printf("The score is 50 to 59\n");
         break;}

         case 'D':{
        printf("The score range is 40 to 49\n");
         break;}

    default:
    printf("Fail");
     }

}