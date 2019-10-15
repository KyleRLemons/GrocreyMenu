//
// Created by Kyle Lemons on 2019-10-14.
//

#ifndef GROCREY_SHOPPINGCART_H
#define GROCREY_SHOPPINGCART_H

#include "ItemToPurchase.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class ShoppingCart{
public:
    ShoppingCart();
    ShoppingCart(string customerName, string currentDate);
    string GetCustomerName();
    string GetDate();

    void AddItem(string ItemToPurchase);
    void RemoveItem(string ItemToRemove);
    void ModifyItem(string ItemToPurchase);
    int GetNumItemsInCart();
    int GetCostOfCart();
    void PrintTotal();
    void PrintDescriptions();


private:
    string customerName;
    string currentDate;
    vector <ItemToPurchase> cartItems;

};

ShoppingCart::ShoppingCart(){
    customerName = "none";
    currentDate = "January 1, 2016";

}

ShoppingCart::ShoppingCart(string customerName, string currentDate) {
    this-> currentDate = currentDate;
    this-> customerName = customerName;
}

string ShoppingCart::GetCustomerName() {
    return customerName;
}

string ShoppingCart::GetDate(){
    return currentDate;
}






#endif //GROCREY_SHOPPINGCART_H
