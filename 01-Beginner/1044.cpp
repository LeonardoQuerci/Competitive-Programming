#include <iostream>
#include <iomanip>

using namespace std;

/*Read two integer values (A and B). After, the program should print the message "Sao Multiplos" (are multiples) or "Nao sao Multiplos" (aren’t multiples), corresponding to the read values.

Input
The input has two integer numbers.

Output
Print the relative message to the input as stated above.*/

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int v1, v2;
	cin >> v1 >> v2;
	if (v1%v2 == 0 || v2%v1 ==0){
		cout << "Sao Multiplos" << "\n";
	}else{
		cout << "Nao sao Multiplos" << "\n";
	}

	return 0;
}
