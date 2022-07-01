//======================
//  TUTORIAL C++
//======================

#include <iostream>

using namespace std;

//main
int main(){

    float a = 2.0, b = 4.5, c = 3.0, d = 5.2, e = 12.0, f = 6.35;

    float res = (a+b/c)/(d+e/f);

    cout.precision(2);
    cout << res << endl;

}