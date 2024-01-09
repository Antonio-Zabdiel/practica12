#include<stdio.h>
#include<string.h>
#include <stdlib.h>

typedef struc players{
    int id;
    int numero;
    char nombre[50];
    char posicion[50];
} PLAYER;

PLAYER jugadores_lista[5];

void rellenar_elementos(int i, int num, char nom, char pos){
    jugadores_lista[i].id = i;
    jugadores_lista[i].numero = num;
    strcpy(jugadores_lista[i].nombre, nom);
    strcpy(jugadores_lista[i].posicion, pos);
}

int main(){
    int nume;
    char nombre, posicion;



    return 0;
}
