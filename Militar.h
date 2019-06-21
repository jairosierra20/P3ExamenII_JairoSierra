#ifndef MILITAR_H
#define MILITAR_H
#include <string>
using std::string;
class Militar
{
public:
    string nombre;
    string codigo;
    string edad;
    string rango;
    Militar();
    Militar(string,string,string,string);
    string getNombre();
    void setNombre(string);
    string getCodigo();
    void setCodigo(string);
    string getEdad();
    void setEdad(string);
    string getRango();
    void setRango(string);
};
#endif