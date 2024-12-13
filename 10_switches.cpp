#include <iostream>
using namespace std; 

int main(){
    int month;  
    cout << "Enter a number (1 - 12): "; cin >> month; 

    switch (month){
        case 1:
            cout << "January" << '\n'; 
            break;

        case 2:
            cout << "February" << '\n'; 
            break;

        case 3:
            cout << "Marchary" << '\n';
            break;

        case 4:
            cout << "Aprilary" << '\n'; 
            break;

        case 5:
            cout << "Mayary" << '\n'; 
            break;

        case 6:
            cout << "Juneary" << '\n'; 
            break;

        case 7:
            cout << "Julyary" << '\n'; 
            break;

        case 8:
            cout << "Augustary" << '\n';
            break;

        case 9:
            cout << "Septemberary" << '\n'; 
            break;

        case 10:
            cout << "Octuberary" << '\n'; 
            break;

        case 11:
            cout << "Novemberary" << '\n';
            break;

        case 12:
            cout << "Decemberary" << '\n'; 
            break;

        default:
            cout << "Please enter in only numbers (1 - 12)" << '\n';
            break;
    }
    return 0;
}