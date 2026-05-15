#include <iostream>
#include <iomanip>

using namespace std;

/*Write an algorithm that reads two floating values (x and y), which should represent the coordinates of a point in a plane. Next, determine which quadrant the point belongs, or if you are at one of the Cartesian axes or the origin (x = y = 0).



If the point is at the origin, write the message "Origem".

If the point is at X axis write "Eixo X", else if the point is at Y axis write "Eixo Y".

Input
The input contains the coordinates of a point.

Output
The output should display the quadrant in which the point is.*/

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	float x,y;
	cin >> x >> y;
	if (x==0 && y == 0)cout << "Origem" << "\n";
	else if (x>0 && y>0)cout << "Q1" << "\n";
	else if (x<0 && y>0)cout << "Q2" << "\n";
	else if (x>0 && y<0)cout << "Q4" << "\n";
	else if (x<0 && y<0)cout << "Q3" << "\n";
	else if (x==0 && y>0 || x==0 && y<0)cout << "Eixo Y" << "\n";
	else if (x>0 && y==0 || x<0 && y==0)cout << "Eixo X" << "\n";

	return 0;
}
