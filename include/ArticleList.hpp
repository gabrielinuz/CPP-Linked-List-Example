#ifndef ARTICLES_LIST_H
#define ARTICLES_LIST_H

#include "Article.hpp"

class ArticleList
{
    private:
        //Estructura interna que representa un nodo de la lista, a la cual solemos llamar lista enlazada.
        struct Node 
        {
            Article* article; // Puntero-Apuntador a un artículo.
            Node* next; // Puntero-Apuntador al siguiente nodo en la lista.
            
            // Constructor que inicializa el nodo con un artículo y el siguiente nodo con un puntero nulo.
            Node(Article* article) : article(article), next(nullptr) {}
        };
        
        // Puntero-Apuntador al primer nodo de la lista.
        Node* head;

    public:
        ArticleList();
        ~ArticleList();

        void add(Article* article);
        void remove(Article* article);
        void forEach(void (*callback)(Article*));
};

#endif
