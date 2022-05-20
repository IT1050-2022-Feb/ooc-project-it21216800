//Payment.h
class Payment{
	
	protected:
		
		int teceiptNo;
		float charges;
		string payDate;
		float reserveFee;
		float totAmount;
		
		
	public:
		
		Payment( int reNo,float pcharges, string pDate);
		void setPaymentDetails(float reFee, float tot);
		int getPaymentDetails();
		void displayPayDetails();
		~payment();	
	
	
};