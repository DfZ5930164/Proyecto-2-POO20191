//
// Created by Daniel on 5/07/2019.
//

#include "Cliente.h"
#include "Hoteles.h"
#include <iostream>
Cliente::Cliente(int _calificacion) {
    calificacion=_calificacion;

}
int Cliente::dar_valor() {
    return calificacion;
}