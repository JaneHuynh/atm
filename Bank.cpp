//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Final_Project_2
//  @ File Name : Bank.cpp
//  @ Date : 26/04/2020
//  @ Author : Vy Huynh and Kim Nguyen and Arooj
//
//


#include "Bank.h"

Bank::Bank() : Bank{ "None", {0, "None", 0.0} }
{
	cout << "This bank account is invalid!" << endl;
}

Bank::Bank(string newBankName, Account newBankAccount) : bankName{newBankName}, bankAccount{newBankAccount}
{
}

void Bank::deposit() {
}

void Bank::withdraw() {
}

void Bank::display() {
}

void Bank::setBankName(string newBankName) {
	bankName = newBankName;
}



string Bank::getBankName() {
	return bankName;
}

void Bank::setBankAccount(Account newAccount) {
	bankAccount = newAccount;
}



Account Bank::getBankAccount() {
	return bankAccount;
}

void Bank::addAccount(Account& account)
{
	accountList.push_back(account);
}



std::ostream& operator<<(std::ostream& out, const Bank& bank)
{
	if (bank.accountList.empty())
	{
		out << bank.bankName << " has no accounts right now";
		return out;
	}

	out << bank.bankName << " has accounts: ";
	for (const auto& Account : bank.accountList)
		out << Account.get().getAccountId() << " || ";

	return out;
}