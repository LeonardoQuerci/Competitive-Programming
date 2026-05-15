#include <iostream>
#include <iomanip>

using namespace std;

/*Read 3 double numbers (A, B and C) representing the sides of a triangle and arrange them in decreasing order, so that the side A is the biggest of the three sides. Next, determine the type of triangle that they can make, based on the following cases always writing an appropriate message:

if A = B + C, write the message: NAO FORMA TRIANGULO
if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
if the three sides are the same size, write the message: TRIANGULO EQUILATERO
if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES
Input
The input contains three double numbers, A (0 < A) , B (0 < B) and C (0 < C).

Output
Print all the classifications of the triangle presented in the input.*/

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double a, b, c;
	cin >> a >> b >> c;
	
    if (a < b) swap(a, b);
    // Se 'a' for menor que 'c', inverte (garante que 'a' é o maior de todos)
    if (a < c) swap(a, c);
    // Se 'b' for menor que 'c', inverte (garante a ordem decrescente: a >= b >= c)
    if (b < c) swap(b, c);
    
	if(a>=b+c)cout << "NAO FORMA TRIANGULO" << "\n";
	else{
		if((a*a)==((b*b)+(c*c)))cout << "TRIANGULO RETANGULO" << "\n";
 		else if((a*a)>((b*b)+(c*c)))cout << "TRIANGULO OBTUSANGULO" << "\n";
 		else if((a*a)<((b*b)+(c*c)))cout << "TRIANGULO ACUTANGULO" << "\n";
 		
		if(a==b && b==c)cout << "TRIANGULO EQUILATERO" << "\n";
 		else if (a == b || b == c || a == c)cout << "TRIANGULO ISOSCELES" << "\n";	
	}
 	
	return 0;
}
