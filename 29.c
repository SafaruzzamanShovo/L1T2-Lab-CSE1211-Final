#include <stdio.h>

struct employee{
    char    name[30];
    int     empId;
    float   salary;
};

int main()
{
    int n;
    printf("Number of Employee");
    scanf("%d",&n);
    struct employee emp[n];
    for (int i = 0; i < n; ++i)
    {
    	printf("\nEnter details of Employee No %d:\n" ,i+1);
	    printf("Name : ");
	    getchar();
        gets(emp[i].name);
	    printf("ID : ");
	    scanf("%d",&emp[i].empId);
	    printf("Salary ?:");
	    scanf("%f",&emp[i].salary);
    }
    printf("\n\n");
    printf("\n--------------Employee Information----------\n");
    for (int i = 0; i < n; ++i){
        printf("\nDetails of Employee No %d:\n" ,i+1);
	    printf("Name: %s\n"   ,emp[i].name);
	    printf("Id: %d\n"     ,emp[i].empId);
	    printf("Salary: %f\n\n",emp[i].salary);
    }

    return 0;
}

