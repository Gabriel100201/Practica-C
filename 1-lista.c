#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    struct Nodo *siguiente;
};

// Función para agregar un elemento al inicio de la lista
void agregarAlInicio(struct Nodo **cabeza, int valor)
{
    // Se crea el nuevo nodo y se asigna su memoria correspondiente
    struct Nodo *nuevoNodo = (struct Nodo *)malloc(sizeof(struct Nodo));
    // Asigna al nuevo nodo el valor que se le pasó
    nuevoNodo->dato = valor;
    // Se agrega a el puntero "siguiente" la dirección de la cabeza de la lista
    nuevoNodo->siguiente = *cabeza;
    // Ahora cabeza apunta al nuevo nodo, es decir, la cabeza pasa a ser el ultimo nodo
    *cabeza = nuevoNodo;
}

// Función para imprimir la lista
void imprimirLista(struct Nodo *cabeza)
{
    struct Nodo *actual = cabeza;
    while (actual != NULL)
    {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }
    printf("NULL\n");
}

int main()
{
    struct Nodo *cabeza = NULL; // Inicializamos la lista como vacía

    agregarAlInicio(&cabeza, 3); // Agregamos elementos al inicio
    agregarAlInicio(&cabeza, 2);
    agregarAlInicio(&cabeza, 1);

    imprimirLista(cabeza);

    return 0;
}
