#include <iostream>
using namespace std;

int main()

{
	//floats, ints, const

//floats, the items
	float Hamburgers, Fries, Tacos, Salads, Drinks, total;

	//ints, the amount of each items
	int amntH, amntF, amntT, amntS, amntD;

	//constants, the amount of tax
	const double tax = 0.07;


	//asking for the order/main command


//asking for the order
	cout << "Hello, please input your order below" << endl << endl;

	//input amount of hamburgers
	cout << "How many Hamburgers? ($1.59)= ";
	cin >> amntH;
	Hamburgers = (amntH * 1.59);

	//input amount of fries
	cout << "How many Fries? ($0.89)= ";
	cin >> amntF;
	Fries = (amntF * 0.89);

	//input amount of Tacos
	cout << "How many Tacos? ($0.85)= ";
	cin >> amntT;
	Tacos = (amntT * 0.85);

	//input amount of Salads
	cout << "How many Salads? ($1.25)= ";
	cin >> amntS;
	Salads = (amntS * 1.25);

	//input amount of drinks
	cout << "How many Drinks? ($0.99)= ";
	cin >> amntD;
	Drinks = (amntD * 0.99);

	total = (Hamburgers + Fries + Tacos + Salads + Drinks);				//total, sum of all orders



									//showing order

	cout << endl;
	cout << "Your order is:" << endl << endl;
	cout << "Hamburgers= $" << Hamburgers << " (" << amntH << ")" << endl;							//how much for hamburgers
	cout << "Fries= $" << Fries << " (" << amntF << ")" << endl;									// how much for fries
	cout << "Tacos= $" << Tacos << " (" << amntT << ")" << endl;									//how much for tacos
	cout << "Salads= $" << Salads << " (" << amntS << ")" << endl;									//how much for salads
	cout << "Drinks= $" << Drinks << " (" << amntD << ")" << endl;									//how much for drinks
	cout << "------------------" << endl;
	cout << "pretax total= $" << total << endl;								//total before taxes
	cout << "tax= $" << (total * tax) << endl;								//total * tax is the amount paid in taxes
	cout << "------------------" << endl;
	cout << "total to pay= $" << (total + (total * tax)) << endl;


}