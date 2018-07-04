/*

//	Name: Art Pricer
//	Author: Jake Meredith
//	Version: 1.0.3.0
//	Description: A simple program to calculate the retail price of an art piece.

*/

#include <iostream>
#include "APFunctions.h"
#include "APVars.h"
#include "Piece.h"
using namespace std;

int main() {
	
	// Startup message
	startUp();
	
	do {
	// Collects information about the piece
	pieceInfo();
	
	// Calculating variables
	calculation();
	
	// Final batch of print statements.
	report(calculation());
	
	// This will pause the program at the end, otherwise it would exist before you could read it.
	system("pause");	
	} while (true);
	
	
	
	
	return 0;
}

// Functions
void startUp() {
	cout << "======================" << endl;
	cout << "      Art Pricer" << endl;
	cout << "   By Jake Meredith" << endl;
	cout << "======================" << endl << endl;
}

void pieceInfo() {
	cout << endl << "Your hourly wage?: " << flush;
	cin >> hourlyPay;
	cout << endl;
	
	cout << "Time spent (in decimal hours)?: " << flush;
	cin >> hours;
	cout << endl;
	
	cout << "Weight of metal (in grams)?: " << flush;
	cin >> metalWeight;
	cout << endl;
	
	cout << "Metal price per gram?: " << flush;
	cin >> metalPricePGram;
	cout << endl;
	
	cout << "Cost of additional materials?: " << flush;
	cin >> materialCost;
	cout << endl;
	
	cout << "How much markup (in percent)?: " << flush;
	cin >> markUp;
};

double calculation() {
	double wages = hourlyPay * hours;
	double markUpDec = markUp / 100;
	studioRentDays = (studioRent / 30);	
	double expenses = studioRentDays + fuel + materialCost + (metalWeight * metalPricePGram);
	double income = (markUpDec * wages) + wages;
	double finalPrice = income + expenses;
	return finalPrice;
}

void report(double final) {
	cout << "\n\n";
	cout << "=============================" << endl;
	cout << "Hourly wage: $" << hourlyPay << endl;
	cout << "Markup: " << markUp << "%" << endl;
	cout << "Material Cost: $" << materialCost << endl;
	cout << "Studio Rent per Day: $" << studioRentDays << endl;
	cout << "=============================" << endl;
	cout << "You should charge: $" << final << endl;
	cout << "=============================" << endl << endl;
};
