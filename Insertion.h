/*
 * Insertion.h
 *
 *  Created on: 24 de ago de 2016
 *      Author: johannes
 */

#ifndef INSERTION_H_
#define INSERTION_H_

#include <iostream>
#include <list>
#include <fstream>

using namespace std;

namespace Sort {

class Insertion {
private:
	list<int> *_input;
	list<int> *_output;
	void Sort(void);

public:
	Insertion(string filePath);
	~Insertion();
};

} /* namespace Sort */

#endif /* INSERTION_H_ */
