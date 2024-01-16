#pragma once
#include "ClothingItem.h"

using namespace std;
class Apparel :
    public ClothingItem
{
    string size;
public:
    Apparel(string name, int price, std::string size);
    void Display() override;
};

