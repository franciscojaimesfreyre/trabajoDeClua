#include <iostream>
#include "Cliente.cpp"
#include "Servicio.h"
using namespace std;

int main() {
    Servicio servicio;
    Cliente cliente ;
    string s;
    int n;
    ifstream entra("clientes.txt");
    EstadoConsumo* consumosCliente;
    while(getline(entra,s)){
        istringstream iss(s);
        iss>>cliente;
        int ultimo = servicio.insertarCliente(cliente);

        cout<<"Cliente: "<<servicio.getListaClientes()[ultimo]<<endl;

        consumosCliente = servicio.consumosCliente(servicio.getListaClientes()[ultimo].getNumeroCliente());



    }



    return 0;
}