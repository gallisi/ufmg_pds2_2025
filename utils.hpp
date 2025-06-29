#include <iostream>
#include <random> // Usada na geração de IDs

using namespace std;

string gerarID(){
    string caracteres = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"; // total:62 caracteres
    
    random_device rd("default");
    uniform_int_distribution uid(0,61);

    string id = "0000000";

    for(int i = 0; i < 7; i++){
        int c = uid(rd);
        id[i] = caracteres[c]; 
    }

    return id;
}