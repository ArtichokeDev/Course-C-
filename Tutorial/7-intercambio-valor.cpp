//======================
//  TUTORIAL C++
//======================

#include <iostream>

using namespace std;

//main
int main(){

    float a = 2.0, b = 4.5, aux;

    aux = a;
    a = b;
    b = aux; //intercanvia valor

    cout.precision(2);
    cout <<"a: "<< a <<", b: " << b << endl;

}