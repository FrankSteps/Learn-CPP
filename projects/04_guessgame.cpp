#include <iostream>
using namespace std; 

int main(){
    //number generator
    srand(time(NULL));
    int num_program = (rand() % 10);
    int num_user;

    //user input 
    cout << "try guess the number (0 - 10): "; cin >> num_user;

    //verification 
    if(num_user == num_program){
        cout << "NICE, GUY. YOU WIN!";
    }else{
        cout << "You are very dumb. Please, die!";
    }
    return 0;
}