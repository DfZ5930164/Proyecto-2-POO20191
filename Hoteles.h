//
// Created by Daniel on 5/07/2019.
//

#ifndef AGREGACION_HOTELES_H
#define AGREGACION_HOTELES_H
#include "Objeto.h"
#include "Cliente.h"
#include <vector>
class Hoteles : private  Objeto   {
    private:
    int numero_de_estrellas;
    bool Disponibilidad;
    int cantdad_de_clientes;
    vector<Cliente> clientes;
public:
    Hoteles(int,bool,int);
    int estrellas(int);
    void calificacion();
    bool disponibilidad(bool);


};


#endif //AGREGACION_HOTELES_H
