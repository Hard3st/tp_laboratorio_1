#include <stdio.h>

float getIntA(float numA);
float getIntB(float numB);

/** \brief Funci�n obtener operando A
 * \param numA float
 * \return numA float
 */
float getIntA(float numA)
{
    printf("Ingrese el operando A: ");
    scanf("%f", &numA);
    return numA;
}

/** \brief Funci�n obtener operando B
 * \param numB float
 * \return numB float
 */
float getIntB(float numB)
{
    printf("Ingrese el operando B: ");
    scanf("%f", &numB);
    return numB;
}
