#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#define TRUE 0
#define ES 50

int main()
{
    int option;
    int sort;
    int id = 107;
    Employee employeeList[ES];

    initEmployees(employeeList, ES, TRUE);
    harcodearEmployees(employeeList, ES);

    do{

    id = id + 1;
    option = menuEmployees();

    switch(option)
    {
    case 1:
    addEmployeesData(employeeList, ES, id);
    break;
    case 2:
    findEmployee(employeeList, ES);
    break;
    case 3:
    removeEmployee(employeeList, ES);
    break;
    case 4:
    printEmployees(employeeList, ES);
    break;
    case 5:
    sort = sortMenu();
    sortEmployees(employeeList, ES, sort);
    break;
    case 6:
    modEmployee(employeeList, ES);
    break;
    case 7:
    calcEmployees(employeeList, ES);
    break;

    }
    }while(option != 8);
    return 0;
}
