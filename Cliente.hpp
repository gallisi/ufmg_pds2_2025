#include <iostream>
#include "Reserva.hpp"

using namespace std;

class Cliente {
 public: 
  Cliente(string email, string senha);
  
    
  
  
  
  
  
  ~Cliente();

 private:
  string id_;
  string email_;
  string senha_;
};