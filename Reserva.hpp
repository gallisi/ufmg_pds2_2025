#include <iostream>
#include <list>
#include "Calendario.hpp"
#include "Hotel.hpp"
#include "Voos.hpp"
#include "utils.hpp"

using namespace std;

class Reserva{

    Reserva(string usuario, list <string> voos, string id_hotel, Calendario checkin, Calendario checkout);

    float calcularValor();

    string retornaUsuario();
    list <string> retornaVoos();
    string retornaHotel();


    ~Reserva();

 private:    
    string id_;
    string id_usuario_;
    float valor_total_;

    list <list <string>> passagens_aereas_; // formato: [id_voo,list id_assentos]

    string id_hotel_;
    Calendario checkin_;
    Calendario checkout_;
    
};