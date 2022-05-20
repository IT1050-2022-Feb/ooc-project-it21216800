#include"Feedback.h"
#include<iostream>
#include"cstring"
using namespace std;

Feedback::Feedback()
{
	feedbackNo = 0;
	strcpy_s(Email, "");
	strcpy_s(feedbackMsg, "");
}

Feedback::Feedback(int feedNo, const char fEmail[], const char feedMsg[], RegisteredUser* Rus)
{
	feedbackNo = feedNo;
	strcpy_s(Email, fEmail);
	strcpy_s(feedbackMsg, feedMsg);
	RegUser = Rus;
	RegUser->addfeedback(this);
}

void Feedback::displayFeedback()
{
	cout << "Feedback No = " << feedbackNo << endl;
	cout << "Email = " << Email << endl;
	cout << "Message = " << feedbackMsg << endl;
}

Feedback::~Feedback()
{
	cout << "Delete Feedback!!!" << endl;
}