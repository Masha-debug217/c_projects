/*write a program that reads in student grade. 
if a student scores an A, then the system displays,
"your mark is between 70 and 100" else if a student scores a B,
the system displays "your mark is between 60 and 69" otherwise it displays "other grades"*/
#include<stdio.h>
int main()
{
    char grade;
    printf("\nEnter grade:");
    scanf("%c",&grade);
    if(grade == 'A'){
        printf("\nyour mark is between 70 and 100");
    }   

        else if(grade =='B'){
            printf("\nyour mark is between 60 and 69");
        }
        else
        printf("\nother grades");
    }
    
