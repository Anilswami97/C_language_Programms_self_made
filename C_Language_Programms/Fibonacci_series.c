#include<stdio.h>
int main(){
    int n1=0,n2=1,sum=0,value,a;
printf("Enter the value of fibonaccic series : ");
scanf("%d",&value);
printf("%d\t",n1);
printf("%d\t",n2);

for(a=0;a<=(value-2);a++){
    sum=n1+n2;
    printf("%d\t",sum);
    n1=n2;
    n2=sum;
}
printf("\nAnd the last value of fibonaccic series is : %d",sum);

return 0;
}
