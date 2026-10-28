#include "Room.h"

class Player;

class Room {
    private:
        Player * player;
        char * mapRow;
        char ** map;

        int width;
        int height;

    public:
        Room(int x, int y, Player * player);
        ~Room();
        void draw();
        bool canMove(int x, int y);
}