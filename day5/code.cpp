#include <iostream>
using namespace std;

int main() {
    // for loop
    //1. "apna college" print 5 times
    // int num;
    // for( num =1; num <=5; num++){
    //     cout << num <<"Apna college" << endl;
    // }

    //2. print 1 to n
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // for (int i=0; i<n; i++){
    //     cout << i+1 << " ";
    // }
    // cout << endl;

    //3. print sum of natural numbers
    // int n;
    // cout << "Enter the value of n : ";
    // cin >> n;
    // int sum =0;
    // for (int i=1; i<=n; i++){
    //     sum = sum + i;
    //     cout << "Sum after adding " << i << " is: " << sum << endl;
    // }
    // cout << "Sum of natural numbers from 1 to " << n << " is: " << sum << endl;

    //4. while loop
    // int count = 0;
    // while (count < 5){
    //     cout << "count is : " << count << endl;
    //     count++;
    // }

    //5. squre pattern using for loop
    // int n;
    // cout << "Enter the value of n:";
    // cin >> n;
    // for (int i=0; i<n;i++){
    //     for(int j=0; j<n; j++){
    //         cout << " * ";
    //     }
    //     cout<< endl;
    // }

    //6.
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // for (int i=n; i>0; i--) {
    //     cout << i << " ";
    // }

    //7. 
    // int num=10829;
    // int sum = 0;
    // if (num % 2 != 0){
    //     cout << "Number is odd" << endl;
    // }
    // while (num > 0) {
    //     int lastdigit = num %10;
    //     sum += lastdigit;
    //     num /= 10;
    // }
    // cout << "Sum of digits is: " << sum << endl;

    //8. print num ber in reverse order
    int n =10829;
    int lastdigit, res =0;

    while ( n > 0){
        lastdigit =n%10;
        res = res * 10 + lastdigit; 
        cout << lastdigit << " "<< endl;
        cout << res << " "<< endl ;
        n = n/10;
    }

    return 0;
}