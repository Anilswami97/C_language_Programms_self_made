#include<stdio.h>    
int main(){      
    
    int value,p=0,temp_var;    
    
    printf("Enter the value : ");
    scanf("%d",&value);       
    temp_var=value;   //To store temporary value
    while(value>0){  //loop until the condition satisfy     
     int r=value%10;    //It will calculate the reminder
        p=(p*10)+r;    //to store reverse value
        value=value/10;   //then, change the value
    } 
    (p==temp_var) ? printf("Palindrome number."):printf("Not a Palindrome number.");
  //After that campaire the both values..
    return 0;
    
}  //end the program..

