// Ashley Allan, 2228 CS 2010 Section 1004, MOWeFri 11:30am-12:20pm

//Program 1:Movie Tickets, File:AllanA_pgm1, Due:09/12/2022

/*
Purpose: To calculate the theater's gross ticket sales, net box office profit, and and the amount paid to the distributor for a movie.
Input: The name of the movie, amount of adult tickets sold, and amount of child tickets sold.
Processing: After calculating the cost of all tickets bought (gross ticket sales), the amount kept by the movie distributor and movie theater is calculated.
Output: Gross ticket sales, amount paid to the distributor, and the theater's net profit.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string movieName; // Holds the name of the movie

	int amountAdultTickets; // Holds the amount of adult tickets sold (user inputs this value)
	int amountChildTickets; // Holds the amount of child tickets sold (user inputs this value)

	const double adultTicketPrice = 10.00; // Holds the constant price of the adult ticket
	const double childTicketPrice = 6.00; // Holds the constant price of the child ticket 

	double grossTicketSales; // Holds the calculated value of gross ticket sales
	double theaterNetProfit; // Holds the calculated value of the theater's net profit
	double amountPaidDistributor; // Holds the calculated value of the amount paid to the distributor

	cout << "Enter the movie name: " << endl; // Prompts user to enter the name of the movie (string)
	cin >> movieName; // Reads and stores the user's input for the name of the movie 

	cout << "How many adult tickets were sold?: " << endl; // Prompts user to enter the amount of adult tickets sold (int)
	cin >> amountAdultTickets; // Reads and stores user input for the amount of adult tickets sold 

	cout << "How many child tickets were sold?: " << endl; // Prompts user to enter the amount of child tickets sold (int)
	cin >> amountChildTickets; // Reads and stores user input for the amount of adult tickets sold 

	grossTicketSales = (amountAdultTickets * adultTicketPrice) + (amountChildTickets * childTicketPrice); 
	// ^Calculates the gross ticket sales from user input and constant prices of adult and child tickets^
	cout << "Gross Ticket Sales: $" << fixed << setprecision(2) << grossTicketSales << endl; // Outputs the calculation of gross ticket sales 

	//UNFINISHED CODE
	theaterNetProfit = (grossTicketSales * 20) / 100;
	cout << "Theater Net Profit: $" << theaterNetProfit << endl; 

	amountPaidDistributor = (grossTicketSales * 80) / 100;
	cout << "Amount Paid to the Distributor: $" << amountPaidDistributor << endl;

	return 0;
}