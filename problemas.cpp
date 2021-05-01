#include "problemas.h"
#include "auxiliar.h"
#include<time.h>

using namespace std;

//Links Tinkercad:
//Ejercicio1: https://www.tinkercad.com/things/hayWYz1e3Rm
//Ejercicio5: https://www.tinkercad.com/things/02bFcL2rLRb
//Problema 1: https: https://www.tinkercad.com/things/7UgTq5vOdAP
//Problema 17: https:https://www.tinkercad.com/things/7ypGLzHgZkD
//Problema 10: https://www.tinkercad.com/things/9Z05dPmjU6K



int main()
{
    bool retorno ;
    char hola[]={"hola"};
    char hole[]={"hola "};
    retorno=problema3(hola,hole);
    cout<<retorno<< endl;

    /*char c[30];
    cout<<"Intoduzca la cadena de caracteres: ";
          //;cin.getline(c,30,'\n');
    cin>> c;
    problema7 (c);*/


    /*int numero = 123;
    char c[3];
    problema5(numero,c);
    cout <<c;*/

    /*char cadena[]="Mor_dida",*caden;
    caden=problema6(cadena);*/
    //problema14();

   /* char caden[]="23545";
    long int recoger;
    recoger=problema4(caden);
    cout<<recoger<<endl;
    */
}




void problema2()
{
    char cadena[201]={};
    int letra[26]={};
        srand(time(0));
        for(int i=0;i<200;i++)
        {
            cadena[i]=char(rand()%(90-65+1)+65);
        }
        for(int j=0;j<=25;j++){
            for(int k=0;k<200;k++){
                if(char(j+65)==cadena[k])
                {
                    letra[j]++;
                }
            }
        }
        cadena[200]='\0';
        cout<<cadena<<endl;
        for(int t=0;t<26;t++)
        {
            cout<<char(t+65)<<": "<<letra[t]<<endl;
        }
        cout<<endl;
}

bool problema3(char *c1,char *c2)
{
    bool valor=true;
    
    for(int contador=0;true;contador++)
    {
        if(c1[contador]!= c2[contador])
        {
            valor=false;
            break;
        }
        if ( '\0' == c1[contador] or '\0'== c2[contador] )
        {
            break;
        }
    }
   return valor;
}

long long int problema4(char *c)
{
    int unidades, numero,suma=0;
      for(unidades=0;'\0' !=c[unidades];unidades++){}

       for(int i=0;i<unidades;i++)
       { 
           numero= potencia(10,unidades-i);
           numero*=(int(c[i])-48);
           suma+=numero;
       }
       return suma;

}


void problema5(int numero, char *c)
{
    int unidades, valor;
    while (true)
    {
        if(numero==0)
            {
                break;
            }
             valor=deshacer(&unidades,&numero);
            c[unidades-1]=char(valor+48);
    }
}

char *problema6(char *c)
{
    char guardado[20];
        for(int i=0;'\0'!= c[i];i++)
        {
            guardado[i]=c[i];
        }

        for(int i =0;'\0' != c[i];i++)
        {
            if(int(c[i])>= 97 and int(c[i])<= 122)
            {
                c[i]=int(c[i])-32;
            }
        }
        cout<<endl<<"Original: "<<guardado<< endl;
        cout<<endl<<"En Mayuscula: "<<c<<endl;
        return c;
}

void problema7(char *c)
{
    int longitud,j=0,cont,z=0;
      char  auxiliar[30],final[30],temp;

      for(longitud=0;c[longitud]!=0;longitud++){}
      
      for(int i=0;i<longitud;i++)
      {
        cont=0;
        temp=c[i];
        auxiliar[j]=temp;
        j++;
        for(int k=0;k<longitud;k++)
        {
          if(auxiliar[k]==temp)
          {
            cont++;
          }
        }
        if(cont==1)
        {
          final[z]=temp;
          z++;
        }
      }
      cout<<"Original: "<<c<<endl;
      cout<<"Sin repetidos: "<<final;
      cout<<endl;
}


void problema8(char *c1, char *c2)
{
    int pocision1=0,pocision2=0;
        char *guardado=c1;
        for(int i=0; guardado[i]!='\0';i++)
        {
            if(int(guardado[i])>=48 and int(guardado[i]) <=57)
            {
               c2[pocision2]=guardado[i];
               pocision2++;
            }
            else
            {
              c1[pocision1]=guardado[i];
              pocision1++;
            }
        }
        cout<<"Origianl: "<<guardado<<endl;
        cout<<"Texto: "<<c1;cout<<" Numero: "<<c2<<endl;
}



long long problema10(char *c)
{
    int total=0,valor=0,valor_ant;
        for (int i=0;c[i]!='\0';i++){
            valor_ant=valor;
            switch(c[i]){
                case 'M':valor=1000;break;
                case 'D':valor=500;break;
                case 'C':valor=100;break;
                case 'L':valor=50;break;
                case 'X':valor=10;break;
                case 'V':valor=5;break;
                case 'I':valor=1;break;
                default:valor=-1000000;break;
            }
            if(i==0)
                total=valor;
            else if(valor_ant>valor)
                total+=valor;
            else
                total-=valor;
        }
        return total;
}







bool problema12(int *mat, int elementos)
{



}




int problema13(int *mat)
{
    int estr=0, matriz[6][8];
        float logica;
        for(int f=0,i=0;f<6;f++)
            for(int c=0;c<8;c++,i++)matriz[f][c]=*(mat+i);
        for(int f=1;f<5;f++){//para omitir los bordes
            for(int c=1;c<7;c++){
                logica=(matriz[f][c]+matriz[f][c-1]+matriz[f][c+1]+matriz[f-1][c]+matriz[f+1][c])/float(5);
                if(logica>6)
                    estr++;
            }
        }
        return estr;
}

void problema14()
{
    int k=0;
      int numeros[100][100];
      while(k<25){
        for(int i=0;i<5;i++){
          for(int j=0;j<5;j++){
            //cout<<" numero ["<<i<<"]["<<j<<"]: "<<k<<endl;
              k++;
              numeros[i][j]=k;
          }
        }
      }
        cout<<"\nMostrando matriz a 0 grados\n\n";
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
              cout<<numeros[i][j]<<" ";
            }
            cout<<"\n";
        }
      /*---------------------*/
        cout<<"\nMostrando matriz a 90 grados\n\n";
        for(int i=0;i<=4;i++){
          for(int j=4;j>=0;j--){
            cout<<numeros[j][i]<<" ";
          }
          cout<<"\n";
        }

       /*---------------------*/
      cout<<"\nMostrando matriz rotada 180 grados\n\n";
      for(int i=4;i>=0;i--){
        for(int j=4;j>=0;j--){
          cout<<numeros[i][j]<<" ";
        }
        cout<<"\n";
      }
       /*---------------------*/
      cout<<"\nMostrando matriz rotada 270 grados\n\n";
      for(int i=4;i>=0;i--){
        for(int j=0;j<5;j++){
          cout<<numeros[j][i]<<" ";
        }
        cout<<"\n";
      }
        cout<<endl;
}


int problema16(int n)
{
    int caminos;
    caminos=recursiva(0,0,n+1,0);
    return caminos;
}



int problema17(int num)
{
    int suma=0;
    for(;num>1;num--){
        if(amigable(num)){
            suma+=num;
        }
    }
    return suma;
}









