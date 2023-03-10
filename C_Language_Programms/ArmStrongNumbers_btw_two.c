    #include<stdio.h>
    #include<math.h>
    int main(){
    int a,b;
    printf("Enter the two number among which you want to find the armstrong numbers: \n");
    printf("First limit: ");
    scanf("%d",&a);
    printf("Second limit: ");
    scanf("%d",&b);
    int value;
    for(value=a;value<=b;value++){
    int value1,r,i,value2,sum=0,temp;
    value1=value;
    temp=value1;
    value2=value1;
    for( i=1;i<=value1;i++){
    value1=value1/10;
    if(value1==0){
    break;
    }
    }
    while(value2>0){
        r=value2%10;
    sum=pow(r,i)+sum;
    value2=value2/10;
    }
    if(temp==sum){
    printf("Armstrong number : %d\n",temp);
     }
    }
    return 0;
    }

