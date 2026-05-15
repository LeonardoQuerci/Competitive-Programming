#include <iostream>
#include <iomanip>

using namespace std;

/*Timelimit: 1
Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay. This is a very simple program with the only intention of practice of selection commands.

Input
The input file contains two integer numbers X and Y. X is the product code and Y is the quantity of this item according to the above table.

Output
The output must be a message "Total: R$ " followed by the total value to be paid, with 2 digits after the decimal point.*/


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	float x[] = {4.0,4.5,5.0,2.0,1.5};
	
	int y, z;
	cin >> y >> z;
	cout << "Total: R$ " << fixed << setprecision(2) << x[y-1]*z << "\n";
	
	return 0;
}
