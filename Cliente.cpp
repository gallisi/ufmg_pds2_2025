#include <iostream>
#include <fstream>
#include <utils.hpp>
#include "Cliente.hpp"


Cliente::Cliente(string email, string senha){
    email_ = email;
    senha_ = senha;

    id_ = "CL" + gerarID();
}

