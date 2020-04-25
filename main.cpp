//=============================================================================
//	APPLICATION:	atm2
//	MODULE:			main
//	PURPOSE:
//	AUTHOR(S):		metal
//
//	4/25/2020 7:13:38 PM	Created.
//=============================================================================
#include <iostream>
#include "Account.h"
#include "Customer.h"
#include "Bank.h"
using namespace std;
//-----------------------------------------------------------------------------
//	THE MAIN ENTRY POINT TO THE PROGRAM.
//
//	input:	argc	The number of arguments of the programme.
//			argv	The vector of arguments of the programme.
//	return:	The code of the reason the process was terminated for.
//			The value defaults to zero.
//-----------------------------------------------------------------------------
int main(int argc, char* argv[])
{
	Customer kim{ 123, "Kim" };
	Account kim1{ 1111, "123456", 6500.0 };
	Account kim2{ 2222, "123654", 6.0 };
	kim.addAccount(kim1);
	kim.addAccount(kim2);
	cout << kim << '\n';

	Bank nordea{ "Nordea", kim1 };
	nordea.addAccount(kim2);
	cout << nordea << '\n';

	return 0;
}
