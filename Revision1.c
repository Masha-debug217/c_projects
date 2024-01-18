/*write a program that reads in student grade. 
if a student scores an A, then the system displays,
"your mark is between 70 and 100" else if a student scores a B,
the system displays "your mark is between 60 and 69" otherwise it displays "other grades"*/
#include<stdio.h>
int main()
{
    int marks=40;
    if(marks>70){ 
        printf("Student is brilliant");
    }
        else if(marks<30){
            printf("student is poor");
        }
    
        else if(marks <70 && marks >40){
        printf("student is avarege");
    
    }
    
