#pragma once
#include <iostream>
using namespace std;

//Abstract class , Interface , contact .
class InterfaceCommunication
{

public:
	virtual void SendEmail(string Title, string Body) = 0;
	virtual void SendFax(string Title, string Body) = 0;
	virtual void SendSMS(string Title, string Body) = 0;

};
