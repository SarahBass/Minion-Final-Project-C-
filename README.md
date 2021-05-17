# Minion-Final-Project-C-

Food Ordering System
This image is currently unavailable
Stuart, Kevin, and Bob have arrived at New York and they have discovered New York food! No more bananas for them. They want boba teas and food.

Unfortunately, they can't dine in at the restaurants due to COVID. They decided to order food from their phone using this food ordering system that you are writing for them. 
 

Exception
The system will have one exception class InvalidInput. The message for the exception with a string parameter s is 

-------------------------------------------------------

    "Invalid input [" + s + "]."

-------------------------------------------------------

And the exception class has one void member function cause() that will output the message.

Please initialize the private string variable message with initialization list on the constructor of the exception.

Classes
You will have a total of four classes for this system. You can write them all in one single file or you can separate them in header files and source files. The four classes include an abstract class DeliveryOrder, two concrete classes BobaOrder and FoodOrder inherited from the DeliveryOrder class, and one more class Account.

-------------------------------------------------------
/1. DeliveryOrder
-------------------------------------------------------

Class DeliveryOrder will have the following member attributes: customer's name, month, day, year, phone number, number of miles for the delivery, and total balance of the delivery. Class DeliveryOrder should also have three static members including the orderCount, which we use to calculate how many orders are placed, and two constant variables taxRate and deliveryRate. All of these attributes are private to class DeliveryOrder, except the total balance which should only be directly accessible by the inherited classes. You can have our constant variables be public, given that they are constant it's relatively safe for them to be public.

Class DeliveryOrder will have a constructor, a destructor, and four functions. The constructor will initialize customer's name, date of the order (month, day, and year), phone number, and miles of the delivery, initialize the balance to be 0, and increase the orderCount so that we can count how many orders are created. The destructor will output a string "DeliveryOrder destroyed.\n". The four functions include a constant printReceipt() function that will print out the order receipt, a constant getBalance() function that will return the total balance, a static getOrderCount() function that will return the orderCount, and a pure virtual function VIPdiscount() that will calculate and return the discount for the order.

Here I've provided the content of the printReceipt() function for you so you don't need to worry about the output format.

-------------------------------------------------------

    cout << "Order Detail:" << "\n";

    cout << "\t" << name << "\n";

    cout << "\tDate: " << month << "/" << day << "/" << year << "\n";

    cout << "\tPhone: " << phone << "\n";

    cout << "\tTotal Balance: $" << balance << endl;

-------------------------------------------------------

The getBalance() function should calculate balance considering the tax and delivery fee. Here's the formula:



    balance * (1 + taxRate) + miles * deliveryRate;



Make sure you initialize the static variables taxRate to be 0.0887 and the deliveryRate to be $1.5 for the class.

-------------------------------------------------------
/2. BobaOrder
---------------------------------------------------------

BobaOrder should inherit from DeliveryOrder with public inheritance. It has two additional member attributes, shopName and drinksCount. The constructor of BobaOrder should takes the same parameters as DeliveryOrder's constructor and an extra string to initialize the member attribute shopName. The destructor will simply output "BobaOrder destroyed.\n".

BobaOrder will override the printReceipt() function by adding one extra line to the receipt as following:

cout << "\tOrdered Drinks: " << drinksCount << endl;
Make sure you call the printReceipt() function of the DeliveryOrder class instead of rewriting the same piece of code again.

It will also overwrite the VIPdiscount() function as it's required for pure virtual functions. The discount function will return 0.85 if the number of drinks one order is greater than 10, 0.9 if greater than 5, 0.95 if greater than 2, and 1 if the drinks order is less than or equal to 2.

BobaOrder also has a new function addDrink() which will take in the name of the drink, a boolean default to true indicating whether one wants to add boba to the drink, and a count default to 1 indicating how many of the same drink one wants to order. There are three drinks available for people to order from:

-------------------------------------------------------
    
    Matcha Lemonade: $5.5

    Brown Sugar Oolong Tea: $5

    Lemon Green Tea: $5.25

-------------------------------------------------------

You will do string comparison to match the drinks and if the passed in drink doesn't match any of the available drinks, throw the InvalidInput exception and passed in the drink name. Adding boba costs $1, and make sure you multiply the count in case one wants to order more than one of the same drink. For example, if Kevin orders 2 Matcha Lemonades with bobas, the cost will be ($5.5 + $1) * 2.

At the end of the function make sure you add the number of drinks ordered to the drinksCount and also add the cost of this drink order to the total balance of the order.

-------------------------------------------------------
/3. FoodOrder
-------------------------------------------------------

FoodOrder is similar to BobaOrder that it inherits from DeliveryOrder with public inheritance. It also has two additional member attributes, restaurantName and foodCount. The constructor of FoodOrder takes the same parameters as DeliveryOrder's constructor and also takes in an extra string to initialize the member attribute restaurantName. The destructor will simply output "FoodOrder destroyed.\n".

Similarly to BobaOrder, FoodOrder will override the printReceipt() function by adding one extra line to the receipt as following:

-------------------------------------------------------

    cout << "\tOrdered Foods: " << foodCount << endl;

-------------------------------------------------------

Make sure you call the printReceipt() function of the DeliveryOrder class instead of rewriting the same piece of code again.

It will also overwrite the VIPdiscount() function as it's required for pure virtual functions. The discount function will return 0.85 if the balance(without tax and shipping cost) of the order is greater than 50, 0.9 if greater than 30, 0.95 if greater than 20, and 1 if the order balance is less than or equal to 20.

FoodOrder also has a new function addFood() which will take in the name of the main course ordered, an integer default to 0 indicating how many sides one wants to order, and a boolean default to false indicating whether one wants to add soup to the order. There are four meals available for people to order from:

-------------------------------------------------------

    Bone-in Ribeye: $32

    Rack of Lamb: $28

    Grilled Salmon: $24

    Beyond Meat Burger: $22

-------------------------------------------------------

You will do string comparison to match the meal and if the passed in meal doesn't match any of the meal listed on the menu, throw the InvalidInput exception with meal name as the parameter. Adding soup costs $0.5, and each side costs $1. For example, if Bob orders the lamb with two sides and with soup, the cost will be $28 + (2 * $1) + $0.5.

At the end of the function make sure you update the foodCount and add the cost of this food order to the total balance of the order.


-------------------------------------------------------
/4. Account
-------------------------------------------------------

The account class will have two private attributes: username and status. The constructor will takes in a string to initialize the username and a string default to empty string "" to initialize the status. The status is optional but can be "VIP", "Owner", or an empty string "" which indicates it's a regular account. The destructor will output "Account removed.\n". We will have one getter function getStatus to return the status of the account. Remember all getter functions should be constant.

Function
We will have one function for this system. The function is applyDiscount() which will take in a DeliveryOrder pointer and a constant reference account. The function would return a the discounted balance of the order that's passed in. For example, if the balance is $100 and the discount is 0.1, then this function will return the float 10 which is 100 * 0.1.

The applyDiscount() function will check the account status to determine how to apply the discount. If the account status is "Owner", it will always apply 90% off to the order, so the new balance returned will be (0.1 * total balance). If the account status is "VIP", it will trigger the corresponding VIPdiscount() function of the order depending on whether it's a BobaOrder or a FoodOrder with dynamic binding. If the account status is an empty string, meaning it's a regular account, no discount will be applied and the total balance of the order will remain unchanged. The updated balance will be returned from the function.

Main Function
Finally, it's our main function. We first have three accounts, one constant owner account, one VIP account, and one regular account. Stuart appears to be the secret owner of all the restaurants and boba shops of New York, he will have an owner account the system created for him and he can't change the account, so it's a constant account. The account username will be "Stuart" and the status will be "Owner". Kevin appears to be the secret VIP of all the restaurants and boba shops of New York, and he created his VIP account with username "Kevin" and status "VIP". Bob appears to be a regular customer, who's not aware of Kevin and Stuart's secret identities, created his regular account with username "Bob". We will also have a DeliveryOrder pointer that we will later use to point to different orders.

Kevin starts to order boba drinks for everyone. Let's first output "Kevin placing order.\n".

He creates his order with his name "Kevin", date 3/2/2021, phone number 123-456-0000. He's placing order at the shop "Bar Pa Tea" and looks like the miles for the delivery is 10.4 miles.

Kevin added his first drink order "Matcha Lemonade" with all default choices for this drink, then his second drink "Lemon Green Tea" with no boba, and two more "Brown Sugar Oolong Tea" with no boba. Kevin added another order "Iron Goddess" without knowing that the shop isn't serving this drink anymore.

Because each of the addDrink() function could cause exception, let's put all the addDrink() function calls in a try catch block. Catch the InvalidInput exception by reference and trigger the cause() function of the exception. Then output


-------------------------------------------------------

"Not serving requested drinks. Drink order ignored.\n\n"

-------------------------------------------------------
before we end the catch block.

Now the system should print out his receipt. We first need to call printReceipt() function to print out the receipt. Make sure you set cout precision to be 5. Then we output the total balance by calling the getBalance() function. The format should be similar to "Balance: $99.99\n". Don't forget the dollar sign. Then we want to output the discounted balance like this "Discounted Balance: $88.88\n". We get the discounted balance by having our DeliveryOrder pointer pointing to Kevin's order and trigger the applyDiscount() function with Kevin's account. Finally we finished the receipt by having two addition new lines.

Stuart then wants to order foods for everyone. Let's again output "Stuart placing order.\n" first.

Stuart creates his order with name "Stuart", same date as Kevin's order. His phone number is 123-456-1111. He's ordering from the restaurant "Trauts Steak House" which is 25.5 miles from their place. He's ordering a "Bone-in Ribeye" with two sides and soup, a "Grilled Salmon" with one side no soup, and a "Beyond Meat Burger" with three sides and soup.

Similarly here that each of the addFood() function could cause exception, let's put all the addFood() function calls in a try catch block. Catch the InvalidInput exception by reference and trigger the cause() function of the exception. Then output

-------------------------------------------------------

    "Not serving requested food. Food order ignored.\n\n"

-------------------------------------------------------

before we end the catch block.

Now the system print out his receipt. Similarly we first call printReceipt() to print out the receipt for his order. Then we output the total balance by calling getBalance() function. Same format as indicated above. Then we output the discounted balance using the same format as above as well. You would need to get the discounted balance by calling the applyDiscount() function as well. And we finish the receipt with two extra new lines.

Now Bob found out that Stuart get such good pricing on food ordering, he's wondering whether he can get that too. Let's output "Bob decided to log in to his account and see whether he can afford ordering the same order as Stuart.\n".

Bob is trying to place the same order, so he's using the same order object that Stuart created. We can start by printing the receipt for Bob. We can directly call the printReceipt() function from the order Stuart created. Then we output the total balance as before by calling getBalance() function. Followed by printing out the discounted balance but this time we pass in Bob's account to the applyDiscount() function. Keep the same format as before when you print. Bob sees the discounted balance and he's upset that he needs to pay so much. Therefore he decided not to place the order and have Stuart do it. Therefore the system will output

-------------------------------------------------------

    "Bob upset, cancelling order :(\n\n"

-------------------------------------------------------

Finally, we will output the number of order placed. The format is like this "Total order placed: 2.\n\n". You get the number of order placed by calling the getOrderCount() function from DeliveryOrder.

--------------------------------------------
Expected Output
--------------------------------------------
Here's the expected output.

    Kevin placing order.

    Invalid input [Iron Goddess].

    Not serving requested drinks. Drink order ignored.

Order Detail:

        Kevin
        
        Date: 3/2/2021
        
        Phone: 123-456-0000
        
        Total Balance: $21.75
        
        Ordered Drinks: 4
        
        Balance: $39.279
        
        Discounted Balance: $37.315


Stuart placing order.

Order Detail:
        
        Stuart
        
        Date: 3/2/2021
        
        Phone: 123-456-1111
        
        Total Balance: $85
        
        Ordered Foods: 3
        
        Balance: $130.79
        
        Discounted Balance: $13.079


Bob decided to log in to his account and see whether he can afford ordering the same order as Stuart.

Order Detail:

        Stuart
        
        Date: 3/2/2021
        
        Phone: 123-456-1111
        
        Total Balance: $85
        
        Ordered Foods: 3
        
        Balance: $130.79

        Discounted Balance: $130.79

Bob upset, cancelling order :(

      Total order placed: 2

      FoodOrder destroyed.

      DeliveryOrder destroyed.

      BobaOrder destroyed.

      DeliveryOrder destroyed.

      Account removed.

      Account removed.

      Account removed.

----------------------------------

Submission:

You can write everything in one cpp file and upload one single file, or you can separate them into multiple class files with header and source files. Please include proper documentation as we've been doing for all other projects. Make sure you name your functions as required and only use what we've covered in class to finish this assignment.
