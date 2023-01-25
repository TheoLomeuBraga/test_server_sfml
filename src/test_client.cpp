#include <iostream>
#include <SFML/Network.hpp>
#include "conection_info.h"
//https://www.sfml-dev.org/tutorials/2.5/network-socket.php


sf::UdpSocket socket;
char data[DATA_SIZE] = "ola aqui e o cliente";

int main() {
    std::cout << "Hello World!\n";
    if (socket.bind(PORT) != sf::Socket::Done)
    {
        ERROR
    }
    sf::IpAddress recipient = HOST;
    if (socket.send(data, DATA_SIZE, recipient, PORT) != sf::Socket::Done)
    {
        ERROR
    }
    return 0;
}
