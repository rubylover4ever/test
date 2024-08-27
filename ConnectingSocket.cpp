#include "ConnectingSocket.h"

//Constructor
priza::ConnectingSocket::ConnectingSocket(int domain, int service, int protocol,
	int port, u_long s_interface) : SimpleSocket(domain, service, protocol,
		port, s_interface)
{
	set_connection(connect_to_network(get_sock(), get_address()));
	test_connection(get_connection());
}

//Definition of connect_to_network virtual funtion
int priza::ConnectingSocket::connect_to_network(int sock, struct
	sockaddr_in address)
{
	return bind(sock, (struct sockaddr*)&address, sizeof(address));
}