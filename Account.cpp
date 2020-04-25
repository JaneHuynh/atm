//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Final_Project_2
//  @ File Name : Account.cpp
//  @ Date : 25/04/2020
//  @ Author : Vy Huynh and Kim Nguyen and Arooj
//
//


#include "Account.h"

Account::Account() : Account{0, "None", 0.0} {
	cout << "Account has been created missing an ID, a password and balance." << endl;
}

Account::Account(int newAccountId) : Account{newAccountId, "None", 0.0}
{
	cout << "Account has been created missing a password and balance." << endl;
}

Account::Account(string newAccountPassword) : Account{0, newAccountPassword, 0.0}
{
	cout << "Account has been created missing an ID and balance." << endl;
}

Account::Account(double newAccountBalance) : Account{0, "None", newAccountBalance}
{
	cout << "Account has been created missing an ID and password." << endl;
}

Account::Account(int newAccountId, string newAccountPassword) : Account{newAccountId, newAccountPassword, 0.0}
{
	cout << "Account has been created missing a balance." << endl;
}

Account::Account(int newAccountId, double newAccountBalance) : Account{newAccountId, "None", newAccountBalance}
{
	cout << "Account has been created missing a balance." << endl;
}

Account::Account(string newAccountPassword, double newAccountBalance) : Account{0, newAccountPassword, newAccountBalance}
{
	cout << "Account has been created missing a balance." << endl;
}

Account::Account(int newAccountId, string newAccountPassword, double newAccountBalance) : accountId{ newAccountId }, accountPassword { newAccountPassword }, accountBalance{ newAccountBalance }
{
	cout << "Account has been created successfully." << endl;
}

Account::~Account() {
}

void Account::setAccountId(int newAccountId) {
	accountId = newAccountId;
}

int Account::getAccountId() const
{
	return accountId;
}

void Account::setAccountBalance(double newAccountBalance) {
	accountBalance = newAccountBalance;
}

double Account::getAccountBalance() const
{
	return accountBalance;
}


void Account::setAccountPassword(string newAccountPassword) {
	accountPassword = newAccountPassword;
}

string Account::getAccountPassword() const
{
	return accountPassword;
}
