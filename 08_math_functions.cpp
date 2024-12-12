#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //more functions cmath:  www.cpluplus.com/reference/cmath
    double x = 3;
    double y = 4;
    double z;

    z = max(x, y);
    cout << z << '\n';

    z = min(x, y);
    cout << z << '\n';
    
    z = pow(2, 4);
    cout << z << '\n';
    
    z = sqrt(9);
    cout << z << '\n';
    
    z = abs(-3); 
    cout << z << '\n';
    
    z = round(x);
    cout << z << '\n';
    
    z = ceil(x);
    cout << z << '\n';
    
    z = floor(x);
    cout << z << '\n';
    
    return 0;
}