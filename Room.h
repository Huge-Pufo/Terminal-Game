#include "Room.h"

class Room {
    private:
        Player * player;
        char * mapRow;
        char ** map;

        int width;
        int height;

    public:
        Room(int x, int y);
        ~Room();
        void draw();
}