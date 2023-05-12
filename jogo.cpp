#include<iostream>
using namespace std;


int main(){
    cout <<"**********************************************" << endl;
    cout <<"*     Bem vindos ao jogo de adivinhação!     *"<< endl;
    cout <<"**********************************************"<< endl;

    int numero_secret0 = rand()% 100;
    cout <<"Numero secreto é: " << endl; 

    int chute;
    cout << "Qual seu chute? " << endl;
    cin >> chute;

    bool acertou = chute == numero_secret0;
    bool maior = chute > numero_secret0;

    if(acertou){
        cout << "VC acertou" << endl;
    }
    else if(maior){
        cout << "Seu chute é maior que número secreto" << endl;
    }
    else {
        cout << "Seu chute é menor que número secreto" << endl;
    }
}