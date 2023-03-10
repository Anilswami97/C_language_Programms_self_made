/*This program is related a game in which the a value will be give you that you do't know 
so you have to guess this number and in how many turns you will get it will be your score*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i,j,n;
    time_t a;
    srand((int) time(&a));
    while(1){
    int rnum=rand()%100;
    for(i=1;i<=100;i++){
    printf("Enter your guessed value: ");
    scanf("%d",&n);
    
    if(n>rnum){
        printf("Entered value is greater.\n");
        printf("Please try again.\n\n");
        continue;
    }
    else if(n<rnum){
        printf("Entered value is less.\n");
        printf("Please try again.\n\n");
        continue;
    }
    else{
        printf("Excellent! Entered value is right.\n");
        printf("And your score is: %d\n",i);
        printf("Let's play again :)\n\n");
        break;
    }
    }  
    
    }
    return 0;
    
}


