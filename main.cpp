#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
    //Se definen los valores a utilizar
    float x1, x2, y1, y2, distancia;
    //Se solicitan los valores al usuario
    cout << "Inserte el valor de x del primer punto" << endl;
    cin >> x1;
    cout << "Inserte el valor de y del primer punto" << endl;
    cin >> y1;
    cout << "Inserte el valor de x del segundo punto" << endl;
    cin >> x2;
    cout << "Inserte el valor de y del segundo punto" << endl;
    cin >> y2;
    //Se procede a realizar la operacion
    distancia=sqrt(pow(x1-x2,2)+ pow (y1-y2,2));

    //Se da salida al resultado
    cout << "La distancia entre los dos puntos es:" << endl;
    cout << distancia << endl;
    //Funcion para pausar la consola y ver bien el resultado
    system("pause");

    return 0;
}
