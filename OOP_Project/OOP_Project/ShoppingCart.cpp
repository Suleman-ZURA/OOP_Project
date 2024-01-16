#include "ShoppingCart.h"
#include <iostream>
using namespace std;
void ShoppingCart::additem(ClothingItem* item) {
    if (item != nullptr) {
        items.push_back(item);
    }
    else {
        throw "Item cannot be null";
    }
}

void ShoppingCart::removeitem() {
    items.pop_back();
}

void ShoppingCart::DisplayCart() {
    for (const auto& item : items) {
        item->Display();
    }
}