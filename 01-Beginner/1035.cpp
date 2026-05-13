#include <iostream>
#include <iomanip>

using namespace std;

/*Read 4 integer values A, B, C and D. Then if B is greater than C and D is greater than A and if the sum of C and D is greater than the sum of A and B and if C and D were positives values and if A is even, write the message “Valores aceitos” (Accepted values). Otherwise, write the message “Valores nao aceitos” (Values not accepted).

Input
Four integer numbers A, B, C and D.

Output
Show the corresponding message after the validation of the values??.*/



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	if ((b>c) && (d >a) && ((c+d)>(a+b)) && d>0 && c>0 && a%2 ==0){
		cout << "Valores aceitos" << "\n";
	}else{
		cout << "Valores nao aceitos" << "\n";
	}
	return 0;
}
