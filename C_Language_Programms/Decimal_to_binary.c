#include<stdio.h>
int main(){
    
    int array[15],n,i;
    printf("Enter a dcimal value: ");
    scanf("%d",&n);
    for(i=0;n>0;i++){
        
        array[i]=n%2;
        n=n/2;
    }
    // printf("%d",i);
    for(int j=i-1;j>=0;j--){
        printf("%d",array[j]);
    }
    
    return 0;
}
