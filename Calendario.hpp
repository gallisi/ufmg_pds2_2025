#include <iostream>

class Calendario{
 public:	
 
	Calendario();
 	Calendario(int dia, int mes, int ano);
	 
	int getAno();
	int getMes();
	int getDia();
	
	//checa se data existe
	bool validarData(int dia, int mes, int ano);
 
    bool checarBissexto(int ano);

	//Retorna true caso Calendaria a > Calendario b
    bool dataMaior(Calendario a);
 
	//Retorna a quantidade de dias entre 2 datas
	int contagemDias(Calendario a, Calendario b);

	Calendario anterior();

	~Calendario();

 private:
	int ano_;
	int mes_; //entre 1 e 12 pra bater com o calendario tradicional
	int dia_;
    bool bissexto_;

};