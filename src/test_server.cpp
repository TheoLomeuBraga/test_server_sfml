#include <iostream>
#include <SFML/Network.hpp>
#include "conection_info.h"
//https://www.sfml-dev.org/tutorials/2.5/network-sfml_socket.php

#ifdef SFML_SYSTEM_WINDOWS
        #include <winsock2.h>
#else
        #include <sys/socket.h>
#endif

sf::UdpSocket sfml_socket;
char data[DATA_SIZE];

std::size_t received;



int main() {
    if (sfml_socket.bind(PORT) != sf::Socket::Done)
    {
        std::cout << "error in port: " << PORT << "\n";
    }
    std::cout << "Hello World!\n";
    sf::IpAddress sender = HOST;
    if (sfml_socket.receive(data, 100, received, sender, PORT) != sf::Socket::Done)
    {
        // error...
    }
    std::cout << "Received " << received << " bytes from " << sender << " on port " << PORT << std::endl;
    return 0;
}
