#include "SimpleSocket.h"

//Default constructor

priza::SimpleSocket::SimpleSocket(int domain, int service, 
	int protocol, int port, u_long s_interface)
{
	//defined address structure
	address.sin_family = domain;
	address.sin_port = htons(port);
	address.sin_addr.s_addr = htonl(s_interface);
	//establish socket
	sock = socket(domain, service, protocol);
	test_connection(sock);
	
}

// Test connection virtula function

void priza::SimpleSocket::test_connection(int item_to_test)
{
	//confirms that the socket connection has been properly established
	if (item_to_test < 0)
	{
		perror("Failed to connect");
		exit(EXIT_FAILURE);
	}
}

//getter functions

struct sockaddr_in priza::SimpleSocket::get_address()
{
	return address;
}

int priza::SimpleSocket::get_sock()
{
	return sock;
}

int priza::SimpleSocket::get_connection()
{
	return connection;
}

// setter funtions

void priza::SimpleSocket::set_connection(int con)
{
	connection = con;
}