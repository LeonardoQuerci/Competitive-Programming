#include <iostream>
#include <iomanip>

using namespace std;

/*The company ABC decided to give a salary increase to its employees, according to the following table:


Salary	Readjustment Rate
0 - 400.00   15%
400.01 - 800.00  12%
800.01 - 1200.00  10%
1200.01 - 2000.00  7%
Above 2000.00 4%

Read the employee's salary, calculate and print the new employee's salary, as well the money earned and the increase percentual obtained by the employee, with corresponding messages in Portuguese, as the below example.
Input
The input contains only a floating-point number, with 2 digits after the decimal point.

Output
Print 3 messages followed by the corresponding numbers (see example) informing the new salary, the among of money earned (both must be shown with 2 decimal places) and the percentual obtained by the employee. Note:
Novo salario:  means "New Salary"
Reajuste ganho: means "Money earned"
Em percentual: means "In percentage"*/


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float salario, ganho;
    int percentual;
    cin >> salario;
    if (salario<=400){
        ganho = salario * 0.15;
        percentual = 15;
    }else if (salario>400 && salario<=800){
        ganho = salario * 0.12;
        percentual = 12;
    }else if (salario>800 && salario<=1200){
        ganho = salario * 0.1;
        percentual = 10;
    }else if (salario>1200 && salario<=2000){
        ganho = salario * 0.07;
        percentual = 7;
    }else{
        ganho = salario * 0.04;
        percentual = 4;
    }
    salario+=ganho;
    cout << "Novo salario: " << fixed << setprecision(2) << salario << "\n";
    cout << "Reajuste ganho: " << fixed << setprecision(2) << ganho << "\n";
    cout << "Em percentual: " << percentual << " %" << "\n";
    return 0;
}