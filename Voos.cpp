#include "Voos.hpp"
#include "utils.hpp"

Voo::Voo(string id){
    id_ = id;
}

string Voo::getId(){
    return id_;
}

float Voo::getValor(){
    return valor_;
}

string Voo::getCidadePartida(){
    return cidade_partida_;
}

string Voo::getCidadeChegada(){
    return cidade_chegada_;
}

Calendario Voo::getData(){
    return data_partida_;
}

int Voo::checarDisponibilidade(){
    for(int i = 0; i < assentos_.size(); i++){
        if(assentos_[i].id_cliente_ == ""){
            return i;
        }
    }

    return -1;
}

void Voo::reservarAssento(string id_cliente){
    int assentoDisponivel = checarDisponibilidade();
    
    if(assentoDisponivel != -1){
        assentos_[assentoDisponivel].id_cliente_ = id_cliente;
    }
}

void Voo::liberarAssento(string id_cliente){
    for(int i = 0; i < assentos_.size(); i++){
        if(assentos_[i].id_cliente_ == id_cliente){
            assentos_[i].id_cliente_ == "";
        }
    }
}
