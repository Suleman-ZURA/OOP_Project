#pragma once

#include <vector>
#include "ClothingItem.h"
using namespace std;
class ShoppingCart {
    vector<ClothingItem*> items;

public:
    void additem(ClothingItem* item);
    void removeitem();
    void DisplayCart();
};