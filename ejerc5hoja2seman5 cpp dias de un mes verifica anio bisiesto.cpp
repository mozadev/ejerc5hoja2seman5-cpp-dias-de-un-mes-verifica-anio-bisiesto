/*
Escriba un programa en C++ que calcule el número de días de un mes, dados como datos
un mes y un año cualquiera. Debe considerar que dicho año puede ser o no bisiesto.
*/
#include <iostream>
using namespace std;
int VerificaMes(int Mes, int Anio)
{   int NumDias;
    switch (Mes)
      {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            NumDias = 31;
            break;
        case 4: case 6: case 9: case 11:
            NumDias = 30;
            break;
        case 2:if(Anio%4==0)
            NumDias = 28;
                else
            NumDias=29;
        break;
        default:
            cout<<"El mes no es válido";
        break;
      }
    return NumDias;
}
int main()
{
    int Mes,Anio;
    cout<<"ingrese el mes y el a"<<char(164)<<"o"<<endl;
    cin>>Mes>>Anio;
    cout<<VerificaMes(Mes,Anio)<<endl;

  }
