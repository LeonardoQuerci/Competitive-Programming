#include <iostream>
#include <iomanip>

using namespace std;
/*Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money). Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month , with two decimal places.

- Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.

- Don’t forget the blank spaces.*/

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string nome;
	double x1, x2;
	cin >> nome >> x1 >> x2;
	double result = x1 + x2*0.15;
	cout << "TOTAL = R$ " << fixed << setprecision(2) << result << "\n";
	return 0;
}
