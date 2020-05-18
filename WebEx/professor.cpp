#include "professor.h"
#include <iostream>

void professor::setName()
{
	cout << "type yout name >>>";
	cin >> name;
}

int professor::setmeetingNum()
{
	int num;
	cout << "type yout meeting room number(integer) >>>";
	cin >> num;
	return num;
}

void professor::setMic()
{
	cout << "Microphone(0:off  1:on)  >>>";
	cin >> microphone;
}

void professor::setCam()
{
	cout << "Camera(0:off  1:on)  >>>";
	cin >> camera;
}

string professor::say()
{
	string chat;
	string remainder;
	getline(cin, remainder);
	cout << ">>>";
	getline(cin, chat, '\n');
	chat = name + " : " + chat;
	return chat;
}

string professor::sharing()
{
	string share;
	cout << "object that you want to share >>>";
	cin >> share;
	return share;
}