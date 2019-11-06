/* program to generate employee details using array structures*/

#include <stdio.h>
 
/*structure declaration*/
struct employee{
    char    name[30];
    int     empId;
    int  salary;
};
 
int main()
{
    /*declare structure variable*/
    struct employee emp;
    int i,n;
    printf("\n Enter the number of employees");
    scanf("%d",&n);
    printf("\nEnter details :\n");
    for(i=0;i<n;i++)
    {
    /*read employee details*/
    
    printf("Name :",i+1);          
    scanf("%s",emp.name);
    printf("ID :");            
    scanf("%d",&emp.empId);
    printf("Salary :");        
    scanf("%d",&emp.salary);
    }

     printf("\nEntered detail is:\n");
     for(i=0;i<n;i++)
     { 
    /*print employee details*/
    
    printf("Name: %s \n"   ,emp.name);
    printf("Id: %d \n"     ,emp.empId);
    printf("Salary: %d\n",emp.salary);
    printf("\n");
    }
    return 0;
}
