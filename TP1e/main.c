#include <stdio.h>
#include "getOperandos.h"       /**< Librer�a para obtener operandos A y B. */
#include "userMenu.h"           /**< Librer�a men� y opci�n. */
#include "operaciones.h"        /**< Libreria de operaciones. */
#include "mostrar.h"            /**< Librer�a para mostrar en pantalla los resultados. */

int main()
{
    float A = 0;                /**< Flotante operando A. */
    float B = 0;                /**< Flotante operando B. */
    float resta;                /**< Flotante resultado de resta entre A y B. */
    float division;             /**< Flotante resultado de divisi�n entre A y B. */
    float multiplicacion;       /**< Flotante resultado de multiplicaci�n entre A y B. */
    float suma;                 /**< Flotante resultado de suma entre A y B. */
    float factorialA;           /**< Flotante resultado del factorial de A. */
    float factorialB;           /**< Flotante resultado del factorial de B. */
    int opcion;                 /**< Entero valor devuelto de la funci�n userMenu. */

    do
    {
        opcion = userMenu(A, B);
        switch(opcion)
        {
        case 1:
            A = getIntA(A);
        break;
        case 2:
            B = getIntB(B);
        break;
        case 3:
            suma = getSuma(A, B);
            resta = getResta(A, B);
            division = getDiv(A, B);
            multiplicacion = getMul(A, B);
            factorialA = getFa(A);
            factorialB = getFb(B);
        break;
        case 4:
            mostrarRes(suma, resta, division, multiplicacion, factorialA, factorialB);
        break;
        }
    }while(opcion != 5);

    return 0;
}
