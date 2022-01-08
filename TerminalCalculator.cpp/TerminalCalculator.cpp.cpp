// TerminalCalculator.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

void menu() {
	cout << endl;
	cout << "1. Addition" << endl;
	cout << "2. Substraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Exit" << endl;
	cout << endl;
}

int main()
{
	bool work = true;
	int result;
	while (work) {
		cout << "Choose calculator function" << endl;
		menu();
		int choice, result;
		int a, b;


		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << endl;
			cout << "1. Addition" << endl;
			cout << "Pass first number" << endl;
			cin >> a;
			cout << "Pass second number" << endl;
			cin >> b;
			result = a + b;
			cout << "Result is " << result << endl;
			cout << endl;
			break;
		case 2:
			cout << endl;
			cout << "2. Substraction" << endl;
			cout << "Pass first number" << endl;
			cin >> a;
			cout << "Pass second number" << endl;
			cin >> b;
			result = a - b;
			cout << "Result is " << result << endl;
			cout << endl;
			break;
		case 3:
			cout << endl;
			cout << "3. Multiplication" << endl;
			cout << "Pass first number" << endl;
			cin >> a;
			cout << "Pass second number" << endl;
			cin >> b;
			result = a * b;
			cout << "Result is " << result << endl;
			cout << endl;
			break;
		case 4:
			cout << endl;
			cout << "3. Division" << endl;
			cout << "Pass first number" << endl;
			cin >> a;
			cout << "Pass second number" << endl;
			cin >> b;
			result = a / b;
			cout << "Result is " << result << endl;
			cout << endl;
			break;
		case 5:
			work = false;
			break;
		default:
			cout << "You have choosen wrong number, please try again" << endl;
		}
	}
}