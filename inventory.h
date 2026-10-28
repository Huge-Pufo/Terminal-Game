#include "Item.h"

class Inventory {
    private:
        Item *items;
        int numberOfItems;

    public:
        bool addItem(Item item);
        bool removeItem(string id);
        bool hasItem(string id);
        Inventory();
        ~Inventory();
}