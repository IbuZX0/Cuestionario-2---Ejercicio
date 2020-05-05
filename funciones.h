#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
using namespace std;

void imprimil(string str)
{
    cout <<str;
}
bool booleano(char opc)
{
    if (opc =='y') return true;
    else return false;
    }

bool confirmar(int inumtab)
{
    if (inumtab >0) return true;
    else return false;
    }

#endif // FUNCIONES_H_INCLUDED
