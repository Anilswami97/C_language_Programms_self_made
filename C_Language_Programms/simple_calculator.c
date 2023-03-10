#include<stdio.h>//Header file
#include<math.h>//Header file
int main(){       //Main function
    float num1;
    float num2;       //variables
    float result;
    char op;
     printf("\n\n=============PRESS 0 TO EXIT==============");
        printf("\n+.ADD TWO NUMBERS~ ");
        printf("\n-.SUBSTRACT TWO NUMBERS~");
        printf("\n*.MULTIPLICATION TWO NUMBERS~");
        printf("\n/.DIVIDE TWO NUMBERS~");
        printf("\n'p'.GET POWER ~");
        printf("\n's'.FIND SQUARE ROOT~");
        printf("\n\nEnter you option: ");
    // printf("Operators are:\n+ for Add\n- for Substraction\n* for Multilication\n/ for Divide\n'p' for Power\n's' for Square root.\n\n" );
    // printf("Enter the operator: ");   //Statement to take input from user
    scanf("%c",&op); 
    
   
   switch(op){      //switch statement to switch different operations..
    case '+':
    printf("Enter the num1: ");
    scanf("%f",&num1);
    printf("Enter the num2: ");
    scanf("%f",&num2);
    result=num1+num2;       //operation to sum of two numebrs
    printf("Sum is: %f\n\n",result);
    break;
        
    case '-': 
    printf("Enter the num1: ");
    scanf("%f",&num1);
    printf("Enter the num2: ");
    scanf("%f",&num2);
    result=num1-num2;       //operation to susbstraction
    printf("Substraction is: %f\n\n",result);
    break;
    
    case '*':
    printf("Enter the num1: ");
    scanf("%f",&num1);
    printf("Enter the num2: ");
    scanf("%f",&num2);
    result=num1*num2;         //Logic to Multiplication
    printf("Multiply is: %f\n\n",result);
    break;
        
    case '/': 
    printf("Enter the num1: ");
    scanf("%f",&num1);
    printf("Enter the num2: ");
    scanf("%f",&num2);
    result=num1/num2;     //Logic to Division of two numbers.
    printf("Division is: %f\n\n",result);
    break;
    
    case 'p':         //char to initilize power operation
    printf("Enter the value of a : ");
    scanf("%f",&num1);
    printf("Enter the power: ");
    scanf("%f",&num2);
    result=pow(num1,num2);
    printf("The power of a is: %f\n\n",result);
    break;
    
    case 's':   //char to initilize square root operation
    printf("Enter the a: ");
    scanf("%f",&num1);
    result=sqrt(num1);
    printf("The square root of a is: %f\n\n",result);
    break;
    
    default:       //When the operator is Invalid then it will print this line..
    printf("Invalid ,Try again.\n\n");
    break;
    }
    
    return 0;
}




