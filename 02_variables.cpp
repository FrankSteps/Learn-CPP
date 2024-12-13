#include <iostream>
#include <string>
using namespace std;

int main(){
    //integer (whole number)
    int year = 2024;

    //double (number including decimal)
    double price = 99.90;
    const double pi = 3.141590; 

    //single character
    char character = 'a'; 

    //boolean is true or false 
    bool power = true; 

    //string (Objects that represents a sequence of text )
    string name = "some..."; 
    const string myname  = "Francisco"; 

    //variables output 
    cout << year << '\n';
    cout << pi << '\n';
    cout << price << '\n';
    cout << character << '\n';
    cout << power << '\n';
    cout << name << '\n';
    cout << myname << '\n';
    
    return 0;
}