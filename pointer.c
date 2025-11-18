//program to calculate total salary of N employess 

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void main(){
    int n, i;
    struct Employee *employees;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Allocate memory for n employees
    employees = (struct Employee *)malloc(n * sizeof(struct Employee));
    printf("Size of struture Employee:%lu bytes\n", sizeof(struct Employee));

    // Input employee details
    for(i = 0; i < n; i++) {
        printf("Enter details for employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Calculate total salary
    float totalSalary = 0;
    for(i = 0; i < n; i++) {
        totalSalary += employees[i].salary;
    }

    printf("Total Salary of all employees: %.2f\n", totalSalary);

    // Free allocated memory
    free(employees);
}
