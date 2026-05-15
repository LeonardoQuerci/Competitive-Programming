#include <iostream>
#include <iomanip>

using namespace std;

/*Read the start time and end time of a game, in hours. Then calculate the duration of the game, knowing that the game can begin in a day and finish in another day, with a maximum duration of 24 hours. The message must be printed in portuguese “O JOGO DUROU X HORA(S)” that means “THE GAME LASTED X HOUR(S)”

Input
Two integer numbers representing the start and end time of a game.

Output
Print the duration of the game as in the sample output.*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int inicio,fim;
    cin >> inicio >> fim;
    
    int duracao = (fim - inicio + 23) % 24 + 1;
    
    cout << "O JOGO DUROU " << duracao << " HORA(S)\n";
    return 0;
}