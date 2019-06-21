#include "NodoArbol.h"
#include "Militar.h"
#include <vector>
using std::vector;
NodoArbol::NodoArbol()
{
}
NodoArbol::NodoArbol(Militar *pmilitar)
{
    this->militar = pmilitar;
}
Militar *NodoArbol::getMilitar()
{
    return militar;
}
void NodoArbol::setMilitar(Militar *pmilitar)
{
    militar = pmilitar;
}
vector<NodoArbol *> NodoArbol::getNodosHijos()
{
    return NodosHijos;
}
void NodoArbol::setNodosHijos(vector<NodoArbol *> pNodosHijos)
{
    NodosHijos = pNodosHijos;
}
void NodoArbol::Agregar(Militar* militar){
    NodosHijos.push_back(new NodoArbol(militar));
}