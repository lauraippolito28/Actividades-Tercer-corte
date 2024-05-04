#include <iostream> 
#include <stack> 
#include <queue> 

using namespace std; 

// funcion de decisión de cartas
bool decisiónCartas(char carta1, char carta2){
    return carta1 > carta2;
}


int main(){
    //punto 1
    stack<char> jugador_1, jugador_2;
    for (char c = 'A'; c >= 'E' ; c--){
        jugador_1.push(c);
        jugador_2.push(c - 5);
    }
    
    // punto 2 
    queue<char> mazo;
    for (char c = 'F'; c <= 'o'; c++){
        mazo.push(c);
    }
    
    // punto 3
    while (!mazo.empty() && !(jugador_1.empty() || jugador_2.empty())){
        char carta_jugador_1 = jugador_1.top();
        jugador_1.pop();
        char carta_jugador_2 = jugador_2.top();
        jugador_2.pop();
    }

    // punto 4 
    if (decisiónCartas(carta_jugador_1, carta_jugador_2)){
        jugador_1.push(carta_jugador_1);
        jugador_1.push(carta_jugador_2);
        jugador_1.push(carta_mazo);
    }else{
        jugador_2.push(carta_jugador_1);
        jugador_2.push(carta_jugador_2);
        jugador_2.push(carta_mazo);
    }

    // punto 5 o 6 
    cout << "El jugador 1 tiene " << jugador_1.size() << "cartas." << endl;
    cout << "El jugador 2 tiene " << jugador_2.size() << "cartas." << endl;


    // punto 7 
    if (jugador_1.size() > jugador_2.size()){
        cout << "El jugador 1 gana" << endl; 
    } else if (jugador_1.size() < jugador_2.size()){
        cout << "El jugador 2 gana" << endl; 
    } else { 
        cout << "Empate" << endl; 
    }
    return 0;
};
