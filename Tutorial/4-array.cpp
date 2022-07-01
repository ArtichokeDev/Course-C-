//======================
//  TUTORIAL C++
//======================

#include <iostream>

using namespace std;

//main
int main(){

    //flotante
    int edad;
    float alt;
    char sexo[10];

    cout << "Indica tu edad: ";
    cin >> edad;
    cout << "Indica tu altura: ";
    cin >> alt;
    cout << "Indica tu sexo: ";
    cin >> sexo;

    cout << "E: " << edad << endl;
    cout << "A: " << alt << endl;
    cout << "S: " << sexo << endl;

    return 0;
}