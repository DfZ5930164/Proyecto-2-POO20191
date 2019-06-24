#include <iostream>
#include <SFML/Graphics.hpp>
#include "Menu.h"
using namespace std;



int main() {



void tablero_ingles(int m,int n, int cont_separador_vertical1, int cont_separador_vertical2, int cont_separador_vertical3  ){
    int contador_para_ganar=1;

    int fila_origen=0;
    int columna_origen=0;
    int fila_destino=3;
    int columna_destino=3;
    char tablero[m][n];
    char cambio;
    int a=0;
    tablero[3][3]='+';

    while(contador_para_ganar<=32){

        cout<<" ";
        for(int i1=0;i1<2;i1++){

            if(i1==0){
                for(int p1=1;p1<=7;p1++){
                    cout<<" ";
                    cout<<p1<<"   ";
                }
                cout<<endl;
            }
            cout<<a+1<<" ";
            a++;
            for(int j1=0;j1<2;j1++){


                tablero[i1][j1]=' ';
                cout<<tablero[i1][j1];
                if(j1<5){
                    cout<<"    ";
                }
            }
            for(int j2=2;j2<5;j2++){
                if(tablero[i1][j2]=='+' ){

                    cout<<tablero[i1][j2];
                    if(j2<4){


                        cout<<"----";
                    }

                }
                else{


                    tablero[i1][j2]='O';
                    cout<<tablero[i1][j2];
                    if(j2<4){
                        cout<<"----";
                    }
                }
            }
            for(int j3=5;j3<n;j3++){
                tablero[i1][j3]=' ';
                cout<<tablero[i1][j3];
                if(j3<5){
                    cout<<"    ";
                }
            }
            cout<<endl;
            int j4=5;
            if(j4<n-1){
                cout<<"          ";
                while(cont_separador_vertical1>0){
                    cout<<"  |"<<"  ";
                    cont_separador_vertical1--;
                }
                cont_separador_vertical1=3;
                cout<<endl;
                j4++;
            }

        }
        for(int i5=2;i5<m-2;i5++){
            cout<<a+1<<" ";
            a++;

            for(int j5=0;j5<m;j5++){

                if(i5==3 && j5==3){


                    cout<<tablero[i5][j5];
                    cout<<"----";



                }
                else{
                    if(tablero[i5][j5]=='+'){
                        cout<<tablero[i5][j5];
                        if(j5<m-1){

                            cout<<"----";
                        }
                    }
                    else{

                        tablero[i5][j5]='O';
                        cout<<tablero[i5][j5];
                        if(j5<m-1){
                            cout<<"----";
                        }
                    }
                }
            }


            cout<<endl;
            if(i5<4){

                while(cont_separador_vertical2>0){
                    cout<<"  |"<<"  ";
                    cont_separador_vertical2--;
                }
                cout<<endl;
                cont_separador_vertical2=7;
            }

        }
        for(int i6=5;i6<m;i6++){

            int h=4;
            if(h<n-1){
                cout<<"          ";
                while(cont_separador_vertical3>0){
                    cout<<"  |"<<"  ";
                    cont_separador_vertical3--;
                }
                cont_separador_vertical3=3;
                cout<<endl;
                h++;
            }
            cout<<a+1<<" ";
            a++;
            for(int j7=0;j7<n-5;j7++){
                tablero[i6][j7]=' ';
                cout<<tablero[i6][j7];
                if(j7<m-1){
                    cout<<"    ";
                }
            }
            for(int j8=2;j8<=m-3;j8++){
                if(tablero[i6][j8]=='+'){
                    cout<<tablero[i6][j8];
                    if(j8<m-3){

                        cout<<"----";
                    }
                }
                else{

                    tablero[i6][j8]='O';
                    cout<<tablero[i6][j8];
                    if(j8<m-3){
                        cout<<"----";
                    }
                }
            }
            for(int j9=5;j9<n;j9++){
                tablero[i6][j9]=' ';
                cout<<tablero[i6][j9];
                if(j9<n-1-2){
                    cout<<"    ";
                }
            }
            cout<<endl;

        }
        a=0;

        cout<<"Ingrese la fila y columna origen: "<<endl;
        cin>>fila_origen;
        cin>>columna_origen;
        cout<<"ingrese la fila y columna destino: "<<endl;
        cin>>fila_destino;
        cin>>columna_destino;
        columna_origen=columna_origen-1;
        fila_origen=fila_origen-1;
        fila_destino=fila_destino-1;
        columna_destino=columna_destino-1;


        if(tablero[fila_origen][columna_origen]=='O'){
            if(tablero[fila_origen+1][columna_origen]=='O' || tablero[fila_origen-1][columna_origen]=='O' || tablero[fila_origen][columna_origen+1]=='O' || tablero[fila_origen][columna_origen-1]=='O'){
                if(tablero[fila_destino][columna_destino]=='+'&& tablero[fila_origen][columna_origen+2]=='+' && tablero[fila_origen][columna_origen+1]=='O' ){
                    tablero[fila_origen][columna_origen]='+';
                    tablero[fila_origen][columna_origen+1]='+';
                    tablero[fila_destino][columna_destino]='O';
                    contador_para_ganar++;

                }
                if(tablero[fila_destino][columna_destino]=='+'&& tablero[fila_origen][columna_origen-2]=='+'&& tablero[fila_origen][columna_origen-1]=='O'){
                    tablero[fila_origen][columna_origen]='+';
                    tablero[fila_origen][columna_origen-1]='+';
                    tablero[fila_destino][columna_destino]='O';
                    contador_para_ganar++;

                }
                if(tablero[fila_destino][columna_destino]=='+'&& tablero[fila_origen+2][columna_origen]=='+' && tablero[fila_origen+1][columna_origen]=='O'){
                    tablero[fila_origen][columna_origen]='+';
                    tablero[fila_origen+1][columna_origen]='+';
                    tablero[fila_destino][columna_destino]='O';
                    contador_para_ganar++;

                }
                if(tablero[fila_destino][columna_destino]=='+'&& tablero[fila_origen-2][columna_origen]=='+' && tablero[fila_origen-1][columna_origen]=='O'){
                    tablero[fila_origen][columna_origen]='+';
                    tablero[fila_origen-1][columna_origen]='+';
                    tablero[fila_destino][columna_destino]='O';
                    contador_para_ganar++;


                }
            }
            else{
                cout<<"movimiento invalido"<<endl;
            }


        }
        if(tablero[fila_origen][columna_origen]=='+'){
            tablero[fila_origen][columna_origen]=='+';
        }
        else{
            if(fila_destino==3 && columna_destino==3){
                cout<<"movimiento invalido "<<endl;

            }
            else{
                cout<<"movimiento invalido "<<endl;
            }



        }








    }
    cout<<endl;
    cout<<"Felicidades, Ganaste el juego"<<endl;
}
void tablero_aleman(int m,int n, int cont_separador_vertical1, int cont_separador_vertical2, int cont_separador_vertical3){
    int contador_para_ganar=1;
    int fila_origen=0;
    int columna_origen=0;
    int fila_destino=3;
    int columna_destino=3;
    char tablero[m][n];
    char cambio;
    int a=0;
    tablero[3][3]='+';

    while(contador_para_ganar<=32){

        cout<<" ";
        for(int i1=0;i1<3;i1++){

            if(i1==0){
                for(int p1=1;p1<=8;p1++){
                    cout<<" ";
                    cout<<p1<<"   ";
                }
                cout<<endl;
            }
            cout<<a+1<<" ";
            a++;
            for(int j1=0;j1<2;j1++){
                tablero[i1][j1]=' ';
                cout<<tablero[i1][j1];
                if(j1<6){
                    cout<<"    ";
                }
            }
            for(int j2=2;j2<6;j2++){
                if(tablero[i1][j2]=='+' ){

                    cout<<tablero[i1][j2];
                    if(j2<5){
                        cout<<"----";
                    }

                }
                else{
                    tablero[i1][j2]='O';
                    cout<<tablero[i1][j2];
                    if(j2<4){
                        cout<<"----";
                    }
                }
            }
            for(int j3=6;j3<n;j3++){
                tablero[i1][j3]=' ';
                cout<<tablero[i1][j3];
                if(j3<6){
                    cout<<"    ";
                }
            }
            cout<<endl;
            int j4=6;
            if(j4<n-1){
                cout<<"          ";
                while(cont_separador_vertical1>0){
                    cout<<"  |"<<"  ";
                    cont_separador_vertical1--;
                }
                cont_separador_vertical1=3;
                cout<<endl;
                j4++;
            }

        }
        for(int i5=3;i5<m-2;i5++){
            cout<<a+1<<" ";
            a++;

            for(int j5=0;j5<m;j5++){

                if(i5==3 && j5==3){

                    cout<<tablero[i5][j5];
                    cout<<"----";

                }
                else{
                    if(tablero[i5][j5]=='+'){
                        cout<<tablero[i5][j5];
                        if(j5<=m-1){

                            cout<<"----";
                        }
                    }
                    else{

                        tablero[i5][j5]='O';
                        cout<<tablero[i5][j5];
                        if(j5<=m-1){
                            cout<<"----";
                        }
                    }
                }
            }


            cout<<endl;
            if(i5<4){

                while(cont_separador_vertical2>0){
                    cout<<"  |  "<<"  ";
                    cont_separador_vertical2--;
                }
                cout<<endl;
                cont_separador_vertical2=7;
            }

        }
        for(int i6=5;i6<m;i6++){

            int h=4;
            if(h<n-1){
                cout<<"          ";
                while(cont_separador_vertical3>0){
                    cout<<"  |  "<<"  ";
                    cont_separador_vertical3--;
                }
                cont_separador_vertical3=3;
                cout<<endl;
                h++;
            }
            cout<<a+1<<" ";
            a++;
            for(int j7=0;j7<n-5;j7++){
                tablero[i6][j7]=' ';
                cout<<tablero[i6][j7];
                if(j7<m-1){
                    cout<<"    ";
                }
            }
            for(int j8=2;j8<=m-3;j8++){
                if(tablero[i6][j8]=='+'){
                    cout<<tablero[i6][j8];
                    if(j8<m-3){

                        cout<<"----";
                    }
                }
                else{

                    tablero[i6][j8]='O';
                    cout<<tablero[i6][j8];
                    if(j8<m-3){
                        cout<<"----";
                    }
                }
            }
            for(int j9=5;j9<n;j9++){
                tablero[i6][j9]=' ';
                cout<<tablero[i6][j9];
                if(j9<n-1-2){
                    cout<<"    ";
                }
            }
            cout<<endl;

        }
        a=0;

        cout<<"Ingrese la fila y columna origen: "<<endl;
        cin>>fila_origen;
        cin>>columna_origen;
        cout<<"ingrese la fila y columna destino: "<<endl;
        cin>>fila_destino;
        cin>>columna_destino;
        columna_origen=columna_origen-1;
        fila_origen=fila_origen-1;
        fila_destino=fila_destino-1;
        columna_destino=columna_destino-1;


        if(tablero[fila_origen][columna_origen]=='O'){
            if(tablero[fila_origen+1][columna_origen]=='O' || tablero[fila_origen-1][columna_origen]=='O' || tablero[fila_origen][columna_origen+1]=='O' || tablero[fila_origen][columna_origen-1]=='O'){
                if(tablero[fila_destino][columna_destino]=='+'&& tablero[fila_origen][columna_origen+2]=='+' && tablero[fila_origen][columna_origen+1]=='O' ){
                    tablero[fila_origen][columna_origen]='+';
                    tablero[fila_origen][columna_origen+1]='+';
                    tablero[fila_destino][columna_destino]='O';
                    contador_para_ganar++;

                }
                if(tablero[fila_destino][columna_destino]=='+'&& tablero[fila_origen][columna_origen-2]=='+'&& tablero[fila_origen][columna_origen-1]=='O'){
                    tablero[fila_origen][columna_origen]='+';
                    tablero[fila_origen][columna_origen-1]='+';
                    tablero[fila_destino][columna_destino]='O';
                    contador_para_ganar++;

                }
                if(tablero[fila_destino][columna_destino]=='+'&& tablero[fila_origen+2][columna_origen]=='+' && tablero[fila_origen+1][columna_origen]=='O'){
                    tablero[fila_origen][columna_origen]='+';
                    tablero[fila_origen+1][columna_origen]='+';
                    tablero[fila_destino][columna_destino]='O';
                    contador_para_ganar++;

                }
                if(tablero[fila_destino][columna_destino]=='+'&& tablero[fila_origen-2][columna_origen]=='+' && tablero[fila_origen-1][columna_origen]=='O'){
                    tablero[fila_origen][columna_origen]='+';
                    tablero[fila_origen-1][columna_origen]='+';
                    tablero[fila_destino][columna_destino]='O';
                    contador_para_ganar++;


                }
            }
            else{
                cout<<"movimiento invalido"<<endl;
            }


        }
        if(tablero[fila_origen][columna_origen]=='+'){
            tablero[fila_origen][columna_origen]=='+';
        }
        else{
            if(fila_destino==3 && columna_destino==3){
                cout<<"movimiento invalido "<<endl;
            }
            else{
                cout<<"movimiento invalido "<<endl;
            }

        }

    }
    cout<<endl;
    cout<<"Felicidades, Ganaste el juego"<<endl;
}


int main(){
       Menu menu;
    menu.ejecutar();
    int cont_separador_vertical1;
    int cont_separador_vertical2;
    int cont_separador_vertical3;
    int m;
    int n;
    char tablero[7][7];
    int tipo_de_juego;
    int fila_origen;
    int columna_origen;
    int fila_destino;
    int columna_destino;
    cout << "Menu - Juego Senku" << endl;
    cout << "----------------------------" << endl;
    cout << "1. Estilo frances" << endl;
    cout << "2. Estilo aleman" << endl;
    cout << "----------------------------" << endl;
    cout<<"selecciona el tipo de juego que desea jugar: ";
    cin>>tipo_de_juego;
    switch(tipo_de_juego){
        case 1:
        {
            tablero_ingles(7,7,3,7,3);
            break;
        }
        case 2:
        {
            tablero_aleman(8,8,4,8,4);
            break;
        }

    }

}


//int main()
//{
//    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
//    sf::CircleShape shape(100.f);
//    shape.setFillColor(sf::Color::Green);
//
//    while (window.isOpen())
//    {
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        window.clear();
//        window.draw(shape);
//        window.display();
//    }
//
//    return 0;
//}
