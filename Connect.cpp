#include "Connect.h"
#include <string>
#include <iostream>

using namespace std;
Connect::Connect()
{
	
}
Connect::Connect(int iP, int porT)
{
     ip = iP;
     port = porT;
}
Connect::getConnectStat(string Stat)
{
	connectStat = Stat;
}
