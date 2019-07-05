//
// Created by Daniel on 4/07/2019.
//

#ifndef AGREGACION_RESTAURANTES_H
#define AGREGACION_RESTAURANTES_H
#include "Objeto.h"
#include <vector>
#include "Cliente.h"
class Restaurantes :private Objeto {
private:
    int calificacion_del_consumidor;
    string tipo_de_comida;
    string especialidad_del_dia;
    vector<Cliente> Clientes;
public:
    Restaurantes(string especialidad);
    void actualizar();
    string mostrar_datos();
    void calificacion();
};


#endif //AGREGACION_RESTAURANTES_H
