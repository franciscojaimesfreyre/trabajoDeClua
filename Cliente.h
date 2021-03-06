//
// Created by MarianoFacundo on 01/06/2016.
//

#ifndef TRABAJODECLUA_CLIENTE_H
#define TRABAJODECLUA_CLIENTE_H

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


class Cliente {

private:
    int numeroCliente;
    string nombreCliente;


public:
    Cliente(int numeroCliente, string nombreCliente) :  numeroCliente(numeroCliente),  nombreCliente(nombreCliente) { }


    Cliente(): numeroCliente(0), nombreCliente(""){};



    int getNumeroCliente() const {
        return numeroCliente;
    }

    void setNumeroCliente(int numeroCliente) {
        Cliente::numeroCliente = numeroCliente;
    }

    string getNombreCliente() const {
        return nombreCliente;
    }

    void setNombreCliente(string nombreCliente) {
        Cliente::nombreCliente = nombreCliente;
    }


    friend ostream& operator<<(ostream& os, Cliente p);
    friend istream& operator>>(istream& is, Cliente& p);






};


inline ostream& operator<<(ostream& os, Cliente cliente){
    return os<<"("<<cliente.getNumeroCliente()<<": "<<cliente.getNombreCliente()<<")";
}

inline istream& operator>>(istream& is, Cliente& cliente){
    return is>>cliente.numeroCliente>>cliente.nombreCliente;
}






#endif //TRABAJODECLUA_CLIENTE_H
