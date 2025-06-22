#include <iostream>

using namespace std;

class Cliente {
    public:
    
    Cliente(){}


    private:
    int id;
    string email;
    string password;

    struct Reserva{
        int id_voo_ida;
        int id_voo_volta;
        int id_reserva_hotel;
        float valor;
    };


};