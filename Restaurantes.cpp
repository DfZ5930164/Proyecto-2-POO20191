//
// Created by Daniel on 4/07/2019.
//

#include "Restaurantes.h"
#include <ctime>
#include <cmath>
Restaurantes::Restaurantes(string _especialidad) {
    especialidad_del_dia=_especialidad;

}
void Restaurantes::actualizar() {
    int aleatorio=0;
    srand(time(NULL));
    aleatorio=rand()%7;//Seran 7 especiales por los 7 dias de la semana
    switch(aleatorio){
        case 1:
        especialidad_del_dia='E1';
        break;
        case 2:
            especialidad_del_dia='E2';
            break;
        case 3:
            especialidad_del_dia='E3';
            break;
        case 4:
            especialidad_del_dia='E4';
            break;
        case 5:
            especialidad_del_dia='E5';
            break;
        case 6:
            especialidad_del_dia='E6';
            break;
        case 7:
            especialidad_del_dia='E7';
            break;
    }

}
string Restaurantes::mostrar_datos(){
    return especialidad_del_dia;
}
void Restaurantes::calificacion() {
    Cliente a(5);
    a.dar_valor();
}
