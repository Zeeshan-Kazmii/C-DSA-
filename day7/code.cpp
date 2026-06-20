#include <iostream>
using namespace std;

// 2. forward declaration
// void sayHello();
// int main(){
//     sayHello();
//     return 0;
// }

//  void sayHello (){
//     cout << "Hello :)\n";
//  }

//product of two numbers
// int product (int a, int b){
//     int pro = a * b;
//     return pro;
// }

//even or odd
// void EOR (int a=4){
//     if(a % 2 == 0){
//         cout << "it is even number";
//     } else {
//         cout << "this is odd number";
//     }
// }

// int Factorial (int f){
//     int fact = 1;
//     for(int i=1; i<=f; i++){
//         fact *= i;
//     }
//     cout << "factorial of the number " << f <<" is " <<fact <<endl;
//     return fact;
// }

// bool prime (int n){
//     if(n==1){
//             return 0;
//         }
//     for( int i=2; i*i <=n; i++){
//         if(n%i ==0){
//             return false;
//         }
//     }
//     return true;
// }

// int factorial (int n){
//     int fact = 1 ;
//     for ( int i =1; i <=n; i++){
//         fact *=i;
//     }
//     return fact;
// }

// int bio (int n, int r){
//     int val1 = factorial(n);
//     int val2 = factorial(r);
//     int val3 = factorial(n-r);

//     int coff = val1 / (val2 * val3);
//     return coff;
// }

// int palindrome (int n){
//     int res=0;
//     while(n>0){
//         int lastdig = n % 10;
//         res = res*10 + lastdig;
//         n = n / 10;
//     }
//     return res;
// }
// bool ispalindrome(int n){
//     int res = palindrome(n);
//     return n == res;
// }    

// int sum(int n){
//     int res =0;
//     while(n>0){
//         int lastDigit = n % 10;
//         res= res+ lastDigit;
//         n = n/10;
//     }
//     return res;
// }
// int parameters(int a, int b){
//     int output= (a*a + b*b + 2*(a*b));
//     return output;
// }

// int largestNumber(int a, int b, int c){
//     if(a>b && a>c){
//         return a;
//     } else if( b>a && b>c){
//         return b;
//     } else {
//         return c;
//     }

// }

char getNextChar(char ch ){
    if(ch == 'z'){
        return 'a';
    }else {
    return ch +1;
    }
}

int main(){
    // int n;
    // cout << "enter a number : ";
    // cin >> n;
    // EOR(n);
    // Factorial(n);
    // cout << prime(n) << endl;
    // cout << bio(3,2);
// cout <<ispalindrome(12321);
//  cout << sum(123);
//  cout << parameters(2,2);
//   cout << largestNumber(2,4,6);
cout<< getNextChar('k');
    return 0;
}