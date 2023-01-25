#include <iostream>
#include <SFML/Network.hpp>
#include "conection_info.h"
//https://www.sfml-dev.org/tutorials/2.5/network-socket.php


sf::UdpSocket socket;
char data[DATA_SIZE];

std::size_t received;


int main() {
    std::cout << "Hello World!\n";
    if (socket.bind(PORT) != sf::Socket::Done)
    {
        ERROR
    }
    sf::IpAddress sender = HOST;
    if (socket.receive(data, DATA_SIZE, received, sender, PORT) != sf::Socket::Done)
    {
        ERROR
    }
    std::cout << "Received " << received << " bytes from " << sender << " on port " << PORT << std::endl;
    return 0;
}
