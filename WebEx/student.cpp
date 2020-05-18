#include "student.h"
#include <iostream>

void student::setName()
{
	cout << "type student name >>>";
	cin >> name;
}

int student::setmeetingNum()
{
	int num;
	cout << "type your meeting room number(integer) >>>";
	cin >> num;
	return num;
}

void student::setMic()
{
	cout << "Microphone(0:off  1:on)  >>>";
	cin >> microphone;
}

void student::setCam()
{
	cout << "Camera(0:off  1:on)  >>>";
	cin >> camera;
}

void student::setProName()
{
	string name;
	cout << "type professor name >>>";
	cin >> ProName;
}


string student::say()
{
	string chat;
	string remainder;
	getline(cin, remainder);
	cout << ">>>";
	getline(cin, chat, '\n');
	chat = name + " : " + chat;
	return chat;
}
