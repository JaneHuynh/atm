#if !defined(_CUSTOMER_H)
#define _CUSTOMER_H
//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Final_Project_2
//  @ File Name : Customer.h
//  @ Date : 25/04/2020
//  @ Author : Vy Huynh and Kim Nguyen and Arooj
//
//
#include "Account.h"
#include <cstdint>
#include <iostream>
#include <functional> // reference_wrapper
#include <string>
#include <vector>
using namespace std;
class Account;
class Customer {
public:
	Customer();
	Customer(int newCustomerId);
	Customer(string valCustomerName);
	Customer(int valCustomerId, string valCustomerName);
	~Customer();
	void setCustomerId(int newCustomerId);
	string getCustomerName() const;
	void addAccount(Account& account);
	friend std::ostream& operator<<(std::ostream& out, const Customer& customer);

	int getCustomerId() const;
	void setCustomerName(string newCustomerName);
private:
	int customerId;
	string customerName;
	
	std::vector<std::reference_wrapper<const Account>> m_account{};
};

#endif  //_CUSTOMER_H
