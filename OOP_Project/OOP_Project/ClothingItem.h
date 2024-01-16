#pragma once

#include <iostream>
#include <string>

using namespace std;

class ClothingItem {
    int itemid;
    string name;
    int price;
    static int nextid;

public:
    ClothingItem(string name, int price);
    static int generateid();
    virtual void Display();
};

