#include <Article.hpp>

Article::Article(string code, string name, double price) 
{
    this->code = code;
    this->name = name;
    this->price = price;
}

string Article::getCode() 
{
    return this->code;
}

string Article::getName() 
{
    return this->name;
}

double Article::getPrice() 
{
    return this->price;
}
