#include <iostream>
#include <fstream>
#include <vector>
#include "Calendario.hpp"

using namespace std;

class Hotel{
 public:
   Hotel();

   string getId();
   string getCidade();
   float getValor();

   bool checaDisponibilidade(Calendario entrada, Calendario saida);

   void reservarHotel(string id_cliente, Calendario entrada, Calendario saida);

   void excluirReserva(string id_reserva);

   ~Hotel();

 private:
   string id_;
   string cidade_;
   float diaria_;

   struct Ocupacao{
      string id_reserva_;
      Calendario checkin_;
      Calendario checkout_;
   };
   vector < Ocupacao > ocupacao_;


};