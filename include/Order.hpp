#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <string>
#include "Customer.hpp"
#include "Article.hpp"
#include "ArticleList.hpp"

using namespace std;

class Order 
{
    private:
        string code;
        Customer* customer;
        ArticleList* articleList;

    public:
        Order(string code, Customer* customer);
        ~Order();
        void attach(Article* article);
        void detach(Article* article);
        void show();
};

#endif
