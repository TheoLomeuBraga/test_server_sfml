#include <iostream>
#include <SFML/Network.hpp>
#include "conection_info.h"
//https://www.sfml-dev.org/tutorials/2.5/network-sfml_socket.php

#ifdef SFML_SYSTEM_WINDOWS
        #include <winsock2.h>
#else
        #include <sys/socket.h>
#endif

sf::TcpSocket sfml_soket;
sf::IpAddress ip = HOST;



char data[DATA_SIZE] = "ola aqui e o cliente";
sf::Socket::Status status;

int main() {
    status = sfml_soket.connect(HOST, PORT);
    sfml_soket.send(data, DATA_SIZE);
    return 0;
}
