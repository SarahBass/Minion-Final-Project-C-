/*********************************              _       
 _ __ ___   __ _(_)_ __  
| '_ ` _ \ / _` | | '_ \ 
| | | | | | (_| | | | | |
|_| |_| |_|\__,_|_|_| |_|    

Sarah Bass
Student ID: 715560
Currently enrolled on C++ 6PM-9PM
Professor Zhen Zhai
Project #4 C++: Minion Food Delivery
Main.cpp File
-----------------------------------
---------Contents------------------
Part 1: Construct three accounts: 
one constant owner account: Stuart
one VIP account: Kevin  
one regular account: Bob
(Using DeliveryOrder pointer)
Part 2: Kevin creates an order
a.addDrink() function
b.InvalidInput exception
c.cause() function
d.printReceipt() function
e.getBalance() function
f. applyDiscount() function
Part 3: Stuart creates an order
a.addFood() function
b.InvalidInput exception
c.cause() function
d.printReceipt() function
e.getBalance() function
f. applyDiscount() function
Part 4: Bob Creates order, 
and he cancels the order.
a.addFood() function
b.InvalidInput exception
c.cause() function
d.printReceipt() function
e.getBalance() function
f.applyDiscount() function
Part5:output ordercount
Part 6: invoke destructors
-----------------------------------
-----------------------------------
***********************************/
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

int main(){
string name;
int month;
int day;
int year;
string phoneNumber;
string delivery;
string drinkname;


//enter in data to private variables in Minion.h constructor   
cout<< "Enter information for order(name, date[month day year], phonenumber, delivery, food/drink order): " << endl;

cin >> name;
DeliveryOrder minion1(name); 
cout << name; //username from account " placing order.\n".
cin >> month >> day >> year >> phoneNumber >> delivery;
DeliveryOrder minion1 (month, day, year, phoneNumber, delivery);
//Print Invalid Inputs
/*
 try{
     function_to_throw();
 }
 catch (InvalidInput &e)   
    {
        cout << ""
    }
    
  
*/

//printReceipt();
// print number of items function();
//getBalance();
//cout << "Discounted Balance: " << getbalance() - VIPdiscount() <<endl;

//repeat the above for Minion2 and Minion3, no need for loops
//printorderCount();
//activate destructors and print statements
//destroy accounts
 return 0;
}
/*
EXAMPLE INPUT:
Kevin
11/2/2020
123-456-0000
Bar Pa Tea
Matcha Lemonade
Lemon Green Tea
Brown Sugar Oolong Tea
Brown Sugar Oolong Tea
Iron Goddess

EXAMPLE OUTPUT
___________________________________________________

Kevin placing order.
Invalid input [Iron Goddess].
Not serving requested drinks. Drink order ignored.

Order Detail:
        Kevin
        Date: 11/2/2020
        Phone: 123-456-0000
        Total Balance: $21.75
        Ordered Drinks: 4
Balance: $28.9
Discounted Balance: $27.4


Stuart placing order.
Order Detail:
        Stuart
        Date: 11/2/2020
        Phone: 123-456-1111
        Total Balance: $85
        Ordered Foods: 3
Balance: $105
Discounted Balance: $10.5


Bob decided to log in to his account and see whether he can afford ordering the same order as Stuart.
Order Detail:
        Stuart
        Date: 11/2/2020
        Phone: 123-456-1111
        Total Balance: $85
        Ordered Foods: 3
Balance: $105
Discounted Balance: $105
Bob upset, cancelling order :(

Total order placed: 2

FoodOrder destroyed.
DeliveryOrder destroyed.
BobaOrder destroyed.  
DeliveryOrder destroyed.
Account removed.
Account removed.
Account removed.

*/