// Sanchez Lopez Jonathan   2AV4
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using std:: cout;
using std:: endl;
using std:: cin;

void Max (int a,int b);

int main ()
{
    int N1,N2;
    cout<< endl;
    cout <<"Programa indica el mayor valor:";
    cout<< endl;
    cout <<"\Intoduzca el primer valor:";
    cin  >>N1;
    cout<< endl;
    cout<<"Intoduzca el segundo valor:";
    cin  >>N2;
    cout<< endl;
    Max (N1,N2);
    return 0;
}
void Max (int a, int b)
{
   if (a>b)
   {
       cout<<endl<<a<<"\nes mayor"<<endl;
   }
   else if (a<b)
   {
       cout<<endl<<b<<"\nes mayor"<<endl;
   }
   else
   {
       cout<<"\nerror"<<endl;
   }
}
