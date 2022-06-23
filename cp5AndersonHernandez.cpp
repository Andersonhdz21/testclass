#include <iostream>
using namespace std;

int suma (int x, int y){
    int res;
    res = x + y;
    return res;
}

int resta (int x, int y){
    int res;
    res = x - y;
    return res;
}

int mult (int x, int y){
    int res;
    res = x * y;
    return res;
}

int divsn (int x, int y){
    int res;
    res = x / y;
    return res;
}

int main ()
{
   cout << "la suma es: " << suma(7, 6) << endl;
   cout << "la resta es: " << resta(7,6) << endl;
   cout << "la multiplicacion es: " << mult(7, 6) << endl;
   cout << "la division es: " << divsn(10,2) << endl;
    return 0;
}