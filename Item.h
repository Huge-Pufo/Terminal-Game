#include <iostream>

using namespace std;

class Item {
    private:
        string id;
        string name;
    public:
        Item(string id, string name);
        string getId();
        string getName();
        void setId();
        void setName();
}