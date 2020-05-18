#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class student
{
	string ProName;
	string name;
	bool microphone = 0;
	bool camera = 0;
public:
	void setProName();
	string say();
	int setmeetingNum();
	void setName();
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
	string getProName()
	{
		return ProName;
	}
};

#endif