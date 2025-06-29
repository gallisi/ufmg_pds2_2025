#include "Reserva.hpp"

Reserva::Reserva(string usuario, list <string> voos, string id_hotel, Calendario checkin, Calendario checkout){
    

    id_ = "RE" + gerarID();
}

float Reserva::calcularValor(){

}