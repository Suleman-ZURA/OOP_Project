#include "Apparel.h"
#include "ShoppingCart.h"
#include <iostream>
#include<vector>

using namespace std;
int main() {
    ShoppingCart cart;

    ClothingItem* items[3];

    items[0] = new Apparel("Blue baggy pants", 2500, "M");
    items[1] = new Apparel("Tee shirt", 2000, "S");
    items[2] = new Apparel("Black pants", 2500, "M");

    try {
        cart.additem(items[0]);
        cart.additem(items[1]);
        cart.additem(items[2]);

        cart.DisplayCart();
    }
    catch (const char* msg) {
        cout << msg <<endl;
    }

    cart.removeitem();

    cart.DisplayCart();

    return 0;
}
