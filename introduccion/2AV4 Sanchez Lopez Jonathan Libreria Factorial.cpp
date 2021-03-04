// Sanchez Lopez Jonathan   2AV4
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int factorial(int a);

int main()
{
    int resultado;
    int N1;
    cout <<endl;
    cout <<"Programa para sacar el factorial de un valor";
    cout <<endl;
    cout <<"Introdusca un valor:";
    cin >>N1;
    int fact = factorial(N1);
    cout <<endl;
    cout <<"El factorial de ";
    cout <<N1;
    cout <<" es: ";
    cout <<fact;
    cout <<endl;
    return 0;
}

int factorial(int a)
{
    int i;
    int resultado = 1;
    for (i = 1; i <= a; i++)
    {
        resultado *= i;
    }
    return resultado;
}
