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
char data[DATA_SIZE] = "ola aqui e o cliente";

int main() {
    sf::IpAddress recipient = HOST;
    if (sfml_socket.send(data, DATA_SIZE, recipient, PORT) != sf::Socket::Done)
    {
        ERROR
        std::cout << "send\n";
    }
}
