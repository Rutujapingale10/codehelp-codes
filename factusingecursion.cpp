/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int fact(int num)
{
    if(num == 1 || num == 0)
    {
        return 1;
    }
    
    return num * fact(num -1);
}



int main()
{
    printf("Hello World");
    int res = fact(-6);
    cout<<res;

    return 0;
}
