#include "Inventory.h"

bool Inventory::addItem(Item item) {

    if (this->numberOfItems >= this->arraySize) {

    }
    
    this->items[this->numberOfItems] = item;
    this->numberOfItems += 1
}
bool Inventory::removeItem(string id) {
    this->numberOfItems -= 1;
}
bool Inventory::hasItem(string id) {

}
Inventory::Inventory() {
    this->arraySize = 2;
    this->numberOfItems = 0;
    this->items = new Item[1];
}
Inventory::~Inventory() {
    delete[] this->items;
}