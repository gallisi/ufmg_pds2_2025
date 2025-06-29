#include <iostream>
#include "Calendario.hpp"

Calendario::Calendario(int dia, int mes, int ano){
    dia_ = dia;
    mes_ = mes;
    ano_ = ano; 
    bissexto_ = checarBissexto(ano);
}

int Calendario::getAno(){
    return ano_;
}

int Calendario::getMes(){
    return mes_;
}

int Calendario::getDia(){
    return dia_;
}
	
Calendario::~Calendario(){}

bool Calendario::checarBissexto(int ano){
    if(ano%400 == 0){
        return true;
    } else if ((ano%4 == 0) && (ano%100 != 0)){
        return true;
    }else{
        return false;
    }
}

//checa se data existe no documento
bool Calendario::validarData(int dia, int mes, int ano){
    if(ano > 2025 && ano <= 2031){
        
        if(mes == 2){
            
            if(checarBissexto(ano) && dia > 0 && dia <=29){
                return true;
            }else if(!checarBissexto(ano) && dia > 0 && dia <=28){

            }else{
                return false;
            }


        }else if (mes == 1 || mes == 3 || mes == 5 ||
            mes == 7 || mes == 8 || mes == 10 || mes == 12){
            
            if(dia > 0 && dia <=31){
                return true;
            }else{
                return false;
            }
            
        }else if(mes == 4 || mes == 6 || 
                mes == 9 || mes == 11){
            
            if(dia > 0 && dia <=30){
                return true;
            }else{
                return false;
            }
        }
    } 
} 



bool Calendario::dataMaior(Calendario a){

    if(ano_ > a.getAno()){
        return true;
    }else if( (ano_ == a.getAno()) && (mes_ > a.getMes())){
        return true;
    }else if((ano_ == a.getAno()) && (mes_ == a.getMes()) && (dia_ > a.getDia())){
        return true;
    }else{
        return false;
    }
}

Calendario Calendario::anterior(){
    int dia, mes, ano;

    if(dia_ != 1){      
        dia = dia_-1; 
        mes = mes_; 
        ano = ano_;        
    }else if(mes_ != 1){
       
        if(mes_ == 3){           
            mes = 2; 
            ano = ano_;

            if(checarBissexto(ano_)){
                dia = 29; 
            }else{
                dia = 28; 
            }
            
        }else if(mes_ == 2 || mes_ == 4 || mes_ == 6 ||
                mes_ == 8 || mes_ == 9 || mes_ == 11){
        
            dia = 31; 
            mes = mes_-1; 
            ano = ano_;
        }else{
            dia = 30; 
            mes = mes_-1; 
            ano = ano_;
        }

    }else{
        dia = 31; 
        mes = 12; 
        ano = ano_-1;
    }

    Calendario sub(dia, mes, ano);
    return sub;
}

int Calendario::contagemDias(Calendario a, Calendario b){
    Calendario maior, menor;
    
    if(a.dataMaior(b)){
        maior = a;
        menor = b;
    }else{
        maior = b;
        menor = a;
    }

    int cont = 0;

    while(maior.getDia() != menor.getDia() ||
           maior.getMes() != menor.getMes() || 
            maior.getAno() != menor.getAno()){
        menor = menor.anterior();
        cont++;
    }

    return cont;
}