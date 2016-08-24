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
	this->_input = new vector<int>;

	ifstream input;
	string line;

	input.open(filePath, std::ios::in);
	while(getline(input, line))
		this->_input->push_back(stoi(line));

	input.close();
}


void Insertion::Swap(vector<int>::iterator a, vector<int>::iterator b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}



void Insertion::Sort(void)
{
	for(vector<int>::iterator i = this->_input->begin(); i != this->_input->end(); i++){
		vector<int>::iterator j = i;

		while((j != this->_input->begin()) && (*(j-1) > *j)){
			Swap(j-1, j);
			j--;
		}
	}
}


Insertion::~Insertion()
{
	delete this->_input;
}

} /* namespace Sort */
