// Drew Childs, Lab 03, 2/6/2020

#include <iostream>
using namespace std;

int main() {
	double combined_total = 0;
	int day;

	cout << "Welcome to Fun Park Menu System!!" << endl;

	for (day = 1; day < 4; ++day) {		//runs for three "days"
		int child_quantity = 0, adult_quantity = 0, senior_quantity = 0, vip_quantity = 0, quantity = 0;	//declare variables at 0 so the
		double child_profit = 0, adult_profit = 0, senior_profit = 0, vip_profit = 0, daily_total = 0;		//reset every day
		char choice = 'z';

		cout << "Starting day " << day << endl;
		while (choice != 'Q') {
			cout << endl << "Enter (C)hild, (A)dult, (S)enior, (V)IP or (Q)uit >> ";
			cin >> choice;
			choice = toupper(choice);

			if (choice == 'Q') {		//if user quits, it skips the switch case and goes straight to the totals
				continue;
			}

			switch (choice)		//switch case to determine the quantity of each selected person
			{
			case 'C':
				cout << endl << "How many children? ";
				cin >> quantity;
				child_quantity += quantity;
				break;

			case 'A':
				cout << endl << "How many adults? ";
				cin >> quantity;
				adult_quantity += quantity;
				break;

			case 'S':
				cout << endl << "How many seniors? ";
				cin >> quantity;
				senior_quantity += quantity;
				break;

			case 'V':
				cout << endl << "How many VIP's? ";
				cin >> quantity;
				vip_quantity += quantity;
				break;

			default:
				cout << endl << "Please try again..." << endl;
				break;
			}
		}

		child_profit = child_quantity * 10.95;			//calculates daily totals and profits
		adult_profit = adult_quantity * 19.99;
		senior_profit = senior_quantity * 18.99;
		vip_profit = vip_quantity * 7.99;
		daily_total += child_profit + adult_profit + senior_profit + vip_profit;
		combined_total += daily_total;

		cout << endl << "Day " << day << endl;
		cout << "        Child " << child_quantity << " @ 10.95 = " << child_profit << endl;		//displays daily totals to user
		cout << "        Adult " << adult_quantity << " @ 19.99 = " << adult_profit << endl;
		cout << "        Senior " << senior_quantity << " @ 18.99 = " << senior_profit << endl;
		cout << "        VIP " << vip_profit << " @ 7.99 = " << vip_profit << endl;
		cout << "        Total = " << daily_total << endl << endl;

	}

	cout << "The total for all days is " << combined_total << endl << endl;		//total for all three days

	return 0;
}