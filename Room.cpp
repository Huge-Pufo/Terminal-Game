#include "Room.h"
#include "Player.h"
#include <iostream>

Room::Room(int x, int y, Player * player) {

    this->height = y;
    this->width = x;
    this->map = new char*[y];

    for (int outerCounter = 0; outerCounter < y; outerCounter++) {
        this->map[outerCounter] = new char[x];

        for (int innerCounter = 0; innerCounter < x; innerCounter++) {
            if ((outerCounter == 0) || outerCounter == (y - 1) || (innerCounter == 0) || innerCounter == (x - 1)) {
                this->map[outerCounter][innerCounter] = '#';
            } else {
                this->map[outerCounter][innerCounter] = ' ';
            }
        }
    }
}

Room::~Room() {
}

Room::canMove() {
    if (map[y][x] != '#') {
        return true;
    }
    else {
        return false;
    }
}

void Room::draw() {

    this->width = x;
    this->height = y;

    for (int outerCounter = 0; outerCounter < height; outerCounter++) {
        for (int innerCounter = 0; innerCounter < width; innerCounter++) {
            if (this->player->getX() == innerCounter && this->player->getY() == outerCounter) {
                std::cout "@";
            }
            std::cout << this->map[outerCounter][innerCounter];
        }
        cout << endl;
    }

}

