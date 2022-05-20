#include"RegisteredUser"
#include<iostream>
#include"cstring"
using namespace std;


RegisteredUser::RegisteredUser() 
{
	customerId = 0;
	strcpy_s(customerUsername, "");
	strcpy_s(customerPassword, "");
}

RegisteredUser::RegisteredUser(int CID, const char Uname[], const char Pwd[],const char Cname[],const char Cemail[],const char Cnic,int Cno) 
	: UnregisteredUser(Cname,Cemail,Cnic,Cno)
{
	customerId = CID;
	strcpy_s(customerUsername, Uname);
	strcpy_s(customerPassword, Pwd);
	strcpy_s(name, Cname);
	strcpy_s(email, Cemail);
	strcpy_s(nic, Cnic);
	contactNo = Cno;
}

void RegisteredUser::logincredintialValidation()
{

}

void RegisteredUser::addFeedback(Feedback* F)
{

}

void RegisteredUser::addBooking(Booking* B)
{

}

void RegisteredUser::display()
{
	cout << "Customer ID = " << customerId << endl;
	cout << "Customer name = " << name << endl;
	cout << "Customer email = " << email << endl;
	cout << "Customer contact number = " << contactNo << endl;
	cout << "Customer NIC number = " << nic << endl;
}

RegisteredUser::~RegisteredUser() 
{
	cout << "Delete Registerd User details!!!" << endl;
}