/*write a program which reads in 15 integers to a two-dimensional array. 
Say the array was declared as valueMe[3][5]. 
It then computes and displays the sum of the integers.*/

#include<stdio.h>


int main(){

    int i,j,valueMe[3][5], sum = 0;
    float avg;

    printf("\nEnter values:");
    

    for(i = 0; i<3; i++){
        for(j = 0; j<5; j++){

            scanf("%d", &valueMe[i][j]);
            sum = sum + valueMe[i][j];
        }
    }

    
    

    avg = sum/15.0;
    printf("Sum is:%d\n", sum);
    printf("Average is:%.3f\n", avg);
}