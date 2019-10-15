#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "ItemToPurchase.h"
#include "ShoppingCart.h"

int main() {
    ItemToPurchase MyItemToPurchase1;
    ItemToPurchase MyItemToPurchase2;
    string item;
    int itemPrice;
    int itemQuantity;

    string item2;
    int itemPrice2;
    int itemQuantity2;

    int totalCost;
    cout << "Item 1" << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, item);
    MyItemToPurchase1.SetName(item);
    cout << "Enter the item price:" << endl;
    cin >> itemPrice;
    MyItemToPurchase1.SetPrice(itemPrice);
    cout << "Enter the item quantity:" << endl;
    cin >> itemQuantity; //stops working here
    MyItemToPurchase1.SetQuantity(itemQuantity);
    cin.ignore();
    cout << endl;


    cout << "Item 2" << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, item2);
    MyItemToPurchase2.SetName(item2);
    cout << "Enter the item price:" << endl;
    cin >> itemPrice2;
    MyItemToPurchase2.SetPrice(itemPrice2);
    cout << "Enter the item quantity:" << endl;
    cin >> itemQuantity2;
    MyItemToPurchase2.SetQuantity(itemQuantity2);
    cout << endl;


    cout << "TOTAL COST" << endl;

    cout << MyItemToPurchase1.GetName() << " " << MyItemToPurchase1.GetQuantity() << " @ " <<
         "$" << MyItemToPurchase1.GetPrice() << " = $" << MyItemToPurchase1.GetPrice() * MyItemToPurchase1.GetQuantity() << endl;


    cout << MyItemToPurchase2.GetName() << " " << MyItemToPurchase2.GetQuantity() << " @ " <<
         "$" << MyItemToPurchase2.GetPrice() << " = $" << MyItemToPurchase2.GetPrice() * MyItemToPurchase2.GetQuantity() <<endl;

    totalCost = (MyItemToPurchase2.GetPrice() * MyItemToPurchase2.GetQuantity()) + (MyItemToPurchase1.GetPrice() * MyItemToPurchase1.GetQuantity());
    cout << endl;
    cout << "Total: $" << totalCost << endl;
    return 0;
}