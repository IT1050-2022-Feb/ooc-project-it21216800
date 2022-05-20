#include "Vehicle.h"
#include <iostream>
#include<cstring>

using namespace std;


int Vehicle::Vehicle1(const char licenseNo[], const char ptype[], const char pmodel[])
{
	strcpy_s(type, ptype);
	strcpy_s(licensePlateNo, licenseNo);
	strcpy_s(model, pmodel);

	return 0;
}

void Vehicle::display()
{
	cout << "*******************************" << endl;
	cout << "License plate no  : " << licensePlateNo << endl;
	cout << "Type              : " << type << endl;
	cout << "Model             : " << model << endl;
	
}