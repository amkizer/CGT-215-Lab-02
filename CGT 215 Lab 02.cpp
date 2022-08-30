#include <iostream>

using namespace std;

int main()
{
	float A;
	float B;
	float X;

	cout << "Greetings, I am Austin and I will solve the equation: " << endl;
	cout << "Ax + B = 0" << endl;
	cout << "For x" << endl << endl;
	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "Please enter a value for B: ";
	cin >> B;
	cout << endl;
	
	X = (-B / A);

	cout << "Solving " << A << "x+" << B << "=0 for x..." << endl << endl;
	cout << "The answer is:" << endl;
	cout << "x=" << X;
}