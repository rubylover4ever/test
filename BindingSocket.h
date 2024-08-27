#pragma once

#include <stdio.h>
#include "SimpleSocket.h"

namespace priza
{
	class BindingSocket: SimpleSocket
	{
	private:

	public:
		//Constructor
		BindingSocket(int domain, int service, int protocol,
			int port, u_long s_interface);
		//virtual function from parent
		int connect_to_network(int sock, struct sockaddr_in address)
		{

		}


	};
}