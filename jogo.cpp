#include<iostream>
#include <ctime>
using namespace std;


int main(){
    std::srand(std::time(nullptr));
    cout <<"**********************************************" << endl;
    cout <<"*     Bem vindos ao jogo de adivinhação!     *"<< endl;
    cout <<"**********************************************"<< endl;

    int numero_secret0 = rand() % 100;

    bool nao_acertou = true;
    int tentativas = 0;

    double pontos = 100.00;

    while(nao_acertou){
        tentativas += 1;
        if(tentativas > 4){
            cout <<"Dica: o número está entre " << (numero_secret0 - 5 ) << " e " << (numero_secret0 + 5) << endl;
        }
        cout <<tentativas << " vezes" << endl;

        int chute;
        cout << "Qual seu chute? " << endl;
        cin >> chute;

        double pontos_perdidos = abs(chute - numero_secret0)/2.0;
        pontos = pontos - pontos_perdidos;

        bool acertou = chute == numero_secret0;
        bool maior = chute > numero_secret0;

        if(acertou){
            cout << "VC acertou em " <<tentativas << " vezes" << endl;
            nao_acertou = false;
        }
        else if(maior){
            cout << "Seu chute é maior que número secreto" << endl;
        }
        else {
            cout << "Seu chute é menor que número secreto" << endl;
        }
    }
    cout <<"Sua pontuação foi de " << pontos << " pontos" << endl;
    cout <<"FIM DE JOGO"<< endl;

}