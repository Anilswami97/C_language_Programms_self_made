    #include<stdio.h>
    int main(){
    
    int value,r,i;
    printf("Enter the value: ");
    scanf("%d",&value);
    
    for( i=1;i<=50;i++){
    value=value/10;
    if(value==0){
    break;
    }
    }
    printf("Your entered number have %d digits",i);
    return 0;
    }


