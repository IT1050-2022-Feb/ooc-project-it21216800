class RegisteredUser : public UnregisteredUser 
{
private:
	//class relationship
	Booking* booking[SIZE];
	Feedback* feedback[SIZE];

	int customerId;
	char customerUsername[10];
	char customerPassword[10];

public:
	RegisteredUser();
	RegisteredUser(int CID, const char Uname[], const char Pwd[]);
	void addBooking(Booking* B);
	void addFeedback(Feedback* F);
	void logincredintialValidation();
	void display();
	~RegisteredUser();
};