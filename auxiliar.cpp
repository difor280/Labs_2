#include "auxiliar.h"

int deshacer(int *unidades, int *numero)
{
    {
         int decimal=10,copia;
         *unidades=0;
            while (true)
            {
                *unidades=*unidades +1;
                if(*numero/decimal == 0)
                {
                    break;
                }
                decimal*=10;
            }
            copia=*numero;
            *numero=*numero/10;
            return copia%10 ;

      }
}


int recursiva(int fnodo, int cnodo, int v, int nodos)//v=# vertices en un recuadro
{
    bool caminos[2];//caminos [0] si hay mov. a la derecha y vaminos [1] si hay mov hacia abajo
    caminos[0]=(cnodo<v);
    caminos[1]=(fnodo<v);
    if(fnodo==v-1 && cnodo==v-1)nodos++;
    if(caminos[0]){
        nodos=recursiva(fnodo, cnodo+1,v,nodos);
    }
    if(caminos[1]){
        nodos=recursiva(fnodo+1,cnodo,v,nodos);
    }
    return nodos;
}


bool amigable(int n)
{
    int sum1=0,sum2=0;
    for(int i=1;i<=(n/2);i++)//n/2 por que el divisor mas grande  que puede tener un numero es su mitad, despues de la mitad no hay divisores enteros
        if(n%i==0)
            sum1+=i;
    for(int i=1;i<=(sum1/2);i++)
        if(sum1%i==0)
            sum2+=i;
    return (sum2==n && n!=sum1);//este condicional retornara 1->true para indicar que el numero si es amigable
}


long long int potencia(long int base, int exponente)
{   long long int resultado=base;

    if (exponente==1)
    {
        return 1;
    }
    for(int i=2; exponente !=1 and i <=exponente-1;i++)
    {
        resultado*=base;
    }
        return  resultado;
}

long long int factorial(int n)
{
    long long int fact=1;
    for(;n>1;n--) fact*=n;
    return fact;

}