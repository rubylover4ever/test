#include "BindingSocket.h"


//Constructor
priza::BindingSocket::BindingSocket(int domain, int service, int protocol,
	int port, u_long s_interface) : SimpleSocket(domain, service,
		protocol, port, s_interface)
{
	set_connection(connect_to_network(get_sock(), get_address()));
	test_connection(get_connection());
}

//Definition of connect_to_network virutal function
int priza::BindingSocket::connect_to_network(int sock, struct
	sockaddr_in address)
{
	return bind(sock, (struct sockaddr*)&address, sizeof(address));
}