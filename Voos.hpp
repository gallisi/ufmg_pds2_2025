#include <iostream>
#include <fstream>
#include <vector>
#include <random> //gera voos para o usuário
#include "Calendario.hpp"
#include "utils.hpp"

using namespace std;


class Voo{

    Voo(string id);

    string getId();
    float getValor();
    string getCidadePartida();
    string getCidadeChegada();
    Calendario getData();


    // Retorna índice do assento disponível. Caso não exista, retorna -1.
    // O caso "não existe assento disponível" não retorna uma exceção pois essa funcionaliade será usada em vários locais
    int checarDisponibilidade();
    
    void reservarAssento(string id_cliente);

    void liberarAssento(string id_cliente);

    ~Voo();

 private:
    string id_;
    float valor_;
    string cidade_partida_;
    string cidade_chegada_;
    Calendario data_partida_;

    struct Assento{
        string id_;
        string id_cliente_ = "";
    };

    vector < Assento > assentos_;
};