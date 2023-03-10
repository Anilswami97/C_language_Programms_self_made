#include<stdio.h>
int main(){
    
    int mat1[2][3]={{4,6,2},
                    {5,2,1}}; //fist multi-dimensional array
   int mat2[2][3]={{6,9,4},
                   {5,1,7}};  //second multi-dimensionl array
                   
    int sum[2][3]={{0,0,0},
                   {0,0,0}};  //third multi-dimensional array which contain addition of the value
        printf("The sum of matrix is: \n");           
    for(int i=0;i<=1;i++){  //the loop to count row of matrix
        for(int j=0;j<=2;j++){  //loop for count columns of matrix
            sum[i][j]=mat1[i][j]+mat2[i][j];  //add sum of all values in sum variables
            printf("%d ",sum[i][j]);   //now print the sum of mat1 and mat2
        }
        printf("\n");  //to change the line after a row
    }
    return 0;
}  //terminate the program.
