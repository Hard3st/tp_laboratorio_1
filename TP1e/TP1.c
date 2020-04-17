#include <stdio.h>
#include "getOperandos.h"
#include "userMenu.h"
#include "operaciones.h"
#include "mostrar.h"

int main()
{
    float A = 0;
    float B = 0;
    float resta;
    float division;
    float multiplicacion;
    float suma;
    float factorialA;
    float factorialB;
    int opcion;

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
