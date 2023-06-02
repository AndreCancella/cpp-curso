#include<iostream>
#include <string>
using namespace std;

string palavra_secreta = "Melancia";

bool letra_existe(char chute){
    for (int i = 0; i <= palavra_secreta.size(); i++){
        if(chute == palavra_secreta[i]){
            return true;
        }
    }
    return false;
}

int main(){
    bool nao_acertou = true;
    bool nao_enforcou = true;

    while(nao_acertou && nao_enforcou){
        char chute;
        cout << "Qual seu chute? " << endl;

        cout << "   -------------------" << endl;
        cout << "   |                 |" << endl;
        cout << "   |                 |" << endl;
        cout << "   |" << endl;
        cout << "   |" << endl;
        cout << "   |" << endl;
        cout << "   |" << endl;
        cout << "   |" << endl;
        cout << "   |" << endl;
        cout << "   |" << endl;
        cout << "   |" << endl;
        cout << "   |" << endl;
        cout << "-------------------------" << endl;

        cin >> chute;

        if (letra_existe(chute)){
            cout << "Seu chute está na palavra." << endl;
        } 
        else{
            cout << "Seu chute não está na palavra." << endl;
        }
    }
}           