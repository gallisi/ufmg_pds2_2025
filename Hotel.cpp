#include "Hotel.hpp"

Hotel::Hotel(){

}

string Hotel::getId(){
    return id_;
}

string Hotel::getCidade(){
    return cidade_;
}

float Hotel::getValor(){
    return diaria_;
}

bool Hotel::checaDisponibilidade(Calendario entrada, Calendario saida){
    for(int i = 0; i < ocupacao_.size(); i++){
        
        //checa de data de entrada está entre datas de checkin e checkout daquela reserva (checkout > entrada > checkin) 
        if(ocupacao_[i].checkout_.dataMaior(entrada) && entrada.dataMaior(ocupacao_[i].checkin_)){
            return false;

        //checa de data de saída está entre datas de checkin e checkout daquela reserva (checkout > saida > checkin)
        }else if(ocupacao_[i].checkout_.dataMaior(saida) && saida.dataMaior(ocupacao_[i].checkin_)){
            return false;
        }
    }

    return true;
}

void Hotel::reservarHotel(string id_reserva, Calendario entrada, Calendario saida){
    
    if(checaDisponibilidade(entrada, saida)){
        Ocupacao nova_reserva;
        nova_reserva.id_reserva_ = id_reserva;
        nova_reserva.checkin_ = entrada;
        nova_reserva.checkout_ = saida;
        ocupacao_.push_back(nova_reserva);
    }
}

void Hotel::excluirReserva(string id_reserva){
    
    for(auto& i : ocupacao_){
        if(i.id_reserva_ == id_reserva){
            
        }
    }
}

