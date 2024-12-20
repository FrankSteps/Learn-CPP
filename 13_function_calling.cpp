#include <iostream>
using namespace std; 

void hello(){
    cout << "Hello, world\n";
}

int main(){
    for(int i = 1; i <= 5; i++){
        hello();
    }
    return 0;
}