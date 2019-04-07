#include "product.h"


Product::Product(string name, double price){
    this->name = name;
    this->price = price;
}

const string & Product::getName() const{
    return name;
}
const double & Product::getPrice() const{
    return price;
}