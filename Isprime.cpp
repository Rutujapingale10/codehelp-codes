/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
bool Isprime(int num)
{
  
  for(int i =2 ;i <num;i++)
  {
      if(num %i == 0 )
      {
          return false;
      }
  }
  
  return true;
  
}



int main()
{
    printf("Hello World");
    bool res = Isprime(8);
    cout<<res;

    return 0;
}
