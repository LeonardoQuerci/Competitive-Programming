#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int x,y;
    float f;
    cin >> x >> y >> f;
    float result = y*f;
    
    cout << "NUMBER = " << x << "\n";
    cout << "SALARY = U$ "<< fixed << setprecision(2) << result << "\n";
    return 0;
}
