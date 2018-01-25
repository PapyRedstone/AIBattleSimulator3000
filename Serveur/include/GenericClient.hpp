#ifndef GENERIC_CLIENT_HPP
#define GENERIC_CLIENT_HPP

#include <SFML/Network.hpp>
#include <iostream>
#include <string>

#include "cmdFormat.hpp"

class GenericClient
{
public:
	GenericClient(std::string address, int port = 30666, std::string name = "") : id{ name } { connect(address, port); }
	~GenericClient();

	sf::Socket::Status connect(std::string address, int port);
	std::string receive();
	std::string blockingReceive();
	sf::Socket::Status send(const std::string& msg);
private:
	sf::TcpSocket socket;
	std::string id, key;

	std::string emptyMessage = "###NO MESSAGE RECEIVED, TRY AGAIN###";
};

#endif /* GENERIC_CLIENT_HPP */