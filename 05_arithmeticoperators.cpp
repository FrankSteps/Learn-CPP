#include <iostream>
using namespace std;

int main(){
    double students = 20; 

    //students = students + 2; //cout << 22
    //students +=2;            //cout << 22
    //students++;              //cout << 21
  
    //students = students - 2; //cout << 18
    //students -=2;            //cout << 18
    //students--;              //cout << 19

    //students = students * 2; //cout << 40
    //students *=2;            //cout << 40

    //students = students / 3; //cout << 6.66667
      students /=3;            //cout << 6.66667

    //double students1 = 6 - 5 + 4 * 3/2; //cout << 7 
    double students1 = 6 - (5 + 4) * 3/2; //cout << -7

    cout << students << '\n';
    cout << students1 << '\n';
    return 0;
}