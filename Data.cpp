#include "Data.h"

Data::Data(int dia, int mes, int ano) 
{
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
}

//imprimir a data
void Data::print() const
{
  cout << "Data [dia=" << dia << ", mes=" << mes << ", ano=" << ano << "]";
}