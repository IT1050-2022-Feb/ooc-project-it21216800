#include "Booking.h"

#include <iostream>

#include<cstring>

using namespace std;

int Booking::Booking1(int SBookingid, const char ScustomerName[])
{
	strcpy_s(customerName,ScustomerName);
	bookingid = SBookingid;

	return bookingid;
}
void Booking::setBookingDetails(const char spickupLocation[], const char sdropLocation[], const char sdate[],const char stime[], const  char svehicleType[])
{
	strcpy_s(pickupLocation,spickupLocation);

	strcpy_s(dropLocation, sdropLocation);

	strcpy_s(date, sdate);

	strcpy_s(time, stime);

	strcpy_s(vehicleType, svehicleType);


	cout << " --------------------------" << endl;
	cout << "Pickup Location  : " << pickupLocation << endl;
	cout << "Drop Location    : " << dropLocation << endl;
	cout << "Date             : " << date << endl;
	cout << "time             : " << time << endl;
	cout << "Vehicle type     : " << vehicleType << endl;
	cout << " --------------------------" << endl;
}
