#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

/*Read three point floating values (A, B and C) and verify if is possible to make a triangle with them. If it is possible, calculate the perimeter of the triangle and print the message:


Perimetro = XX.X


If it is not possible, calculate the area of the trapezium which basis A and B and C as height, and print the message:


Area = XX.X

Input
The input file has tree floating point numbers.

Output
Print the result with one digit after the decimal point.*/


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	float a,b,c;
	cin >> a >> b >> c;
	if (a<b+c && a>abs(b-c)){
		cout << "Perimetro = " << fixed << setprecision(1) << a+b+c << "\n";
	}else{
		cout << "Area = " << fixed << setprecision(1) << ((a+b)*c)/2 << "\n";
	}
	return 0;
}
