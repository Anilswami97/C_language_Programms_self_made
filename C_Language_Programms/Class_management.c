#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct employee_data
{

    int Empid;
    char Empname[20];
    int Empage;
    char Empdept[30];
    int Empsalary;
} employee_data;

void datastore()
{
    employee_data *e1;
    int n;
    printf("Enter how many employee data you want to store: ");
    scanf("%d", &n);
    e1 = (employee_data *)calloc(n, sizeof(employee_data));
    FILE *fptr;
    fptr = fopen("Employee_data.txt", "w");

    for (int i = 0; i < n; i++)
    {
        printf("\n\nEnter the Employee ID: ");
        scanf("%d", &e1[i].Empid);
        fflush(stdin);

        printf("Enter the Employee Name: ");
        scanf("%[^\n]", &e1[i].Empname);
        fflush(stdin);

        printf("Enter the Employee age: ");
        scanf("%d", &e1[i].Empage);
        fflush(stdin);

        printf("Enter the Employee department: ");
        scanf("%[^\n]", &e1[i].Empdept);
        fflush(stdin);

        printf("Enter the Employee salaray: ");
        scanf("%d", &e1[i].Empsalary);

        fwrite(&e1[i], sizeof(employee_data), 1, fptr);
    }

    fclose(fptr);
}
void display()
{

    employee_data e1;
    FILE *fptr;

    fptr = fopen("Employee_data.txt", "r");
   printf("EmpID         EmpName          EmpAge   EmpDept           Empsalary\n");
    while (fread(&e1, sizeof(employee_data), 1, fptr))
    {

        printf("\n%-5d%15s%15d%10s%20d", e1.Empid, e1.Empname, e1.Empage, e1.Empdept, e1.Empsalary);
    }
fclose(fptr);
}

int main()
{

    int op;
    do
    {
        printf("\n\n=============PRESS 0 TO EXIT==============");
        printf("\n1.STORE EMPLOYEES DATA~ ");
        printf("\n2.DISPLAY EMPLOYEES DATA~");
        printf("\n\nEnter you option: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            datastore();
            break;

        case 2:
            display();
            break;

        case 0:
            break;

        default:
            printf("WRONG INPUT TRY AGAIN");
            break;
        }

    }        while (op != 0);
    return 0;
}
