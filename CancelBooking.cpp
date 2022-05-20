#include "CancelBooking.h"

#include<iostream>
#include<cstring>

using namespace std;

int CancelBooking::cancelBooking(const char pBookingID[], const char pcustomerName[])
{
	strcpy_s(customerName, pcustomerName);
	strcpy_s(cBookingID, pBookingID);
	return 0;

}
void CancelBooking::display()
{
	cout << endl;
	cout << "   Book ID          : " << cBookingID << endl;
	cout << "   Customer Name    : " << customerName << endl;

	cout << endl;
	cout << "---------- Canseled Book Now --------" << endl;
	
	

}
