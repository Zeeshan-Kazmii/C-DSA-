#include <iostream>
using namespace std;

int main(){
    // cout << (10/3) <<endl;
    // // 10/3 = 3.33333... but since both 10 and 3 are integers, the result is also an integer, which is 3.
    // cout << (10/3.0) <<endl;
    // //explicitly 
    // cout << (bool)3+2<<endl;
    // cout << (int)('A' + 1) <<endl;

    //Q1
    // int x =2, y=5;
    // int exp1 = (x * y / x);
    // int exp2 = (x * (y / x));
    // cout << exp1 <<",";
    // cout << exp2 << "\n";

    //Q2
    int x =10, y=5;
    int exp1 = (y * (x / y + x / y));
    int exp2 = (y * x / y + y * x /y);
    cout << exp1 <<" ";
    cout << exp2 << "\n";
    return 0;
}