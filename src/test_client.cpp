#include <iostream>
#include <SFML/Network.hpp>
#include "conection_info.h"
//https://www.sfml-dev.org/tutorials/2.5/network-sfml_socket.php

#ifdef SFML_SYSTEM_WINDOWS
        #include <winsock2.h>
#else
        #include <sys/socket.h>
#endif

#include "base_64.h"

sf::TcpSocket sfml_soket;
sf::IpAddress ip = HOST;

std::string mensage = "ola aqui e o cliente C++";


sf::Socket::Status status;

int main() {
    status = sfml_soket.connect(HOST, PORT);
    sfml_soket.send(base64_encode((const unsigned char *)(mensage.c_str()),mensage.size()).c_str(), DATA_SIZE);
    return 0;
}
