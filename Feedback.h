class Feedback
{
private:
	int feedbackNo;
	char Email[20];
	char feedbackMsg[300];
	RegisteredUser* RegUser;
public:
	Feedback();
	Feedback(int feedNo, const char fEmail[], const char feedMsg[], RegisteredUser* Rus);
	void displayFeedback();
	~Feedback();
};