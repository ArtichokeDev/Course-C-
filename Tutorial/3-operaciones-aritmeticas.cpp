//======================
//  TUTORIAL C++
//======================

#include <iostream>

using namespace std;

//main
int main(){

    //flotante
    int n1,n2, suma = 0,resta = 0, multiplicacion = 0, division = 0;

    cout << "Indica un numero: ";
    cin >> n1;
    cout << "Indica un numero: ";
    cin >> n2;

    //suma
    suma = n1 + n2;
    cout << "\n Suma = " << suma << endl;
    //resta
    resta = n1 - n2;
    cout << "Resta = " << resta << endl;
    //mult
    multiplicacion = n1 * n2;
    cout << "Multiplicacion = " << multiplicacion << endl;
    //div
    division = n1 / n2;
    cout << "Division = " << division << endl;

    return 0;
}