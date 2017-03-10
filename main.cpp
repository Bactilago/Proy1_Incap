//============================================================================
// Name        : incap1.cpp
// Author      : Henry
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "incap1.h"
using namespace std;


int main() {

	// Find current time and return year, month and day //
	time_t hoy = time(0);
	tm *ltm = localtime(&hoy);
	int currYear = 1900 + ltm->tm_year;
	int currMonth = 1 + ltm->tm_mon;
	int currDay = ltm->tm_mday;

	// Constants //
	const int maxMonth = 12;
	const int future = currYear + 1;
	const int minYear = 2000;
	const int secPerDay = 86400;

	cout << "Programa para Calcular Incapacidad" << endl; //
	cout << endl;

	cout << "Ingrese la fecha de inicio de la incapacidad." << endl;
	date fecha1 = getDate();
	cout << endl;

	cout << "Ingrese la fecha final de la incapacidad." << endl;
	date fecha2 = getDate();

	cout << endl;
	cout << "La fecha inicial es: " << fecha1.day << "/" << fecha1.month << "/" << fecha1.year << endl;
	cout << "La fecha final es: " << fecha2.day << "/" << fecha2.month << "/" << fecha2.year << endl;

	//Ejemplito//
	/*Validations::error torta;
	torta.findYear = 1;
	cout << torta.findYear << endl;*/

return 0;
}
