#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>

using namespace std;

class Customer 
{
    private:
        string code;
        string name;
        string address;
        
    public:
        Customer(string code, string name, string address);
        string getCode();
        string getName();
        string getAddress();
};

#endif
