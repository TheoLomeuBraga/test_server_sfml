#include <iostream>
#include <SFML/Network.hpp>
#include "conection_info.h"
//https://www.sfml-dev.org/tutorials/2.5/network-socket.php


sf::UdpSocket socket;


int main() {
    std::cout << "Hello World!\n";
    if (socket.bind(54000) != sf::Socket::Done)
    {
        ERROR
    }
    return 0;
}
