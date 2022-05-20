class driver
{
private:

	int driverID;
	char driverName[15];
	char vehicleType[15];
	int bookingID;
	char pickupLocation[15];
	char dropLocation[15];

public:

	int driver1(const char name[], int driverID);

	int rideDetails(const char pickupLocation[],const char dropLocation[], int bookingID);

	void cancelRide();

	void recievePayment();
};