#include "Militar.h"
#include "NodoArbol.h"
#include "ncurses.h"
#include <vector>
using std::vector;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <fstream>
#include <stdlib.h>
using namespace std;
void AgregarMilitar(NodoArbol *);
void PreOrden(NodoArbol *, string, vector<NodoArbol *> &);
void Visualizar(NodoArbol *);
void PreOrden2(NodoArbol *, vector<string> &);
void Archivo(NodoArbol *);
int main()
{
    int opcion = 0;
    Militar *general = new Militar("Yagabarish Skrobernov", "M_17", "72", "General");
    NodoArbol *Nodo = new NodoArbol(general);
    while (opcion != 3)
    {
        cout << "Menu" << endl
             << "1. Agregar Militar" << endl;
        cout << "2. Visualizar Ejercicio" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion: " << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            AgregarMilitar(Nodo);
            break;
        case 2:
            Archivo(Nodo);
            break;
        case 3:
            cout << "El pograma se cerrara" << endl;
            break;
        default:
            cout << "La opcion es incorrecta" << endl;
            break;
        }
    }
    return 0;
}
void AgregarMilitar(NodoArbol *Nodo)
{
    string rango_MilitarActual = "";
    int opcion = 0;
    string nombre = "", codigo = "", edad = "", rango = "";
    int pos = 0;
    vector<NodoArbol *> MilitarTipoActual;
    while (opcion != 8)
    {
        cout << "Menu de Rangos" << endl;
        cout << "1. Coronel" << endl;
        cout << "2. Mayor" << endl;
        cout << "3. Capitan" << endl;
        cout << "4. Teniente" << endl;
        cout << "5. Sargento" << endl;
        cout << "6. Cabo" << endl;
        cout << "7. Soldado" << endl;
        cout << "8. Salir" << endl;
        cout << "Ingrese una opcion: " << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "Ingrese el nombre: " << endl;
            cin >> nombre;
            cout << "Ingrese el codigo: " << endl;
            cin >> codigo;
            cout << "Ingrese la edad: " << endl;
            cin >> edad;
            rango = "Coronel";
            Nodo->Agregar(new Militar(nombre, codigo, edad, rango));
            //MilitarTipoActual.push_back(new NodoArbol(new Militar(nombre, codigo, edad, rango)));

            break;
        case 2:
            PreOrden(Nodo, "Coronel", MilitarTipoActual);
            for (int i = 0; i < MilitarTipoActual.size(); i++)
            {
                cout << i << "- " << MilitarTipoActual[i]->getMilitar()->getNombre() << " " << MilitarTipoActual[i]->getMilitar()->getRango() << endl;
            }

            cout << "Ingrese la posicion del coronel: " << endl;
            cin >> pos;
            cout << "Ingrese el nombre: " << endl;
            cin >> nombre;
            cout << "Ingrese el codigo: " << endl;
            cin >> codigo;
            cout << "Ingrese la edad: " << endl;
            cin >> edad;
            rango = "Mayor";
            //Nodo->getNodosHijos()[pos]->Agregar(new Militar(nombre, codigo, edad, rango));
            MilitarTipoActual[pos]->Agregar(new Militar(nombre, codigo, edad, rango));
            break;
        case 3:
            MilitarTipoActual.clear();
            PreOrden(Nodo, "Mayor", MilitarTipoActual);
            for (int i = 0; i < MilitarTipoActual.size(); i++)
            {
                cout << i << "- " << MilitarTipoActual[i]->getMilitar()->getNombre() << " " << MilitarTipoActual[i]->getMilitar()->getRango() << endl;
            }

            cout << "Ingrese la posicion del mayor: " << endl;
            cin >> pos;
            cout << "Ingrese el nombre: " << endl;
            cin >> nombre;
            cout << "Ingrese el codigo: " << endl;
            cin >> codigo;
            cout << "Ingrese la edad: " << endl;
            cin >> edad;
            rango = "Capitan";
            MilitarTipoActual[pos]->Agregar(new Militar(nombre, codigo, edad, rango));
            break;
        case 4:
            MilitarTipoActual.clear();
            PreOrden(Nodo, "Capitan", MilitarTipoActual);
            for (int i = 0; i < MilitarTipoActual.size(); i++)
            {
                cout << i << "- " << MilitarTipoActual[i]->getMilitar()->getNombre() << " " << MilitarTipoActual[i]->getMilitar()->getRango() << endl;
            }

            cout << "Ingrese la posicion del capitan: " << endl;
            cin >> pos;
            cout << "Ingrese el nombre: " << endl;
            cin >> nombre;
            cout << "Ingrese el codigo: " << endl;
            cin >> codigo;
            cout << "Ingrese la edad: " << endl;
            cin >> edad;
            rango = "Teniente";
            MilitarTipoActual[pos]->Agregar(new Militar(nombre, codigo, edad, rango));
            break;
        case 5:
            MilitarTipoActual.clear();
            PreOrden(Nodo, "Teniente", MilitarTipoActual);
            for (int i = 0; i < MilitarTipoActual.size(); i++)
            {
                cout << i << "- " << MilitarTipoActual[i]->getMilitar()->getNombre() << " " << MilitarTipoActual[i]->getMilitar()->getRango() << endl;
            }

            cout << "Ingrese la posicion del teniente: " << endl;
            cin >> pos;
            cout << "Ingrese el nombre: " << endl;
            cin >> nombre;
            cout << "Ingrese el codigo: " << endl;
            cin >> codigo;
            cout << "Ingrese la edad: " << endl;
            cin >> edad;
            rango = "Sargento";
            MilitarTipoActual[pos]->Agregar(new Militar(nombre, codigo, edad, rango));
            break;
        case 6:
            MilitarTipoActual.clear();
            PreOrden(Nodo, "Sargento", MilitarTipoActual);
            for (int i = 0; i < MilitarTipoActual.size(); i++)
            {
                cout << i << "- " << MilitarTipoActual[i]->getMilitar()->getNombre() << " " << MilitarTipoActual[i]->getMilitar()->getRango() << endl;
            }

            cout << "Ingrese la posicion del sargento: " << endl;
            cin >> pos;
            cout << "Ingrese el nombre: " << endl;
            cin >> nombre;
            cout << "Ingrese el codigo: " << endl;
            cin >> codigo;
            cout << "Ingrese la edad: " << endl;
            cin >> edad;
            rango = "Cabo";
            MilitarTipoActual[pos]->Agregar(new Militar(nombre, codigo, edad, rango));
            break;
        case 7:
            MilitarTipoActual.clear();
            PreOrden(Nodo, "Cabo", MilitarTipoActual);
            for (int i = 0; i < MilitarTipoActual.size(); i++)
            {
                cout << i << "- " << MilitarTipoActual[i]->getMilitar()->getNombre() << " " << MilitarTipoActual[i]->getMilitar()->getRango() << endl;
            }

            cout << "Ingrese la posicion del cabo: " << endl;
            cin >> pos;
            cout << "Ingrese el nombre: " << endl;
            cin >> nombre;
            cout << "Ingrese el codigo: " << endl;
            cin >> codigo;
            cout << "Ingrese la edad: " << endl;
            cin >> edad;
            rango = "Soldado";
            MilitarTipoActual[pos]->Agregar(new Militar(nombre, codigo, edad, rango));
        case 8:
            cout << "El programa se cerrara" << endl;
            break;
        default:
            cout << "La opcion es incorrecta" << endl;
            break;
        }
    }
}
void PreOrden(NodoArbol *nodo, string rango, vector<NodoArbol *> &MilitarTipoActual)
{
    if (nodo->getMilitar()->getRango() == rango)
    {
        MilitarTipoActual.push_back(nodo);
    }
    for (int i = 0; i < nodo->getNodosHijos().size(); i++)
    {
        PreOrden(nodo->getNodosHijos()[i], rango, MilitarTipoActual);
    }
}
void PreOrden2(NodoArbol *nodo, vector<string> &listado)
{
    cout << nodo->getMilitar()->getNombre() << "-" << nodo->getMilitar()->getRango() << endl;


    listado.push_back(nodo->getMilitar()->getNombre() + "-" + nodo->getMilitar()->getRango());
    for (int i = 0; i < nodo->getNodosHijos().size(); i++)
    {
        if (nodo->getMilitar()->getRango() == "Coronel")
        {
            cout << "  ";
        }
        else if (nodo->getMilitar()->getRango() == "Mayor")
        {
            cout << "   ";
        }
        else if (nodo->getMilitar()->getRango() == "Capitan")
        {
            cout << "    ";
        }
        else if (nodo->getMilitar()->getRango() == "Teniente")
        {
            cout << "    ";
        }
        else if (nodo->getMilitar()->getRango() == "Sargento")
        {
            cout << "     ";
        }
        else if (nodo->getMilitar()->getRango() == "Cabo")
        {
            cout << "      ";
        }
        else if (nodo->getMilitar()->getRango() == "Soldado")
        {
            cout << "       ";
        }
        PreOrden2(nodo->getNodosHijos()[i], listado);
    }
}
void Archivo(NodoArbol *nodo)
{
    int c;
    vector<string> listado;
    string nombre = "";
    cout << "Ingrese el nombre del archivo: " << endl;
    cin >> nombre;
    ofstream file;
    file.open("Listados/" + nombre + ".txt", ios::out);
    PreOrden2(nodo, listado);
    for (int i = 0; i < listado.size(); ++i)
    {
        file << listado[i] << endl;
    }
    cout << "Se creo exitosamente" << endl;
    file.close();
    /*initscr();
    for (int i = 0; i < listado.size(); ++i)
    {
        char lista[100] =listado[i];
        printw(lista);
        refresh();
    }
    noecho();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_BLACK, COLOR_WHITE);
    init_pair(3, COLOR_BLUE, COLOR_RED);
    init_pair(4, COLOR_BLUE, COLOR_WHITE);
    while ((c = getch()) != 120)
    {
        if ((c = getch()) == 110)
        {
            attrset(COLOR_PAIR(1));
            bkgd(COLOR_PAIR(1));
        }
        if ((c = getch()) == 105)
        {
            attrset(COLOR_PAIR(2));
            bkgd(COLOR_PAIR(2));
        }
        if ((c = getch()) == 99)
        {
            attrset(COLOR_PAIR(3));
            bkgd(COLOR_PAIR(3));
        }
        if ((c = getch()) == 108)
        {
            attrset(COLOR_PAIR(4));
            bkgd(COLOR_PAIR(4));
        }
        refresh();
    }
    endwin();*/
}
