#include <iostream>
#include <list>

using namespace std;

class Reserva{
    int id_hotel;
    list <int> id_voos;
    float valor;
    

    // Talvez eu mude pra uma biblioteca pronta por motivos de correção de datas inválidas
    struct data{
        int dia;
        int mes;
        int ano;
    };

};