//
// Created by Daniel on 5/07/2019.
//

#include "Hoteles.h"
#include <iostream>
Hoteles::Hoteles(int _numero_de_estrellas, bool _Disponibilidad,int _cantidad_de_clientes) {
    _cantidad_de_clientes=cantdad_de_clientes;
    _numero_de_estrellas=numero_de_estrellas;
    _Disponibilidad=Disponibilidad;

}
int Hoteles::estrellas(int _numero_de_estrellas){
return _numero_de_estrellas;
}
void Hoteles::calificacion(){
    Cliente a(5);
    numero_de_estrellas=numero_de_estrellas + a.dar_valor();
}
bool Hoteles::disponibilidad(bool _disponibilidad) {
    if(_disponibilidad=true){
        std::cout<<"Disponible";
    }
    else {
        std::cout << "No disponible";
    }
}

