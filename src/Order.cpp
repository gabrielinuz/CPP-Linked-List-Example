#include "Order.hpp"

// Definición de Clase Order que representa una orden/pedido de compra con una lista artículos y un cliente.

// Constructor de Order que inicializa el código de la orden y el cliente y crea una lista de artículos.
// Aquí se puede decir que hay una relación de composición donde la lista de artículos compone a la clase Order.
Order::Order(string code, Customer* customer)
{
    this->code = code;
    this->customer = customer; // Cliente asociado a la orden.
    articleList = new ArticleList(); // Se crea la lista de artículos.
}

Order::~Order()
{
    delete articleList; // Al destruir un objeto de la clase order se destruye la lista de artículos interna.
}

// Método para agregar un artículo a la orden.
void Order::attach(Article* article)
{
    articleList->add(article); // Usa la lista para agregar el artículo.
}

// Método para eliminar un artículo de la orden.
void Order::detach(Article* article)
{
    articleList->remove(article); // Usa la lista para eliminar el artículo.
}

// Método para mostrar los artículos en el pedido y el cliente asociado
void Order::show()
{
    cout << "Cliente: " << this->customer->getName() << endl;

    // Usa forEach para recorrer todos los artículos y mostrar su información.
    articleList->forEach([](Article* article) {
        cout << "Código de Artículo: " << article->getCode() << endl;
        cout << "Nombre de Artículo: " << article->getName() << endl;
        cout << endl;
    });
}
