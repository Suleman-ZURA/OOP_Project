#include "Apparel.h"
using namespace std;
Apparel::Apparel(string name, int price, string size) : ClothingItem(name, price), size(size) {
}

void Apparel::Display() {
    ClothingItem::Display();
    cout << "Size: " << size << endl;
}
