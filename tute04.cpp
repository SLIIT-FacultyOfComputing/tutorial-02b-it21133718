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

long Factorial(int no)
{
   long fact;

   fact=1;
   for(int p=no;p>=1;p--)
   {
     fact=fact*p;
   }

  return fact;
}

 long nCr(int n,int r)
 {

  long Ncr,up_,dwn1,dwn2;

  up_=Factorial(n);
  dwn1=Factorial(r);
  dwn2=Factorial((n-r));
  
 Ncr=up_/ (dwn1*dwn2);


   return Ncr;
 }


