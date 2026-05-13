#include <iostream>

using namespace std;

/*Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.

Input
The input file contains an integer N.

Output
Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.*/


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int h, m, s, valor;
	int tempo[] = {3600,60,1};
    cin >> valor;
    for(int i = 0; i < 3; i++){
    	if(i==0){
    		h=valor/3600;
    		valor %= 3600; 
    	}else if(i == 1){
    		m = valor/60;
    		valor %= 60;
    	}else{
    		s = valor/1;
    	}
    }
    cout << h << ":" << m << ":" << s << "\n";
	
	
	return 0;
}
