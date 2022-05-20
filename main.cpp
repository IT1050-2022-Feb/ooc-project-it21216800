#include"UnRegisteredUser.h"
#include"RegisteredUser.h"
#include"Feedback.h"
#include"Booking.h"
#include"CancelBooking.h"
#include"Payment.h"
#include"OnlineTransfer.h"
#include"Cash.h"
#include"driver.h"
#include"Vehicle.h"

#include<iostream>
#include"cstring"

using namespace std;

int main() {
  
UnRegisteredUser* nUser;
nUser = new UnRegisteredUser("Kamal");//create unreguser object
nUser->setCustomerDetails("Kamal", "200145630V");//set details to 
attributes
nUser->displayUserDetails();//display details
--------------------------------------------------------------
RegisteredUser* Ruser;
Ruser = new RegisteredUser(001, "Shakya123", "258964*SKY", "Shakya 
Abiman", "shakya123@gmail.com", "200014789652V", 94716425783);
Ruser->display();
delete Ruser;
--------------------------------------------------------------
Feedback* feedB;
feedB = new Feedback(101, "shakya123@gmail.com", "I am very happy about 
the service");
feedB->displayFeedback();
delete feedB;
--------------------------------------------------------------
Booking book;
book.Booking1(123, "Hasiru");
book.setBookingDetails("Matara", "Galle", "2022/06/05", "6.34", "van");
--------------------------------------------------------------
CancelBooking CB;
CB.cancelBooking("1234", "Kasun");
CB.display();
--------------------------------------------------------------
Payment* newpay;
newpay = new Payment(05, 5000.00, "Monday");//create payment object
newpay->setPaymentDetails(4000.00, 3500.00);//set details to attributes
newpay->displayPayDetails();//display details
--------------------------------------------------------------
OnlineTransfer onf;
onf.CardDetails("Debit","1234 6598 5632 5478", "27/04", 540.0);
onf.displayDiscount();
onf.calcPayAmount();
onf.displayCardDeatails();
--------------------------------------------------------------
float Cash1(500);
void cashRecept();
void cashBalance();
--------------------------------------------------------------
driver dr1;
 dr1.driver1("Wimal", 123);
 dr1.rideDetails("Colombo", "Kottawa", 123);
 dr1.recievePayment();
--------------------------------------------------------------
Vehicle Vh;
 Vh.Vehicle1("CAB-5465", "Car", "2015");
Vh.display();
--------------------------------------------------------------
return 0;
}