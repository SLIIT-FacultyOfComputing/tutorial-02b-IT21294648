/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}

//function definition
long Factorial(int no)//this func outputs the factorial of a number
{
    long fac;

    fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }
	
	return fac;//returning the factorial number 
}

long nCr(int n, int r)///this func outputs the value for the equation n!/r!(n-r)!
{
	long finalValue;
	
	finalValue= Factorial(n)/(Factorial(r)*(Factorial(n-r)));//calculating the answer through factorial function
	
	return finalValue;//returning answer
}