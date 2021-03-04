// Sanchez Lopez Jonathan   2AV4
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using std:: cout;
using std:: endl;
using std:: cin;

void Suma (int a,int b);

int main ()
{
    int N1,N2;
    cout<< endl;
    cout <<"Programa que realiza la operacion suma:";
    cout<< endl;
    cout <<"\Intoduzca el primer valor:";
    cin  >>N1;
    cout<< endl;
    cout<<"Intoduzca el segundo valor:";
    cin  >>N2;
    cout<< endl;
    Suma (N1,N2);
    return 0;
}
void Suma (int a, int b)
{
    int c=a+b;
    cout<<"El resultado de";
    cout<<a;
    cout<< "+";
    cout<<b;
    cout<<"es:";
    cout<<c;
}
