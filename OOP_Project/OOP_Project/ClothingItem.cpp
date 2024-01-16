#include "ClothingItem.h"

using namespace std;
int ClothingItem::nextid = 0;

ClothingItem::ClothingItem(string name, int price) : name(name), price(price)
{
    itemid = generateid();
}

int ClothingItem::generateid() {return ++nextid;}

void ClothingItem::Display() {
    cout << "Itemid: " << itemid <<endl;
    cout << "Item: " << name <<endl;
    cout << "Price: " << price <<endl;
}

