#include "OnlineTransfer.h"

#include <iostream>

#include<cstring>

using namespace std;

int OnlineTransfer::CardDetails(const char cType[], const char cNo[], const char exDate[], float cDis)

{
		strcpy_s(cardType,cType);

		strcpy_s(cardNo, cNo);

		strcpy_s(expiraryDate, exDate);

		discount = cDis;

		return discount;

 }

void OnlineTransfer:: displayDiscount()
{

}

void OnlineTransfer::calcPayAmount()
{

}

void OnlineTransfer::displayCardDeatails()
{
	cout <<"-----------------------------------" << endl;

	cout << endl;

	cout <<"Card Type     : " << cardType << endl;

	cout << "Card Number   : " << cardNo << endl;

	cout << "Expiry  Date  : " << expiraryDate << endl;

	cout << "Discount      : Rs." << discount << endl;

	cout << endl;

	cout << "**********************************" << endl;
}
