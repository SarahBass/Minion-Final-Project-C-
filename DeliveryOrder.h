/*******************************************************************************
    ___     _ _                                    _                 _     
   /   \___| (_)_   _____ _ __ _   _  ___  _ __ __| | ___ _ __      | |__  
  / /\ / _ \ | \ \ / / _ \ '__| | | |/ _ \| '__/ _` |/ _ \ '__|     | '_ \ 
 / /_//  __/ | |\ V /  __/ |  | |_| | (_) | | | (_| |  __/ |     _  | | | |
/___,' \___|_|_| \_/ \___|_|   \__, |\___/|_|  \__,_|\___|_|    (_) |_| |_|
                               |___/                                       
Sarah Bass
Student ID: 715560
Currently enrolled on C++ 6PM-9PM
Professor Zhen Zhai
Project #4 C++: Minion Food Project
Minion.h File : DeliveryOrder : Abstract Base Class
******************************************************************************/
#ifndef DELIVERYORDER_H
#define DELIVERYORDER_H
#include <string>

using namespace std;
class DeliveryOrder
{

//------PUBLIC AND PRIVATE VARIABLES--------------------

//------OPERATORS-----------------
//bool operator > (const Minion&) const;
//bool operator < (const Minion&) const;
//friend ostream& operator << (ostream&, const hungryMinion&);
//Minion &operator++();
protected: 
 DeliveryOrder(
string minionName,
int minionMonth,
int minionDay,
int minionYear,
string minionPhonenumber,
string minionDelivery
);
//Minion operator++(int);
//------Public FUNCTIONS---------------
//float getHeight(); 
static void printorderCount();
void setDeliveryOrder (string minionName, 
int minionMonth,
int minionDay,
int minionYear,
string minionPhonenumber,
string minionDelivery);
//------private Variables---------------


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

//------protected Variables---------------



};

#endif  //DELIVERYORDER_H
//if getter functions are not constant they will not work
//see CONST GETTER Slide on powerpoint



//you can see default values in header files
//see Class powerpoint regarding destructors
//example: Account(string accountName, float initialBalance = 0.0);) 
// constructor Account();
// ~ destroys ~Account(); is the destructor


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