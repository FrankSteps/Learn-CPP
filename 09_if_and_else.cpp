#include <iostream>
using namespace std; 

int main(){
    int age; 

    cout << "What's your age? "; cin >> age;
    if(age > 100){
        cout << "You have much experience, sir.";
    }else if(age >= 18){
        cout << "You can drink beer in Brazil";
    }else if(age < 0){
        cout << "You're a idiot!"; 
    }else{
        cout << "You can't drink beer in Brazil";
    }
    
    return 0;
}