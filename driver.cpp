#include "driver.h"
#include<cstring>
#include <iostream>

using namespace std;


int driver::driver1(const char Sname[], int SdriverID)
{
	strcpy_s(driverName, Sname);
	driverID = SdriverID;

	return driverID;
}

int driver::rideDetails(const char SpickupLocation[], const char SdropLocation[], int SbookingID)
{
	strcpy_s(pickupLocation, SpickupLocation);

	strcpy_s(dropLocation, SdropLocation);

	bookingID = SbookingID;

	return bookingID;

}

void driver::cancelRide()
{
	
}


void driver::recievePayment()
{
	cout << "------------------------------------" << endl;
	cout << "  Pickup Location :     " << pickupLocation << endl;
	cout << "  Drop Location   :     " << dropLocation << endl;
	cout << "  Booking ID      :     " << bookingID << endl;
	cout << "------------------------------------" << endl;
}
