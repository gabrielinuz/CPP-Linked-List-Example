#include "ArticleList.hpp"
#include <iostream>

// Constructor que inicializa la lista como vacía.
ArticleList::ArticleList() : head(nullptr) {}

// Destructor para liberar la memoria de los nodos cuando la lista de artículos es destruída.
ArticleList::~ArticleList()
{
    while (head != nullptr) // mientras que la cabecera sea distinto de un puntero nulo.
    {
        Node* temp = head; // asigna la cabecera actual a un nodo temporal
        head = head->next; // mueve la cabecera a next que es un puntero nulo.
        delete temp; // borra el nodo temporal.
    }
}

// Método para agregar un artículo al inicio de la lista.
void ArticleList::add(Article* article)
{
    Node* newNode = new Node(article);// Crea un nuevo nodo.
    newNode->next = head;// Conecta el nuevo nodo al inicio de la lista.
    head = newNode;// Actualiza el inicio de la lista.
}

// Método para eliminar un artículo de la lista.
void ArticleList::remove(Article* article)
{
    Node* current = head;
    Node* previous = nullptr;

    // Recorre la lista para encontrar el nodo que contiene el artículo.
    while (current != nullptr) 
    {
        if (current->article == article) // Si encuentra el artículo:
        {
            if (previous == nullptr) // Si es el primer nodo:
            {
                head = current->next; // Actualiza el head al siguiente nodo.
            } 
            else // Si es un nodo intermedio o final:
            {
                previous->next = current->next; // Conecta el nodo anterior al siguiente.
            }
            delete current; // Elimina el nodo actual.
            return;
        }
        // Avanza al siguiente nodo:
        previous = current;
        current = current->next;
    }
}

// Método para recorrer todos los artículos y ejecutar una función "callback" sobre cada uno.
void ArticleList::forEach(void (*callback)(Article*))
{
    Node* current = head;
    while (current != nullptr) 
    {
        callback(current->article); // Aplica la función "callback" al artículo del nodo actual.
        current = current->next; // Avanza al siguiente nodo.
    }
}
