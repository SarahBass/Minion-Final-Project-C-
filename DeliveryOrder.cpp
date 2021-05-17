/****************************************************************************
 _                 _                           _        _   _             
(_)_ __ ___  _ __ | | ___ _ __ ___   ___ _ __ | |_ __ _| |_(_) ___  _ __  
| | '_ ` _ \| '_ \| |/ _ \ '_ ` _ \ / _ \ '_ \| __/ _` | __| |/ _ \| '_ \ 
| | | | | | | |_) | |  __/ | | | | |  __/ | | | || (_| | |_| | (_) | | | |
|_|_| |_| |_| .__/|_|\___|_| |_| |_|\___|_| |_|\__\__,_|\__|_|\___/|_| |_|
            |_|                                                           
                                                       
Sarah Bass
Student ID: 715560
Currently enrolled on C++ 6PM-9PM
Professor Zhen Zhai
Project #4 C++: Minion Food Project
constructor file . cpp
****************************************************************************/
#include <stdio.h> 
#include <iostream> 
#include <string>  
#include <fstream> 
#include <iomanip> 
#include <cmath> 
#include "DeliveryOrder.h"
#include "BobaOrder.h"
#include "FoodOrder.h"
#include "Account.h"
#include "InvalidInput.h"
using namespace std;

int DeliveryOrder :: orderCount;
//constructor
DeliveryOrder :: DeliveryOrder(
string minionName,
int minionMonth,
int minionDay,
int minionYear,
string minionPhonenumber,
string minionDelivery){
setDeliveryOrder(string minionName, 
int minionMonth,
int minionDay,
int minionYear,
string minionPhonenumber,
string minionDelivery);
}
//setter public to private
void DeliveryOrder  :: setDeliveryOrder (string minionName, 
int minionMonth,
int minionDay,
int minionYear,
string minionPhonenumber,
string miniondelivery){
    name = minionName;
    month = minionMonth;
    day = minionDay;
    year = minionYear;
    phonenumber = minionPhonenumber;
    delivery = minionDelivery;
DeliveryOrder :: orderCount++;
}
//printReceipt() function
/*
cout << "Order Detail:" << "\n";
cout << "\t" << name << "\n";
cout << "\tDate: " << month << "/" << day << "/" << year << "\n";
cout << "\tPhone: " << phone << "\n";
cout << "\tTotal Balance: $" << balance << endl;
*/
/*
getBalance() function 
balance * (1 + taxRate) + miles * deliveryRate;
Make sure you initialize the static variables taxRate to be 0.0887 and the deliveryRate to be $1.5 for the class.
*/
//print minion count from static member
void DeliveryOrder::printorderCount() {
 
  cout << orderCount << " minions created." << endl;
}
void function_to_throw(){
    if("something's wrong")
    throw InvalidInput();
}