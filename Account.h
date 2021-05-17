/*******************************************************************************
   _                             _     _     
  /_\   ___ ___ ___  _   _ _ __ | |_  | |__  
 //_\\ / __/ __/ _ \| | | | '_ \| __| | '_ \ 
/  _  \ (_| (_| (_) | |_| | | | | |_ _| | | |
\_/ \_/\___\___\___/ \__,_|_| |_|\__(_)_| |_|
Sarah Bass
Student ID 715560
Currently enrolled on C++ 6PM-9PM
Professor Zhen Zhai
Project #4 C++: Minion Food Project
Minion.h File : Account
******************************************************************************/
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

using namespace std;
class Account
{

//------PUBLIC AND PRIVATE VARIABLES--------------------
public:
//------OPERATORS-----------------
//bool operator > (const Minion&) const;
//bool operator < (const Minion&) const;
//friend ostream& operator << (ostream&, const hungryMinion&);
//Minion &operator++();

Account(
string minionName,
int minionMonth,
int minionDay,
int minionYear,
string minionPhonenumber,
string minionDelivery,
);
//Minion operator++(int);
//------Public FUNCTIONS---------------
//float getHeight(); 
static void printorderCount();
void setAccount (string minionName, 
int minionMonth,
int minionDay,
int minionYear,
string minionPhonenumber,
string minionDelivery);
//--------------------------------------------------------

private:
string name;
int month;
int day;
int year;
string phonenumber;
string delivery;
float deliveryDistance;
float balance;
static int orderCount;
};

#endif  //ACCOUNT_H

/*1. abstract class DeliveryOrder: Class DeliveryOrder will have a constructor,
 a destructor, and four functions
a.member private attributes:
-customer's name, month, day, year, 
phone number, number of miles for the delivery,
 Member public : total balance of the delivery.
 b.STATIC MEMBERS:
 ordercount - public
 taxRate constant - public = 0.0887
 deliveryRate constant - public = $1.50
c.FUNCTIONS: 
-constant printReceipt() print out the order receipt
cout << "Order Detail:" << "\n";
cout << "\t" << name << "\n";
cout << "\tDate: " << month << "/" << day << "/" << year << "\n";
cout << "\tPhone: " << phone << "\n";
cout << "\tTotal Balance: $" << balance << endl;

-constant getBalance() function return the total balance
balance * (1 + taxRate) + miles * deliveryRate;
-static getOrderCount() function return the orderCount
-pure virtual function VIPdiscount() that will calculate and return the discount for the order.
d. The destructor will output a string "DeliveryOrder destroyed.\n". */