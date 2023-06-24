#include<stdio.h>
#include<string.h>

typedef union {
    int age;
    char DOB[20];
} Details;

typedef struct {
    char name[50];
    int id;
    float salary;
    Details details;
} Employee;

int main() {
    Employee emp1, emp2;
   
    strcpy(emp1.name, "John");
    emp1.id = 1;
    emp1.salary = 25000.50;
    emp1.details.age = 25;
    
    strcpy(emp2.name, "Mary");
    emp2.id = 2;
    emp2.salary = 35000.0;
    strcpy(emp2.details.DOB, "05-07-1990");

    printf("Employee 1\nName: %s\nID: %d\nSalary: %.2f\nAge: %d\n\n", 
           emp1.name, emp1.id, emp1.salary, emp1.details.age);
    printf("Employee 2\nName: %s\nID: %d\nSalary: %.2f\nDOB: %s\n\n", 
           emp2.name, emp2.id, emp2.salary, emp2.details.DOB);

    return 0;
}