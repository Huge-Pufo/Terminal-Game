#include "Player.h"
#include "Room.h"
#include <iostream>

int main () {

    Player player;
    Room room(5, 10, &player);

    room.draw();
    isRunning = true;

    while (isRunning) {

        room.draw();

        char input;
        std::cout << endl << endl << "Please enter wasd to move and q to quit: "
        cin >> input;

        if (input == 'q') {
            isRunning = false;
        } else {
            player.move(input, &Room);
        }
    }

    return 0;
}