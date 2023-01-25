#include <iostream>
#include <SFML/Network.hpp>

//https://www.sfml-dev.org/tutorials/2.5/network-socket.php

sf::TcpListener listener;
sf::TcpSocket client;
sf::Socket::Status status;
int main() {
    std::cout << "Hello World!\n";
    if (listener.listen(53000) != sf::Socket::Done)
    {
    // error...
    }

    // accept a new connection
    sf::TcpSocket client;
    if (listener.accept(client) != sf::Socket::Done)
    {
    // error...
    }
    if (status != sf::Socket::Done)
    {
        std::cout << "conection error\n";
    }
    return 0;
}
