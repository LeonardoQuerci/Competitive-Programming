#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

/*Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.

Input
Read 3 floating-point numbers (double) A, B and C.

Output
Print the result with 5 digits after the decimal point or the message if it is impossible to calculate.*/


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double a,b,c, delta=0, x1=0, x2=0;
	cin >> a >> b >> c;
	delta = pow(b,2)-4*a*c;
	if(delta>=0 && a!=0 ){
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		cout << "R1 = " << fixed << setprecision(5) << x1 << "\n";
		cout << "R2 = " << fixed << setprecision(5) << x2 << "\n";
	}else{
		cout << "Impossivel calcular" << "\n";
	}

	return 0;
}
