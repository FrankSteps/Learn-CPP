#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(0)); 
    int randnum = rand() % 5 + 1;

    switch(randnum){
        case 1: cout << "you win a wine\n";
            break; 
        case 2: cout << "you win a cheese\n";
            break; 
        case 3: cout << "you win a chocolate\n";
            break; 
        case 4: cout << "you win a chayote\n";
            break; 
        case 5: cout << "you win a 1$\n";
            break; 
        case 6: cout << "you win a kiss\n";
            break; 
        case 7: cout << "you win a headshot <3\n";
            break; 
    }

    return 0;
}