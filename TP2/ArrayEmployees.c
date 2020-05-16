#include "ArrayEmployees.h"

/** \brief Inicialización del array Employees
 *
 * \param employeeList[] Employee
 * \param len int
 * \param TRUE int
 * \return int
 *
 */
int initEmployees(Employee employeeList[], int len, int TRUE)
{
    int i;

    for(i=0; i<len; i++)
    {
        employeeList[i].isEmpty = TRUE;
    }
    return 0;
}

/** \brief Menú de Employees
 *
 * \param void
 * \return option int
 *
 */
int menuEmployees(void)
{
    int option;

        printf("\n");
        printf("1.Cargar un EMPLEADO\n");
        printf("2.Buscar un EMPLEADO por ID\n");
        printf("3.Eliminar un EMPLEADO por ID\n");
        printf("4.Mostrar EMPLEADOS en columna\n");
        printf("5.Ordenar EMPLEADOS\n");
        printf("6.Modificar EMPLEADO\n");
        printf("7.Mostrar calculos\n");
        printf("8.SALIR\n");
        printf("ELIJA UNA OPCION: ");
        printf("\n");
        scanf("%d", &option);
        while(option < 0 || option > 8)
        {
            printf("Opcion invalida. Reingrese una opcion\n");
            scanf("%d", &option);
        }
        return option;
}

/** \brief Harcodeo Employees
 *
 * \param employeeList[] Employee
 * \param len int
 * \return void
 *
 */
void harcodearEmployees(Employee employeeList[], int len)
{
    int employeeID[4] = {101,103,105,107};
    char employeeName[4][20] = {"RAUL","PEDRO","HECTOR","JUAN"};
    char employeeLastname[4][20] = {"JUAREZ","GONZALEZ","RODRIGUEZ","MARTINEZ"};
    float employeeSalary[4] = {3500,3500,5000,2000};
    int employeeSector[4] = {2,2,5,3};
    int i;

  for(i=0; i<4; i++)
  {
        employeeList[i].id = employeeID[i];
        employeeList[i].salary = employeeSalary[i];
        employeeList[i].sector = employeeSector[i];
        strcpy(employeeList[i].name, employeeName[i]);
        strcpy(employeeList[i].lastName, employeeLastname[i]);
        employeeList[i].isEmpty = 1;
  }
}

/** \brief Add Employee data
 *
 * \param employeeList[] Employee
 * \param len int
 * \param id int
 * \return int
 *
 */
int addEmployeesData(Employee employeeList[], int len, int id)
{
    int add;
    int sector;
    char name[51];
    char lastName[51];
    float salary;

    printf("Ingrese nombre del empleado: \n");
    scanf("%s", &name);
    strupr(name);
    printf("Ingrese apellido del empleado: \n");
    scanf("%s", &lastName);
    strupr(lastName);
    printf("Ingrese el salario del empleado: \n");
    scanf("%f", &salary);
    printf("Ingrese el sector del empleado: \n");
    scanf("%d", &sector);

    add = addEmployees(employeeList, len, id, name, lastName, salary, sector);
    if(add == 0)
    {
        printf("El empleado se cargo exitosamente.\n");
    }
    else
    {
        printf("Error al cargar empleado");
    }
}

/** \brief Recibe y carga datos en el array Employees
 *
 * \param employeeList[] Employee
 * \param len int
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \param salary float
 * \param sector int
 * \return i int
 *
 */
int addEmployees(Employee employeeList[], int len, int id, char name[], char lastName[], float salary, int sector)
{
    int i;
    i = searchSpace(employeeList, len);

    if(i >= 0)
    {
    employeeList[i].id = id;
    strcpy(employeeList[i].name, name);
    strcpy(employeeList[i].lastName, lastName);
    employeeList[i].salary = salary;
    employeeList[i].sector = sector;
    employeeList[i].isEmpty = 1;
    i = 0;
    }
    return i;
}

/** \brief Busca espacio
 *
 * \param employeeList[] Employee
 * \param len int
 * \return index int
 *
 */
int searchSpace(Employee employeeList[], int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(employeeList[i].isEmpty == 0)
        {
            index = i;
            break;
        }
    }
    return index;
}

/** \brief Busca Employee
 *
 * \param employeeList[] Employee
 * \param len int
 * \return void
 *
 */
void findEmployee(Employee employeeList[], int len)
{
    int indice;

    indice = findEmployeeById(employeeList, len);

    if(employeeList[indice].isEmpty == 1)
    {

        printf("ID: %d\t\nName: %s\t\nLastname: %s\t\nSector: %d\t\n",
            employeeList[indice].id,
            employeeList[indice].name,
            employeeList[indice].lastName,
            employeeList[indice].sector);
    }
    else
    {
        printf("Este empleado no existe o esta dado de baja.\n");
    }
}

/** \brief Remove Employee
 *
 * \param employeeList[] Employee
 * \param len int
 * \return void
 *
 */
void removeEmployee(Employee employeeList[], int len)
{
    int id;
    int indice;

    indice = findEmployeeById(employeeList, len);
    employeeList[indice].isEmpty = 0;
    if(employeeList[indice].isEmpty == 0)
    {
        printf("Empleado eliminado correctamente.\n");
    }
}

/** \brief Modificación de Employee
 *
 * \param employeeList[] Employee
 * \param len int
 * \return void
 *
 */
void modEmployee(Employee employeeList[], int len)
{
    int mod;
    char name[20];
    char lastName[20];
    float salary;
    int sector;
    int indice;

    indice = findEmployeeById(employeeList, len);

    if(employeeList[indice].isEmpty == 1)
    {

        mod = modMenu();

        switch(mod)
        {
        case 1:
            scanf("%s", &name);
            strupr(name);
            strcpy(employeeList[indice].name, name);
        break;
        case 2:
            scanf("%s", &lastName);
            strupr(lastName);
            strcpy(employeeList[indice].lastName, lastName);
        break;
        case 3:
            scanf("%f", &salary);
            employeeList[indice].salary = salary;
        break;
        case 4:
            scanf("%d", &sector);
            employeeList[indice].sector = sector;
        break;

        }
    }
    else
    {
        printf("Este empleado no existe o está dado de baja.\n");
    }
}

/** \brief Busca Employee por ID
 *
 * \param employeeList[] Employee
 * \param len int
 * \return indice int
 *
 */
int findEmployeeById(Employee employeeList[], int len)
{
    int i;
    int id;
    int indice;

    id = scanID();

    for(i=0;i<len;i++)
    {
        if(employeeList[i].id == id)
        {
            indice = i;
            break;
        }
        else
        {
            indice = -1;
        }
    }
    return indice;
}

/** \brief Lee ID ingresada
 *
 * \return id int
 *
 */
int scanID()
{
    int id;
    printf("Ingrese la ID del empleado que desea buscar: \n");
    scanf("%d", &id);
    return id;
}

/** \brief Muestra el array Employee en columna
 *
 * \param employeeList[] Employee
 * \param len int
 * \return void
 *
 */
void printEmployees(Employee employeeList[], int len)
{
    int i;
    printf("/  ID  / NAME\t / LASTNAME\t / SALARY\t / SECTOR\n");
    printf("*********************************************************\n");
    for(i=0;i<len;i++)
    {
        if(employeeList[i].isEmpty == 1)
        {
            printf("/ %4d / %s\t / %s\t / $%.2f\t / %d\n",
                   employeeList[i].id,
                   employeeList[i].name,
                   employeeList[i].lastName,
                   employeeList[i].salary,
                   employeeList[i].sector);
        }
    }
}

/** \brief Ordena array Employee
 *
 * \param employeeList[] Employee
 * \param len int
 * \param sort int
 * \return void
 *
 */
void sortEmployees(Employee employeeList[], int len, int sort)
{
    int i;
    int j;
    Employee auxEmployee;

    for(i=0;i<len;i++)
    {
        if(employeeList[i].isEmpty == 1)
        {
            for(j=0;j<len;j++)

                    {
                        if(strcmp(employeeList[i].lastName, employeeList[j].lastName)<sort)
                        {
                            auxEmployee = employeeList[i];
                            employeeList[i] = employeeList[j];
                            employeeList[j] = auxEmployee;
                        }
                        else if(strcmp(employeeList[i].lastName, employeeList[j].lastName)>sort)
                        {
                            auxEmployee = employeeList[i];
                            employeeList[i] = employeeList[j];
                            employeeList[j] = auxEmployee;
                        }
                    }
            }
        }
}

/** \brief Menú de ordenamiento
 *
 * \return option int
 *
 */
int sortMenu()
{
    int option;

    printf("\n");
    printf("1)_Ordenar ascendente.\n");
    printf("2)_Ordenar descendente.\n");
    printf("¿De que manera desea realizar el ordenamiento?\n");
    printf("\n");
    scanf("%d", &option);

    if(option == 2)
    {
        option = -1;
    }
    else
    {
        option = 1;
    }
    return option;
}

/** \brief Menú de modificación de Employee
 *
 * \return option int
 *
 */
int modMenu()
{
    int option;

    printf("\n");
    printf("1)_Nombre.\n");
    printf("2)_Apellido.\n");
    printf("3)_Salario.\n");
    printf("4)_Sector.\n");
    printf("¿Que desea modificar de este empleado?\n");
    printf("\n");
    scanf("%d", &option);

    return option;
}

/** \brief Calculo de total, promedio y salario superior al promedio
 *
 * \param employeeList[] Employee
 * \param len int
 * \return void
 *
 */
void calcEmployees(Employee employeeList[], int len)
{
    int total = 0;
    int promedio = 0;
    int suPromedio = 0;
    int res;
    int i;

    for(i=0;i<len;i++)
    {
        if(employeeList[i].isEmpty == 1)
        {
            total = total + employeeList[i].salary;
            promedio++;
        }
    }
    res = total / promedio;

    for(i=0;i<len;i++)
    {
        if(employeeList[i].isEmpty == 1 && employeeList[i].salary > res)
        {
            suPromedio++;
        }
    }
    mostrarCalc(employeeList, len, total, res, suPromedio);
}

/** \brief Mostrar calculos
 *
 * \param employeeList[] Employee
 * \param len int
 * \param total int
 * \param res int
 * \param suPromedio int
 * \return void
 *
 */
void mostrarCalc(Employee employeeList[], int len, int total, int res, int suPromedio)
{
    printf("El salario total es: %d\t\nEl promedio de los salarios es: %d\t\nEl numero de empleados que superan el promedio es: %d\t\n",
            total,
            res,
            suPromedio);
}
