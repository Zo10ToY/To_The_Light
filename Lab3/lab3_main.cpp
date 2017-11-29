// Розробник програми Косих Анатолiй К-13, варiант 2

#include <iostream>

using namespace std;

int main()
{
	double c, x, y;
	cout << "HEY USER, you can enter two variables X and Y." << endl
		<< "After that you'll get a NUMBER, that is an answer to expression (4/7)*X+Y\nwith the variables YOU SET." << endl;
	cout << "Please enter X" << endl;
	cin >> x;
	cout << "Please enter Y" << endl;
	cin >> y;
	c = (4. / 7.)*x + y;
	cout << "You entered:" << ' ' << x << ' ' << "and" << ' ' << y << endl
		<< "Your correct answer is:" << ' ' << c << endl;

	system("pause");
	return 0;
}