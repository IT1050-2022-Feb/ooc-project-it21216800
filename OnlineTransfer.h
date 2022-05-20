class OnlineTransfer
{
private:
	char cardType[20];
	char cardNo[20];
	char expiraryDate[20];
	float discount;

public:
	int CardDetails(const char cType[], const char cNo[], const char exDate[], float 
  cDis);

	void displayDiscount();
	void calcPayAmount();
	void displayCardDeatails();


};