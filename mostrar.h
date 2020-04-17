
void mostrarRes(float suma, float resta, float division, float multiplicacion, float Fa, float Fb);

/** \brief Función mostrar resultados de : suma, resta, división, multiplicación, factorial A, factorial B
 * \param suma float
 * \param resta float
 * \param division float
 * \param multiplicacion float
 * \param Fa float
 * \param Fb float
 * \return void
 */
void mostrarRes(float suma, float resta, float division, float multiplicacion, float Fa, float Fb)
{
    printf("\n");
    printf("El resultado de la suma es: %.2f", suma);
    printf("\n");
    printf("El resultado de la resta es: %.2f", resta);
    printf("\n");
    if(division == 0)
    {
        printf("No se puede realizar la division de los operandos, debido a que el operando B es '0'\n" );
    }
    else
    {
        printf("El resultado de la division es: %.2f", division);
        printf("\n");
    }
    printf("El resultado de la multiplicacion es: %.2f", multiplicacion);
    printf("\n");
    if(Fa == 0)
    {
        printf("No se puede realizar el factorial del operando A. \n");
    }
    else
    {
        printf("El resultado de el factorial del operando A es: %.0f", Fa);
        printf("\n");
    }
    if(Fb == 0)
    {
        printf("No se puede realizar el factorial del operando B. \n");
    }
    else{
        printf("El resultado de el factorial del operando B es: %.0f", Fb);
        printf("\n");
    }
}
