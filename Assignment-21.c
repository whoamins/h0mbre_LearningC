#include <stdio.h>



typedef struct {
    char * title;
    char * last_name;
    char * first_name;
    int id;
    int ssn;
} employee;

typedef struct {
    employee first;
    employee second;
} group;


void initEmployee(employee * employeeObj, char * title, char * last_name, char * first_name,
                  int id, int ssn) {
    employeeObj -> first_name = first_name;
    employeeObj -> last_name = last_name;
    employeeObj -> title = title;
    employeeObj -> id = id;
    employeeObj -> ssn = ssn;
}

void printGroup() {
    group group1;

    printf("Title: %s, First Name: %s, Last Name: %s, ID: %d, SSN: %d\n", group1.first.title,
           group1.first.first_name, group1.first.last_name, group1.first.id, group1.first.ssn);
    printf("------");
    printf("Title: %s, First Name: %s, Last Name: %s, ID: %d, SSN: %d", group1.second.title,
           group1.second.first_name, group1.second.last_name, group1.second.id, group1.second.ssn);
}

int main() {
    employee employee1;
    employee employee2;

    initEmployee(&employee1, "Some Title", "Doe", "John", 12, 5434);
    initEmployee(&employee2, "Title Some", "Field", "Mark", 32, 4345);

    printGroup();

    return 0;
}
