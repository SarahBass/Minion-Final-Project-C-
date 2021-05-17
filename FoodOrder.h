/*******************************************************************************
   ___               _   ___         _           _     
  / __\__   ___   __| | /___\_ __ __| | ___ _ __| |__  
 / _\/ _ \ / _ \ / _` |/   // '__/ _` |/ _ \ '__| '_ \ 
/ / | (_) | (_) | (_| / \_//| | | (_| |  __/ |_ | | | |
\/   \___/ \___/ \__,_\___/ |_|  \__,_|\___|_(_)|_| |_|
                                                                                                         
Sarah Bass
Student: 715560
Currently enrolled on C++ 6PM-9PM
Professor Zhen Zhai
Project #4 C++: Minion Food Project
Minion.h File : concrete child class Food Order (parent DeliverOrder.h)
******************************************************************************/
#ifndef FOODORDER_H
#define FOODORDER_H
#include <string>

using namespace std;
class FoodOrder
{

//------PUBLIC AND PRIVATE VARIABLES--------------------
public:
//------OPERATORS-----------------
//bool operator > (const Minion&) const;
//bool operator < (const Minion&) const;
//friend ostream& operator << (ostream&, const hungryMinion&);
//Minion &operator++();


FoodOrder(
string minionName,
int minionMonth,
int minionDay,
int minionYear,
string minionPhonenumber,
string minionDelivery
//string restName == delivery
);
//Minion operator++(int);
//------Public FUNCTIONS---------------
//float getHeight(); 
static void printorderCount();
void setFoodOrder (string minionName, 
int minionMonth,
int minionDay,
int minionYear,
string minionPhonenumber,
string minionDelivery);
//--------------------------------------------------------

private:
 string restaurantName;
 int foodCount;

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

#endif  //FOODORDER_H

/*
inherits from DeliveryOrder with public inheritance

It also has two additional member attributes, restaurantName and foodCount.

FoodOrder will override the printReceipt() function by adding one extra line to the receipt as following:

cout << "\tOrdered Foods: " << foodCount << endl;

FoodOrder :: ~FoodOrder(){
    cout <<  "FoodOrder destroyed.\n" <<endl;
}

the destructor will simply output "FoodOrder destroyed.\n".
 */