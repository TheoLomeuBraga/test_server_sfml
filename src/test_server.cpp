#include <iostream>
#include <SFML/Network.hpp>

//https://www.sfml-dev.org/tutorials/2.5/network-socket.php

sf::TcpSocket socket;
sf::Socket::Status status;
int main() {
    std::cout << "Hello World!\n";
    status = socket.connect("192.168.0.5", 53000);
    if (status != sf::Socket::Done)
    {
        std::cout << "conection error\n";
    }
    return 0;
}
