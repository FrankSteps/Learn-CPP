#include <iostream>
using namespace std;

int main() {
    int initialv;
    int lastv; 
    int somatory = 0;

    cout << "Initial value: "; cin >> initialv;
    cout << "Last value: "; cin >> lastv;
    
    for (int i = initialv; i <= lastv; i++) {
        somatory += i;
    }

    cout << "Sum is: " << somatory << '\n';
    return 0;
}
