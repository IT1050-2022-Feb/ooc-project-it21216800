
class Booking
{
private:

    char customerName[20];
	int custermerid;
	int  bookingid;
	char pickupLocation[20];
	char dropLocation[20];
	char date[20];
	char time[20];
	char vehicleType[20];

public:

	int Booking1(int SBookingid,const char ScustomerName[]);

	void setBookingDetails( const char spickupLocation[], const char sdropLocation[], const char sdate[],const char stime[], const  char svehicleType[]);

	void displayDriverDetails();


};

