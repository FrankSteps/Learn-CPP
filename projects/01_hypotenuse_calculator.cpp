/*
a² + b² = c²               
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a;
    double b;
    double c;

    cout << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b;

    a = pow(a, 2);   
    b = pow(b, 2);
    
    c = a + b;
    c = sqrt(c);

    //"c = sqrt(pow(a, 2) + pow(b, 2));" is better 

    cout << "hypotenuse: "<< c << '\n'; 
    return 0;
}


