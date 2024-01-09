#include<stdio.h>
#include<string.h>
#include <stdlib.h>

#define lon 5

//mi estructura
typedef struc players{
    int id;
    int numero;
    char nombre[50];
    char posicion[50];
} PLAYER;

//array de estructuras
PLAYER jugadores_lista[lon];

//funcion que rellena elemento especifico del array
void rellenar_elementos(int i, int num, char nom, char pos){
    jugadores_lista[i].id = i;
    jugadores_lista[i].numero = num;
    strcpy(jugadores_lista[i].nombre, nom);
    strcpy(jugadores_lista[i].posicion, pos);
}

//fgets(variable, sizeof(variable, stdin))
//la funcion main
int main(){
    int nume;
    char nombre, posicion;
    int x;
    
    for(x = 0 ; x < lon ; x++){

    }


    return 0;
}
