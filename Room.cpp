#include "Room.h"
#include <iostream>

Room::Room(int x, int y) {

    this->map = new char*[y];
    this->height = y;
    this->width = x;

    for (int outerCounter = 0; outerCounter < y; outerCounter++) {
        this->map[counter] = new char[x][y];

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

    this->width = x;
    this->height = y;

    for (int outerCounter = 0; outerCounter < height; outerCounter++) {
        this->map[counter] = new char[width];
        for (int innerCounter = 0; innerCounter < width; innerCounter++) {
            this->map[outerCounter][innerCounter] = ' ';
        }
    }

}

void Room::draw() {

}