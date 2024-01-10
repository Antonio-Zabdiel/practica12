#include<stdio.h>
#include<string.h>
#include <stdlib.h>

#define lon 5

//mi estructura
typedef struct players{
    int id;
    int numero;
    char nombre[50];
    char posicion[50];
} PLAYER;

//array de estructuras
PLAYER jugadores_lista[lon];

//funcion que rellena elemento especifico del array
void rellenar_elementos(int i, int num, char nom[50], char pos[50]){
    //char nomb[] = nom;
    //char posi[] = pos;

    jugadores_lista[i].id = i;
    jugadores_lista[i].numero = num;
    strcpy(jugadores_lista[i].nombre, nom);
    strcpy(jugadores_lista[i].posicion, pos);
}

//funcion para recivir datos
void recive_data(int a){
    int numero = 0;
    char nombre[50];
    char posicion[50];

    printf("ingresa el numero asignado al jugador: ");
    fflush(stdin);
    scanf("%d", &numero);
    printf("ingresa el nombre del jugaador: ");
    fflush(stdin);
    fgets(nombre, sizeof(nombre), stdin);
    printf("ingresa la posicion en la que juega el jugador: ");
    fflush(stdin);
    scanf("%s", posicion);

    rellenar_elementos(a, numero, nombre, posicion);
    //fgets(posicion, sizeof(posicion), stdin);
}

//funcion para printear las struct
void printear_struct(){
    int x;

    printf("lista de jugadores\n");
    printf("==========================================================================================================");

    for(x = 0 ; x < lon ; x++){
        printf("\njugador %d:", jugadores_lista[x].id);
        printf("\nnumero del jugador %d:", jugadores_lista[x].numero);
        printf("\nsu nombre es es: %s", jugadores_lista[x].nombre);
        printf("\nsu posicion es: %s", jugadores_lista[x].posicion);
        printf("\n==========================================================================================================");
    }    
}

//fgets(variable, sizeof(variable), stdin)
//la funcion main
int main(){
    int nume;
    char nombre, posicion;
    int x;
    
    for(x = 0 ; x < lon ; x++){
        recive_data(x);
    }

    printear_struct();

    return 0;
}
