// Sanchez Lopez Jonathan   2AV4
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using std:: cout;
using std:: endl;
using std:: cin;

int Max(int a,int b);

int main ()
{
    int N1,N2,N3;
    cout<<"El programa que indica el numero Mayor"<<endl;
    cout <<"introduzca el primer valor:";
    cin  >>N1;
    cout<< endl;
    cout<<"Intoduzca el segundo valor:";
    cin  >>N2;
    cout<<"Intoduzca el tercer valor:";
    cin >>N3;
    cout<< endl;
    int max = Max(Max(N1,N2),N3);
    cout<<"El mayor es:"<<max;
    return 0;
}
int Max(int a, int b)
{
    int c;
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
