#include <iostream>
#include <iomanip>

using namespace std;

/*Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ??the square that has side B.
e) the area of the rectangle that has sides A and B.

Input
The input file contains three double values with one digit after the decimal point.

Output
The output file must contain 5 lines of data. Each line corresponds to one of the areas described above, always with a corresponding message (in Portuguese) and one space between the two points and the value. The value calculated must be presented with 3 digits after the decimal point.*/

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double a,b,c;
	
	cin >> a >> b >> c;
	double result1 = a*c/2;
	double result2 = 3.14159*c*c;
	double result3 = (a+b)*c/2;
	double result4 = b*b;
	double result5 = a*b;
	cout << "TRIANGULO: " << fixed << setprecision(3) << result1 << "\n"; 
	cout << "CIRCULO: " << fixed << setprecision(3) << result2 << "\n";
	cout << "TRAPEZIO: " << fixed << setprecision(3) << result3 << "\n";
	cout << "QUADRADO: " << fixed << setprecision(3) << result4 << "\n";
	cout << "RETANGULO: " << fixed << setprecision(3) << result5 << "\n";
	return 0;
}
