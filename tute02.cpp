/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>

using namespace std;

int main ()//start of main
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   
   cout<<"Enter Employee Type : ";//getting employee type
   cin>> etype ;
   
   cout<<"Enter Salary  : ";//getting the salary
   cin>> salary;
   
   cout<<"Enter OtHrs : ";//getting the overtime hours
   cin>> otHrs; 
   
   switch (etype) {
      case 1 :
          otRate = 1000;//for type 1 employee
          break;
      case 2 :
          otRate = 1500;//for type 2 employee
          break;
      default :
          otRate = 1700;//for type 3 employee
          break;
   }


   netSalary = salary + otHrs* otRate;//calculating and adding overtime amount to base salary
   cout<<"Net Salary is "<< netSalary<<"\n"; //displaying final salary
}
