#include <iostream>
using namespace std;
int main()
{
float A;
float B;
float X;

cout << "Hello, my name is Kaili Shan and I am going to solve the equation: \n";
cout << "Ax + B = 0 \n";
cout << "For x \n";

cout << "Please enter a value for A: ";
cin >> A ;
cout << A << endl;
cout << "Please enter a value for B: ";
cin >> B;
cout << B << endl;
cout << "A=" << A << endl;

cout << "Solving " << A << "x" << "+" << "B" << "0 for x" << endl;
cout << "The answer is... \n";

X = ( B * (-1) ) / A;
cout << "x=" << X << endl;
}