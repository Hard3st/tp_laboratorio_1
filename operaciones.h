
float getSuma(float numA, float numB);
float getResta(float numA, float numB);
float getDiv(float numA, float numB);
float getMul(float numA, float numB);
float getFa(float numA);
float getFb(float numB);

/** \brief Función sumar operandos A y B
 * \param numA float
 * \param numB float
 * \return Rsuma float
 */
float getSuma(float numA, float numB)
{
    float Rsuma;
    Rsuma = numA + numB;
    return Rsuma;
}

/** \brief Función restar operandos A y B
 * \param numA float
 * \param numB float
 * \return Rresta float
 */
float getResta(float numA, float numB)
{
    float Rresta;
    Rresta = numA - numB;
    return Rresta;
}

/** \brief Función dividir operandos A y B
 * \param numA float
 * \param numB float
 * \return Rdiv float
 */
float getDiv(float numA, float numB)
{
    float Rdiv = 0;
    int flag = 0;
    if(numB == 0)
    {
        flag = 1;
    }
    else{
        Rdiv = numA / numB;
    }
    if(flag == 1)
    {
       Rdiv = 0;
    }
    return Rdiv;
}

/** \brief Función multiplicar operandos A y B
 * \param numA float
 * \param numB float
 * \return Rmul float
 */
float getMul(float numA, float numB)
{
    float Rmul;
    Rmul = numA * numB;
    return Rmul;
}

/** \brief Función factorial operando A
 * \param numA float
 * \return FactorialA float
 */
float getFa(float numA)
{
    int comp;
    int i;
    int flag = 0;
    float FactorialA = 1;
    float res;

    comp = numA;
    res = numA - comp;
    if(res != 0 || numA <= 0)
    {
        flag = 1;
    }
    else
    {
       for(i=numA;i>=1;i--)
       {
           FactorialA = FactorialA * i;
       }
    }
    if(flag == 1)
    {
        FactorialA = 0;
    }

    return FactorialA;
}

/** \brief Función factorial operando B
 * \param numB float
 * \return FactorialB float
 */
float getFb(float numB)
{
    int comp;
    int i;
    int flag = 0;
    float FactorialB = 1;
    float res;

    comp = numB;
    res = numB - comp;
    if(res != 0 || numB <= 0)
    {
        flag = 1;
    }
    else
    {
       for(i=numB;i>=1;i--)
       {
           FactorialB = FactorialB * i;
       }
    }
    if(flag == 1)
    {
        FactorialB = 0;
    }

    return FactorialB;
}
