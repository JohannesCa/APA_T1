/*
 * Insertion.cpp
 *
 *  Created on: 24 de ago de 2016
 *      Author: johannes
 */

#include "Insertion.h"

namespace Sort {

Insertion::Insertion(string filePath)
{
	this->_input = new list<int>;
	this->_output = new list<int>;

	ifstream input;
	string line;

	input.open(filePath, std::ios::in);
	while(getline(input, line))
		this->_input->push_back(stoi(line));

	input.close();
}


void Insertion::Sort(void)
{
	;
}


Insertion::~Insertion()
{
	delete this->_input;
	delete this->_output;
}

} /* namespace Sort */
