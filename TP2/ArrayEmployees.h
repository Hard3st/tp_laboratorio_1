
typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}Employee;

int initEmployees(Employee emptyList[], int len, int TRUE);
int addEmployeesData(Employee employeesList[], int len, int id);
int addEmployees(Employee employeeList[], int len, int id, char name[], char lastName[], float salary, int sector);
int searchSpace(Employee employeeList[], int len);
int findEmployeeById(Employee employeeList[], int len);
int menuEmployees(void);
int scanID(void);
int sortMenu(void);
int modMenu(void);
void printEmployees(Employee employeeList[], int len);
void removeEmployee(Employee employeeList[], int len);
void findEmployee(Employee employeeList[], int len);
void sortEmployees(Employee employeeList[], int len, int sortEmployee);
void harcodearEmployees(Employee employeeList[], int len);
void modEmployee(Employee employeeList[], int len);
void calcEmployees(Employee employeeList[], int len);
void mostrarCalc(Employee employeeList[], int len, int total, int res, int suPromedio);
