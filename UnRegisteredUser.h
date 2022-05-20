//UnRegisteredUser.h

class UnRegisteredUser{
	
	protected:
		
		string name;
		string email;
		int contactNo;
		string nIC;
		
		
	public:
		
		UnRegisteredUser(string uname);
		void setCustomerDetails(string uname, string nic);
		int getCustomerDetails();
		void displayUserDetails();
		~UnRegisteredUser();	
	
	
};
