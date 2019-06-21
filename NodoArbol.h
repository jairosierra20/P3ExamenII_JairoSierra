#ifndef NODOARBOL_H
#define NODOARBOL_H
#include <string>
using std::string;
#include "Militar.h"
#include <vector>
using std::vector;
class NodoArbol
{
private:
    Militar *militar;
    vector<NodoArbol *> NodosHijos;

public:
    NodoArbol();
    NodoArbol(Militar *);
    Militar *getMilitar();
    void setMilitar(Militar *);
    vector<NodoArbol *> getNodosHijos();
    void setNodosHijos(vector<NodoArbol *>);
    void Agregar(Militar *);
};
#endif