/*
 * Quick.cpp
 *
 *  Created on: 25 de ago de 2016
 *      Author: johannes
 */

#include "Quick.h"

namespace Sort {

Quick::Quick(string filePath)
{
	this->_input = new vector<int>;

	ifstream input;
	string line;

	input.open(filePath, std::ios::in);
	while(getline(input, line))
		this->_input->push_back(stoi(line));

	input.close();

	this->Sort(0, this->_input->size()-1);
}


Quick::~Quick()
{
	delete this->_input;
}


void Quick::Sort(int Lo, int Hi)
{
	if(Lo < Hi){
		int part = this->Part(Lo, Hi);
		this->Sort(Lo, part-1);
		this->Sort(part+1, Hi);
	}
}


int Quick::Part(int Lo, int Hi)
{
	int pivot = (*this->_input)[Hi];
	int i = Lo;

	for(int j = Lo; j < Hi; j++){
		if((*this->_input)[j] <= pivot){
			this->Swap(i, j);
			i++;
		}
	}

	this->Swap(i, Hi);
	return i;
}


void Quick::Swap(int a, int b)
{
	int aux = (*this->_input)[a];
	(*this->_input)[a] = (*this->_input)[b];
	(*this->_input)[b] = aux;
}

} /* namespace Sort */
