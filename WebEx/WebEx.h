#ifndef WEBEX_H
#define WEBEX_H

#include <string>
#include <iostream>
#include "professor.h"
#include "student.h"

class WebEx
{
	int state;
	string share = "None";
	int chatCounts = 0;
	int numOfStudetns = 0;
	student* Students;
	void setStudents(professor Pro, student Stu);
	string ChattingList[15];
	int meetingNum;
	string professorName;
	void display(professor Pro);
	void display(student Stu);
	void appendChat(string chat);
	void commend(professor Pro, student Stu);
	bool ProIsDef = false;
	bool StuIsDef = false;
public:
	WebEx();
	void startStudent();
	void startPro();
};

#endif