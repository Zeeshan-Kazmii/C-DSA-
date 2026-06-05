#include <iostream>
using namespace std;

int main() {
    // float marks;
    // cout  << "Enter your marks : ";
    // cin >> marks;

    // if (marks >= 33) {
    //     cout << "Congratulations! You have passed the exam." << endl;
    // } else {
    //     cout << "Sorry, you have failed the exam. Better luck next time!" << endl;
    // }

    // Practice Qs
    //print the largest of 2 numbers.
    // int a,b;
    // cout << "Enter a numbers : ";
    // cin >> a ;
    // cout << "Enter b numbers : ";
    // cin >> b;   
    // if (a > b) {
    //     cout << "The largest number is : " << a << endl;
    // } else {
    //     cout << "The largest number is : " << b << endl;
    // }

    //Print if a number is Odd or Even
    // int num;
    // cout << "Enter a number : ";
    // cin >> num;
    // if (num % 2 == 0) {
    //     cout << "The number is Even." << endl;
    // } else {
    //     cout << "The number is Odd." << endl;
    // }

    //if else if else  cheaking two conditions
    // int num;
    // cout << "Enter a number : ";
    // cin >> num;
    // if ( num >= 90) {
    //     cout << "Grade : A+" ;
    // } else if ( num >= 80 ) {
    //     cout << " Grade : B" ;
    // } else if ( num >= 70 ) {
    //     cout << " Grade : C" ;
    // } else if ( num >= 60 ) {
    //     cout << " Grade : D" ;
    // } else {
    //     cout << " Grade : F" ;
    // }

    //Create an income Tax calculator

//     double income,tax;
//     cout << " pleace enter your income : ";
//     cin >> income;
//     if ( income < (5) ) {
//         tax=0;
//         cout << "No tax applicable." << endl;
//     } else if ( income <= (10 ) ) {
//         tax = income * 0.2;
//         cout << "Tax applicable at 20%." << endl;
//     } else {
//         tax = income * 0.3;
//         cout << "Tax applicable at 30%." << endl;
//     }
// cout << "tax = " << (tax * 100000) << endl;

// Print the largest of 3 numbers.
    // int a,b,c;
    // cout << "Enter a numbers : " << endl;
    // cin >> a ;
    // cout << "Enter b numbers : " << endl;
    // cin >> b;
    // cout << "Enter c numbers : " << endl;
    // cin >> c;
    // if (a > b && a > c) {
    //     cout << "the largest number is a : " << a << endl;
    // } else if (b > a && b > c ) {
    //     cout << " the largest number is b : " << b << endl;
    // } else {
    //     cout << " the largest number is c : " << c << endl;
    // }

    //6 ternary operator
    // bool isAdult;
    // int age;
    // cout << "Enter your age : ";
    // cin >> age;
    // isAdult = age >= 18 ? true : false;
    // cout << isAdult;
    // int a=10, b=20, largest; 
    // largest =(a >= b) ? a:b;
    // cout << "largest is " << largest;

    //odd or even
    // int num;
    // bool n;
    // cout << "Enter a number : ";
    // cin >> num;
    // n = num % 2 == 0 ? true : false;
    // cout << n << endl;

//   7 Switch statement
// int day;
// cout << "Enter a number (1-7) to get the corresponding day of the week: ";
// cin >> day; 
//     switch (day) {
//         case 1: cout << "Monday";
//         break;
//         case 2: cout << "Tuesday";
//         break;
//         case 3: cout << "Wednesday";
//         break;
//         case 4: cout << "Thursday";
//         break;
//         case 5: cout << "Friday";
//         break;
//         case 6: cout << "Saturday";
//         break;
//         case 7: cout << "Sunday";
//         break;
//         default: cout<< "Invalid";
//     }

//8 make a calculater
// int a ,b;
// char op;
// cout << "Enter first number : ";
// cin >> a;  
// cout << "Enter second number : ";
// cin >> b;
// cout << "Enter an operator (+, -, *, /) : ";
// cin >> op;
// switch (op){
//     case '+': cout << "Result : " << a + b;
//     break;
//     case '-': cout << "Result : " << a - b;
//     break;
//     case '*': cout << "Result : " << a * b;
//     break;
//     case '/': 
//         if (b != 0) {
//             cout << "Result : " << a / b;
//         } else {
//             cout << "Error: Division by zero is not allowed.";
//         }
//         break;
//     default: cout << "Invalid operator.";
// }

// Conditional statement assignmenet
// Q1 get num form user and print whether and print whether it's a positive , negatuve or zero number;
// int num;
// cout << "Enter a number : ";
// cin >> num;
// if ( num > 0) {
//     cout << "  this is a positive number." << endl;
// } else if ( num == 0) {
//     cout << " this is a zero number." << endl;
// } else {
//     cout << " this is a negative number." << endl;
// }

// Q2 print whether that year is a leap year or not
// int year;
// cout << "Enter a year : ";
// cin >> year;
// if ( year % 4 ==0 || year % 400 == 0) {
//     cout << "This is a leap year." << endl;
// } else {
//     cout << "This is not a leap year." << endl;
// }

// what will be the value of x and y

//Q 3  any 3 digit number that is an Armstrong number or not 
// armstrong number is a number that is equal to the sum of the cubes of its digits. For example, 153 is an armstrong number because 1^3 + 5^3 + 3^3 = 153
int n;
cout << "Enter a three-digit number : ";
cin >> n;
int num =n;
int dig1= num % 10;
num = num / 10;
int dig2 = num % 10;
num = num / 10;
int dig3 = num % 10;
num = num / 10;
int sum = (dig1 * dig1 *dig1) + ( dig2 * dig2 * dig2) + (dig3 * dig3 *dig3);
if (sum == n) {
    cout << n << " is an Armstrong number." << endl;
} else {
    cout << n << " is not an Armstrong number." << endl;
}

    return 0;
}