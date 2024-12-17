#include <iostream>
using namespace std;

int main(){
    int num;
    int guess; 
    int tries;
    
    cout << "-----------------------------------------" << '\n'; 
    cout << "||-------||-||GUESS GAME ++||-||-------||" << '\n'; 
    cout << "-----------------------------------------" << '\n';  

    srand(time(NULL));
    num = (rand() % 100) + 1;

    do {
        cout << "Enter a guess between (0 - 100): ";
        cin >> guess; 
        tries ++;

        if(guess > num){
            cout << "Too high\n";
        } else if (guess < num) {
            cout << "Too low\n";
        } else {
            cout << "Correct! # of tries: " << tries << '\n';
        }

    } while (guess != num);
    cout << "-----------------------------------------" << '\n';   
}