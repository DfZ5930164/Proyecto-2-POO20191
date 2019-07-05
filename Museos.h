//
// Created by Daniel on 5/07/2019.
//

#ifndef AGREGACION_MUSEOS_H
#define AGREGACION_MUSEOS_H
#include <iostream>
#include "Cliente.h"
#include <vector>
using namespace std;
class Museos {
private:
    int _calificacion;
    string exposicion_actual;
    vector<Cliente> clientes;
public:
    Museos(int,string);
    void calificacion();
    void exposicion_actual_();
};


#endif //AGREGACION_MUSEOS_H
