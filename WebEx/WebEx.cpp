#include "WebEx.h"
#include <iostream>
#include <windows.h>
using namespace std;

WebEx::WebEx()
{
	int who;
	cout << "***********************************" << endl;
	cout << "*********Welcome to WebEx!*********" << endl;
	cout << "***********************************" << endl;
	cout << "B911084 ¹éÁØÈ£" << endl << endl << endl;
	cout << "Professor : 0  Student : 1   >>>";
	cin >> who;
	if (who == 0)
	{
		system("cls");
		startPro();
	}
	else if (who == 1)
	{
		system("cls");
		startStudent();
	}
	else
	{
		cout << "wrong number!" << endl;
	}
}

void WebEx::startPro()
{
	state = 0;
	professor Pro;
	student Stu;
	Pro.setName();
	professorName = Pro.getName();
	meetingNum = Pro.setmeetingNum();
	Pro.setMic();
	Pro.setCam();
	ProIsDef = true;
	display(Pro);
	commend(Pro, Stu);
}

void WebEx::startStudent()
{
	state = 1;
	professor Pro;
	student Stu;
	Stu.setName();
	meetingNum = Stu.setmeetingNum();
	Stu.setMic();
	Stu.setCam();
	Stu.setProName();
	professorName = Stu.getProName();
	StuIsDef = true;
	display(Stu);
	commend(Pro, Stu);
}

void WebEx::display(professor Pro)
{
	system("cls");
	cout << "professor : " << professorName << endl;
	cout << "meeting room number : " << meetingNum << endl;
	cout << "microphone : " << Pro.getMic() << "  camera : " << Pro.getCam() << endl;
	cout << "sharing : " << share << endl;
	cout << "number of students : " << numOfStudetns << endl;
	cout << "======================chat======================\n";
	for (int i = 0; i < 15; i++)
	{
		cout << ChattingList[i] << endl;
	}
	cout << "======================students======================\n";
	for (int i = 0; i < numOfStudetns; i++)
	{
		cout << Students[i].getName() << endl;
	}
}

void WebEx::display(student Stu)
{
	system("cls");
	cout << "professor : " << professorName << endl;
	cout << "meeting room number : " << meetingNum << endl;
	cout << "microphone : " << Stu.getMic() << "  camera : " << Stu.getCam() << endl;
	cout << "sharing : " << share << endl;
	cout << "number of students : " << numOfStudetns << endl;
	cout << "======================chat======================\n";
	for (int i = 0; i < 15; i++)
	{
		cout << ChattingList[i] << endl;
	}
	cout << "======================students======================\n";
	for (int i = 0; i < numOfStudetns; i++)
	{
		cout << Students[i].getName() << endl;
	}
}

void WebEx::appendChat(string chat)
{
	ChattingList[chatCounts] = chat;
	chatCounts++;
}

void WebEx::commend(professor Pro, student Stu)
{
	if (state == 0)
	{
		int menu;
		cout << "chat:0  screen sharing:1  invite:2  Mic:3  Cam:4  Student Mode:5  stop meeting:6 >>>";
		cin >> menu;
		if (menu == 0)
		{
			string chat;
			chat = Pro.say();
			appendChat(chat);
			display(Pro);
			commend(Pro, Stu);
		}
		else if (menu == 1)
		{
			string obj;
			obj = Pro.sharing();
			share = obj;
			display(Pro);
			commend(Pro, Stu);
		}
		else if (menu == 2)
		{
			setStudents(Pro,Stu);
		}
		else if (menu == 3)
		{
			Pro.setMic();
			display(Pro);
			commend(Pro, Stu);
		}
		else if (menu == 4)
		{
			Pro.setCam();
			display(Pro);
			commend(Pro, Stu);
		}
		else if (menu == 5)
		{
			if (StuIsDef == false)
			{
				state = 1;
				Stu.setName();
				Stu.setMic();
				Stu.setCam();
				StuIsDef = true;
				display(Stu);
				commend(Pro, Stu);
			}
			else
			{
				state = 1;
				display(Stu);
				commend(Pro, Stu);
			}
		}
		else if (menu == 6)
		{
			exit(0);
		}
		else
		{
			commend(Pro, Stu);
		}
	}
	else if (state == 1)
	{
		int menu;
		cout << "chat:0  Mic:1  Cam:2  Professor Mode:3  exit:4  >>>";
		cin >> menu;
		if (menu == 0)
		{
			string chat;
			chat = Stu.say();
			appendChat(chat);
			display(Stu);
			commend(Pro, Stu);
		}
		else if (menu == 1)
		{
			Stu.setMic();
			display(Stu);
			commend(Pro, Stu);
		}
		else if (menu == 2)
		{
			Stu.setCam();
			display(Stu);
			commend(Pro, Stu);
		}
		else if (menu == 3)
		{
			if (ProIsDef == false)
			{
				state = 0;
				display(Pro);
				ProIsDef = true;
				commend(Pro, Stu);
			}
			else
			{
				state = 0;
				display(Pro);
				commend(Pro, Stu);
			}
		}
		else if (menu == 4)
		{
			exit(0);
		}
		else
		{
			commend(Pro, Stu);
		}
	}
	
}


void WebEx::setStudents(professor Pro, student Stu)
{
	int num;
	cout << "type number of students  >>>";
	cin >> num;
	Students = new student[num];
	for (int i = 0; i < num; i++)
	{
		Students[i].setName();
		numOfStudetns++;
	}
	display(Pro);
	commend(Pro, Stu);
}
