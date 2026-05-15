#include <iostream>
#include <iomanip>

using namespace std;

/*Read the start time and end time of a game, in hours and minutes (initial hour, initial minute, final hour, final minute). Then print the duration of the game, knowing that the game can begin in a day and finish in another day,

Obs.: With a maximum game time of 24 hours and the minimum game time of 1 minute.

Input
Four integer numbers representing the start and end time of the game.

Output
Print the duration of the game in hours and minutes, in this format: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” . Which means: the game lasted XXX hour(s) and YYY minutes.*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h1,m1,h2,m2;
    cin >> h1 >> m1 >> h2 >> m2 ;
    
    int tempinicial = (h1*60)+m1;
    int tempFinal = (h2*60)+m2;
    int duracaoTotal = tempFinal - tempinicial;
    if(duracaoTotal<=0){
        duracaoTotal += 1440; //
    }
    int duracaoHoras = duracaoTotal/60;
    int duracaoMinutos = duracaoTotal%60;
    
    cout << "O JOGO DUROU " << duracaoHoras << " HORA(S) E " << duracaoMinutos << " MINUTO(S)" << "\n";
    return 0;
}