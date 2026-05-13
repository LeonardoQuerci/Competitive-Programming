#include <iostream>
#include <iomanip>

using namespace std;
/*In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.

Input
The input file contains two lines of data. In each line there will be 3 values: two integers and a floating value with 2 digits after the decimal point.

Output
The output file must be a message like the following example where "Valor a pagar" means Value to Pay. Remember the space after ":" and after "R$" symbol. The value must be presented with 2 digits after the point.*/

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x1,x2,y1,y2;
	float x3,y3;
	cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
	float result = (x2*x3) + (y2*y3);
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << result << "\n";
	return 0;
}
