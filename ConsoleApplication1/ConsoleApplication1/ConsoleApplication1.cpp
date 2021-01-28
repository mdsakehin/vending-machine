#include"stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout << "Welcome to Salekin's Vending machine" << endl << endl;//welcome message to user.
	cout << "Please have a look at the item list." << endl << endl;//double endl command is used to give proper spacing between each line.
	cout << "Input the correct code to receive your desired item" << endl<<endl;
	cout << "The serial number at the beginning of each item is the code number for the item" << endl << endl;//starting from this line the console shows a list of items available for purchase including their price and code.
	cout << "The price of each item is shown below the respective item." << endl << endl;
	cout << "0)Lays Chilli Chips" << "   " << "1)Lacnor Milk" << "   " << "2)Mars Bar" << "        " << "3)Chocolate croissant"  << endl;//list of items
	cout << "Dhs: 1.00          " << "   " << "Dhs:1.00     " << "   " << "Dhs: 3.00   " << "      " << "Dhs:2.00  " << endl << endl;
	cout << "4)Oman Chips" << "          " << "5)Sando Wafer" << "   " << "6)Rulokat Rolls" << "   " << "7)Masafi 1 LTR"  << endl;
	cout << "Dhs: 1.00          " << "   " << "Dhs:2.00     " << "   " << "Dhs:2.00   " << "       " << "Dhs:2.00  " << endl << endl;
	cout << "8)Mountain Dew" << "        " <<"9)Snickers Bar"<<" " << "10)Capri-Sun"<< "      " <<"11)Kit-Kat" << endl;
	cout << "Dhs: 3.00          " << "   " <<"Dhs:3.00     " << "   " << "Dhs: 2.00   " << "      " <<"Dhs:2.00  " << endl << endl;//there are no requirements for this these many cout statements however they make it easier for me to align all the items.
	cout << " Item Code: ";
	string items[] = {" Lays Chilli Chips" ,"Lacnor Milk","Mars Bar","Chocolate croissant","Oman Chips" ,"Sando Wafer" ,
		"Rulokat Rolls" ,"Masafi 1 LTR" ,"Mountain Dew","Snickers Bar","Capri - Sun ","Kit - Kat "};//this array consists of all available items in the vending machine
	int price[] = { 1,1,3,2,1,2,2,2,3,3,2,2 };//this array includes the price of each item placed in respect to the items in the 'item' array.
	int itemcode;//this variable takes the code of the item wanted by the user/
	cin >> itemcode;//the first input entered by the user in this program is the item code and as such this controls the flow of the program.
	double money;//this variable takes the money entered by the user to purchase any items
	while (itemcode < 0 || itemcode>11)//this while loop limits the code of the machine so that the user may not enter any invalid codes.
	{
		cout << "Input not recognized, Please enter a valid code: ";
		cin >> itemcode;//promts user to input code again if an invalid code has been entered.
	}

	if (itemcode >= 0 || itemcode <= 11)//this loop runs when the user enters the correct code of an item
	{
		cout << "You have chosen " << items[itemcode] << " " << endl;//shows the user what item they have chosen
		cout << "The price of " << items[itemcode] << " is " << price[itemcode] << endl;//this statement shows the price of the chosen item
		cout << "Please enter the money in the right slot to receive your item." << endl;//prompts the user to enter money
		cin >> money;
		
		while (money < price[itemcode]) {//checks if enough money to buy the item has been entered.This loop executes when the money entered is insufficient to buy the chosen item
			cout << "The money you have entered is not sufficient, please enter the right amount as displayed in the item list" << endl;
			cin >> money;
		} 
		cout << "You have inserted " << money << " dirhams" << endl;//shows the user how much money they entered as confirmation.
		if (money >= price[itemcode])//this if statement runs when the money entered is equal to or more than the price of the item chosen.
		{
			double balance = money - price[itemcode];//calculates how much change the user may receive.
			cout << items[itemcode] << " has been dispensed,you may now collect it.";//informs user they may collect their item
			cout << "You may collect your change from the box labelled as 'Change'" << endl//notifies user where to collect the change
				<< "Your avalaible change is " << balance <<" dhs."<< endl;//informs of the available balance.
		}
		
	}
		
	cin.get();
}
