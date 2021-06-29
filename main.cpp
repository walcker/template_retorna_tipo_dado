#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

template <class tipodado>
tipodado funcao( tipodado a){

    //diz os tipos que estão retornando automaticamente
    //cout << typeid( a).name() << endl;

    //identificar melhor o tipo de dado, modo completo
    if(typeid(a).name() == typeid( int ).name()){
        cout << "Inteiro: ";
        cout << endl;
    }

    if(typeid(a).name() == typeid( double).name()){
        cout << "Double: ";
        cout << endl;
    }

    if(typeid(a).name() == typeid( char ).name()){
        cout << "Char: ";
        cout << endl;
    }// termina de verificar o tipo de dado

    //Operação realmente feita
    return ++a;
}

int main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    cout << funcao(2) << endl;
    cout << funcao(1.1) << endl;
    cout << funcao(3.1415) << endl;
    cout << funcao('f') << endl;

    return 0;
}
