#pragma once

#include <stdio.h>
#include <winsock.h>
#include <io.h>
#include <iostream>

namespace priza
{
	class SimpleSocket
	{
	private:
		struct sockaddr_in address;
		int sock;
		int connection;

	public:
		//constructor
		SimpleSocket(int domain, int service, int protocol,
			int port, u_long s_interface);
		//virtual function to connect to a network
		virtual int connect_to_network(int sock,struct sockaddr_in address) = 0;
		//function to test sockets and connection
		void test_connection(int);
		//getter functions
		struct sockaddr_in get_address();
		int get_sock();
		int get_connection();
		//setter functions
		void set_connection(int connection);
	};
}