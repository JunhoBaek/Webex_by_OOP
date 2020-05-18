#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <string>
using namespace std;

class professor
{
	string name;
	bool microphone = 0;
	bool camera = 0;
public:
	string say();
	string sharing();
	void setName();
	int setmeetingNum();
	void setMic();
	void setCam();
	string getName()
	{
		return name;
	}
	bool getMic()
	{
		return microphone;
	}
	bool getCam()
	{
		return camera;
	}
};

#endif