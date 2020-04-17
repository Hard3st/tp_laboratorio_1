#include <stdio.h>

int userMenu(float numA, float numB);

/** \brief Función mostrar menú y obtener opción
 * \param numA float
 * \param numB float
 * \return opcion int
 */
int userMenu(float numA, float numB)
{
    int opcion;

    printf("\n");
    printf("1)_Ingresar 1er operando. ");
    printf("A=%.2f\n", numA);
    printf("2)_Ingresar 2do operando. ");
    printf("B=%.2f\n", numB);
    printf("3)_Calcular todas las operaciones. \n");
    printf("4)_Informar resultados. \n");
    printf("5)_Salir. \n");
    printf("Elija una de las siguientes opciones que desea realizar: ");
    printf("\n");
    scanf("%d", &opcion);

    while(opcion > 5 || opcion < 1)            /**< Validación de opción ingresada entre 1 y 5. */
    {
        printf("Opcion invalida. Ingrese nuevamente una opcion: ");
        scanf("%d", &opcion);
    }
    return opcion;
}
