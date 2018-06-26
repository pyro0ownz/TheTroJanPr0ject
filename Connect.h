#ifndef CONNECT_H
#define CONNECT_H

#include <string>
#include <iostream>

using namespace std;
class Connect
{
	private:
		int ip;
		int port;
		string connectStat;
	public:
		Connect();
		Connect(int iP, int porT);
		getConnectStat(string Stat);

};

#endif
