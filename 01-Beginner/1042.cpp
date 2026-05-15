#include <iostream>
#include <iomanip>

using namespace std;

/*Read three integers and sort them in ascending order. After, print these values in ascending order, a blank line and then the values in the sequence as they were readed.

Input
The input contains three integer numbers.

Output
Present the output as requested above.*/

void ascendente(int v[]){
	for (int i = 0; i < 3-1; i++){
		for(int j=0;j<3-1-i;j++){
			if (v[j]>v[j+1]){
				int aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x,y,z;
	cin >> x >> y >> z;
	int v[] = {x,y,z};
	
	ascendente(v);
	
	for(int i = 0; i<3;i++){
		cout << v[i] << "\n";
	}
	cout << "\n"; 
	cout << x << "\n";
	cout << y << "\n";
	cout << z << "\n";

	return 0;
}
