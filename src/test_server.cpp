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
std::string mensage;


sf::TcpSocket sfml_soket;
sf::IpAddress ip = HOST;
size_t bytes_recived;

char data[DATA_SIZE];
sf::TcpListener listener;

sf::Socket::Status status;


int main() {
    status = sfml_soket.connect(HOST, PORT);
    listener.listen(PORT);
    listener.accept(sfml_soket);
    sfml_soket.receive(data, DATA_SIZE, bytes_recived);
    std::cout << "Received " << bytes_recived << " bytes\n";
    std::string d = data;
    std::cout << "and mensage: " << base64_decode(data) << "\n";
    sfml_soket.disconnect();
    return 0;
}
