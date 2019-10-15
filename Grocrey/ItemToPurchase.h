//
// Created by Kyle Lemons on 2019-10-13.
//

#ifndef GROCREY_ITEMTOPURCHASE_H
#define GROCREY_ITEMTOPURCHASE_H




#include <string>
#include <iostream>
#include <vector>
using namespace std;

class ItemToPurchase{
public:
    ItemToPurchase();
    void SetName(string itemName);
    void SetPrice(int itemPrice);
    void SetQuantity (int itemquantity);
    string GetName();
    int GetPrice();
    int GetQuantity();


    void SetDescription(string description);
    string GetDescription();
    void PrintItemCost();
    void PrintItemDescription();




private:
    string itemName;

    int itemPrice;

    int itemQuantity;

    string itemDescription;
};

ItemToPurchase::ItemToPurchase(){
    itemName = "None";
    itemPrice = 0;
    itemQuantity = 0;
    itemDescription = "none";
};

void ItemToPurchase::SetName(string itemName){
    this->itemName = itemName;

};
string ItemToPurchase::GetName(){
    return itemName;
};

void ItemToPurchase::SetPrice(int itemPrice) {
    this->itemPrice = itemPrice;
};

int ItemToPurchase::GetPrice(){
    return itemPrice;
};


void ItemToPurchase::SetQuantity(int itemQuantity) {
    this->itemQuantity = itemQuantity;
};
int ItemToPurchase::GetQuantity(){
    return itemQuantity;
};

void ItemToPurchase::SetDescription(string itemDescrption) {
    this-> itemDescription = itemDescrption;
}

string ItemToPurchase::GetDescription() {
    return itemDescription;
}

#endif




