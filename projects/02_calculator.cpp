#include <iostream>
using namespace std; 

int main(){
    double val1; 
    double val2; 
    char oper; 
    cout << "----------------------------------------" << '\n'; 
    cout << "||-------||-||CALCULATOR++||-||-------||" << '\n'; 
    cout << "----------------------------------------" << '\n'; 
    cout << "Enter your first number:         "; cin >> val1;
    cout << "Enter your second number:        "; cin >> val2;
    cout << "What's your operation?(+ - * /): "; cin >> oper; 
    cout << '\n';

    switch (oper){
        case '+':
            cout << "result: " << val1 + val2 << '\n'; 
            break;

        case '-':
            cout << "result: " << val1 - val2 << '\n'; 
            break;

        case '*':
            cout << "result: " << val1 * val2 << '\n'; 
            break;
        
        case '/':
            if(val2 == 0){
                cout << "ERROR: Division by zero is not allowed." << '\n';
            }else{
                cout << "result: " << val1 / val2 << '\n';
            }
            break;
        default:
            cout << "ERROR: Invalid operation. Please enter one of (+ - * /)." << '\n';
            break;
    }
    cout << '\n';
    cout << "**************************************" << '\n'; 
    return 0;
}