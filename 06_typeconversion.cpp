#include <iostream>
using namespace std;

int main(){
    double pinumber = (int)3.14;
    char x = 101;    

    cout << pinumber << '\n';
    cout << x << '\n';
    cout << (char)101 << '\n';


    int correct = 8;
    int questions = 10;

    //double score = correct/questions * 100; cout << "0%"
    double score = correct/(double)questions * 100;

    cout << score << "%" << '\n';

    return 0;
}