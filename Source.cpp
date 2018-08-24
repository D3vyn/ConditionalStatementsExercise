#include <iostream>
using namespace std;

int main()
{
	// 1) incomplete
	{
		int y, x = 0;
		if (y = 0)
		{
			x = 100;
		}
	}
	// 2)
	{
		int num1, num2;
		cout << "Enter 2 numbers: \n";
		cin >> num1 >> num2;

		if (num1 > num2)
		{
			cout << num1 << " is bigger";
			cout << endl;
		}
		else
		{
			cout << num2 << " is bigger";
			cout << endl;
		}
	}
	// 3) will do later
	{
	
	}
	// 4) confused
	{
		switch
		{
		case 1:
			cout << "1";
			break;
		case 2:
			cout << "2";
			break;
		case 3:
			cout << "3";
			break;
		case 4:
			cout << "4";
			break;
		default:
			cout << "Invalid";
			break;
		}

	}
	// 5) confused
	{


	}
	// 6)
	{
		char op;
		float num1, num2 = 0;

		cout << "Enter two numbers \n";
		cin >> num1 >> num2;
		cout << endl;

		cout << "Do you want to +, -, *, or /? \n";
		cin >> op;
		switch (op)
		{
		case '+':
			cout << num1 + num2;
			cout << endl;
			break;
		case '-':
			cout << num1 - num2;
			cout << endl;
			break;
		case '*':
			cout << num1 * num2;
			cout << endl;
			break;
		case '/':
			cout << num1 / num2;
			cout << endl;
		default:
			cout << "Error! Operator is not correct";
			cout << endl;
			break;
		}
	}
	// 7)
	{
		char op

		cout << "Enter a Month Number \n(ex. August = 8) \n";
		cin >> op;
		switch (op)

		{
			case '1':
				cout << "January has 31 days! \n";
				break;
			case '2';
				cout << "February has 28 days! \n";
				break;
			case '3':
				cout << "March has 31 days! \n";
				break;
			case '4':
				cout << "April has 30 days! \n";
				break;
			case '5':
				cout << "May has 31 days! \n";
				break;
			case '6':
				cout << "June has 30 days! \n";
				break;
			case '7':
				cout << "July has 31 days! \n";
				break;
			case '8':
				cout << "August has 31 days! \n";
				break;
			case '9':
				cout << "September has 30 days! \n";
				break;
			case '10':
				cout << "October has 31 days! \n";
				break;
			case '11':
				cout << "November has 30 days! \n";
				break;
			case '12':
				cout << "December has 31 days! \n";
				break;

		}
	}
	// 8) ?
	{
		//a. false
		//b. true
		//c. false
		//d. true
		//e. false
		//f. false
		//g. true
		//h. false
		//i. false
		//j. true

	}
	// 9) How?
	{
		//a. 
		//b. 
		//c. 
		//d. 
		//e. 
	}
	system("pause");
	return 0;
}