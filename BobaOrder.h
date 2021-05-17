/*******************************************************************************
   ___       _             ___         _           _     
  / __\ ___ | |__   __ _  /___\_ __ __| | ___ _ __| |__  
 /__\/// _ \| '_ \ / _` |/   // '__/ _` |/ _ \ '__| '_ \ 
/ \/  \ (_) | |_) | (_| / \_//| | | (_| |  __/ |_ | | | |
\_____/\___/|_.__/ \__,_\___/ |_|  \__,_|\___|_(_)|_| |_|
                                                         
Sarah Bass
Student ID: 715560
Currently enrolled on C++ 6PM-9PM
Professor Zhen Zhai
Project #4 C++: Minion Food Project
Minion.h File : Concrete child class Boba Order (Parent Delivery Order.h)
******************************************************************************/
#ifndef BOBAORDER_H
#define BOBAORDER_H
#include <string>
#include "DeliveryOrder.h"
using namespace std;
class BobaOrder :: public DeliveryOrder {

//------PUBLIC AND PRIVATE VARIABLES--------------------
public:
//------OPERATORS-----------------

BobaOrder(
string minionName,
int minionMonth,
int minionDay,
int minionYear,
string minionPhonenumber,
string minionDelivery
//string shopName; == minionDelivery
);
//Minion operator++(int);
//------Public FUNCTIONS---------------
//float getHeight(); 
static void printorderCount();
void setBobaOrder (string minionName, 
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

};

#endif  //BOBAORDER_H

/*BobaOrder should inherit from DeliveryOrder with public inheritance. 
a.member attributes, shopName and drinksCount. 
b. The constructor of BobaOrder should takes the same parameters as DeliveryOrder's constructor
c. BobaOrder will override the printReceipt() function by adding one extra line to the receipt as following:
cout << "\tOrdered Drinks: " << drinksCount << endl;
--Make sure you call the printReceipt() function of the DeliveryOrder class instead of rewriting the same piece of code again. 
It will also overwrite the VIPdiscount() function as it's required for pure virtual functions. 
The discount function will return 0.85 if the number of drinks one order is greater than 10, 0.9 
if greater than 5, 0.95 if greater than 2, and 1 if the drinks order is less than or equal to 2.
d. You will do string comparison to match the drinks and if the passed in drink doesn't match any of the available drinks,
 throw the InvalidInput exception and passed in the drink name. Adding boba costs $1, and make sure you multiply the count
  in case one wants to order more than one of the same drink. For example, if Kevin orders 2 Matcha Lemonades with bobas, 
  the cost will be ($5.5 + $1) * 2.

At the end of the function make sure you add the number of drinks ordered to the drinksCount and also add the cost of this 
drink order to the total balance of the order.



d.The destructor will simply output "BobaOrder destroyed.\n"

FoodOrder :: ~BobaOrder(){
    cout <<  "BobaOrder destroyed.\n" <<endl;
}
Matcha Lemonade: $5.5
Brown Sugar Oolong Tea: $5
Lemon Green Tea: $5.25



.*/