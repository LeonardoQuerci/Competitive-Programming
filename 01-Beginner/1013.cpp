#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

/*Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:

Input
The input file contains 3 integer values.

Output
Print the greatest of these three values followed by a space and the message “eh o maior”.*/
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b,c;
	cin >> a >> b >> c;
	int maior = (a+b+abs(a-b))/2;
	maior = (maior+c+abs(maior-c))/2;
	
	cout << maior << " eh o maior" << "\n";
	
	return 0;
}
