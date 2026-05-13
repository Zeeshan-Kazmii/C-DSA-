#include <iostream>
using namespace std;

int main(){
    // cout <<"****\n***\n**\n*\n";

    // int a;
    // cout <<a;

    // int age=20;
    // char grade='A';
    // float marks=95.5;
    // double largeNumber=234.234;
    // bool istrue=true;
    // cout << "size of int: " << sizeof(age) << " bytes" << endl;
    // cout << "size of char: " << sizeof(grade) << " bytes" << endl;
    // cout << "size of float: " << sizeof(marks) << " bytes" << endl;
    // cout << "size of double: " << sizeof(largeNumber) << " bytes"   << endl;
    // cout << "size of bool: " << sizeof(istrue) << " bytes"  << endl;

    //sum of two numbers
    // int a,b;
    // cout<<"Enter a :"<<endl;
    // cin>>a;
    // cout<<"Enter b :"<<endl;
    // cin>>b;
    // int sum = a + b ;
    // int product = a * b ;
    // int difference = a - b ;
    // cout << "Sum of a and b is : "<< sum <<endl;
    // cout << "Product of a and b is : "<< product <<endl;
    // cout << "Difference of a and b is : "<< difference <<endl;


    //Question 1 : In a program, input the side of a square. You have to output the area of
    cout<<"Enter the side of square : "<<endl;
    int n;
    cin>>n;
    int area = n * n ;
    cout << "Area of square is : "<< area << endl;

    //Question 2 : Enter cost of 3 items from the user (using float data type) - a pencil, a
    float pencil, pen, eraser,total,gst;
    cout<<"Enter Pencil price :\n ";
    cin>>pencil;
    cout<<"Enter Pen price :\n ";
    cin>>pen;
    cout<<"Enter Eraser price :\n ";
    cin>>eraser;
    total = pencil + pen + eraser ;
    cout<<"Total price of pencil, pen and eraser is : "<< total << endl;
    gst = total * 0.18 ;
    cout<<"GST on total price is : "<< gst << endl;

    // Question 3 : Build a Simple Interest Calculator.
    float principal, rate, time;
    cout<<"Enter Principal amount :\n ";
    cin>>principal;
    cout<<"Enter Rate of interest :\n ";
    cin>>rate;
    cout<<"Enter Time in years :\n ";
    cin>>time;
    float simpleInterest = (principal * rate * time) / 100 ;
    cout<<"Simple Interest is : "<< simpleInterest << endl;

    //Question 4 : Write a program to calculate the area of a circle.
    float r,pi=3.14;
    cout<<"Enter the radius of circle :\n ";
    cin>>r;
    float areaOfCircle = pi * r * r ;
    cout<<"Area of circle is : "<< areaOfCircle << endl;
    
    return 0;
}