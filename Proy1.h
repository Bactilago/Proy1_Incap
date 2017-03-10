
/*
 * incap1.h
 *
 *  Created on: Mar 10, 2017
 *      Author: Gorilla-Henry
 */

#ifndef INCAP1_H_
#define INCAP1_H_

#include <iostream>
#include <ctime>
using namespace std;

struct date {
	int day;
	int month;
	int year;
};

date getDate(){
	date askDate;
	cout << "Ingrese el dia (DD): " << flush;
	cin >> askDate.day;
	cout << "Ingrese el mes (MM): " << flush;
	cin >> askDate.month;
	cout << "Ingrese el anho (YYYY): " << flush;
	cin >> askDate.year;
	return {askDate.day, askDate.month, askDate.year};
}

class Validations{
public:

	struct error{
		int findYear;
		int findMonth;
	};


};

#endif /* INCAP1_H_ */
