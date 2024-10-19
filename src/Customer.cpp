#include <Customer.hpp>

Customer::Customer(string code, string name, string address) 
{
    this->code = code;
    this->name = name;
    this->address = address;
}

string Customer::getCode() 
{
    return this->code;
}

string Customer::getName() 
{
    return this->name;
}

string Customer::getAddress() 
{
    return this->address;
}
