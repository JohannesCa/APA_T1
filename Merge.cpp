/*
 * Merge.cpp
 *
 *  Created on: 24 de ago de 2016
 *      Author: johannes
 */

#include "Merge.h"

namespace Sort {

Merge::Merge(string filePath)
{
	this->_input = new vector<int>;
	this->_output = new vector<int>;

	ifstream input;
	string line;

	input.open(filePath, std::ios::in);
	while(getline(input, line))
		this->_input->push_back(stoi(line));

	input.close();

	this->Sort();
}


Merge::~Merge()
{
	delete this->_output;
}


void Merge::Sort()
{
	this->_output->resize(this->_input->size());
	this->Split(0, this->_input->size());
}


void Merge::Split(int Begin, int End)
{
	if(End - Begin >= 2){
		unsigned int Middle = (Begin + End)/2;
		this->Split(Begin, Middle);
		this->Split(Middle, End);
		this->Comp(Begin, Middle, End);
	}
}


void Merge::Comp(int Begin, int Middle, int End)
{
	int i = Begin;
	int j = Middle;

	for(int k = Begin; k < End; k++){
		if((i < Middle) && ((j >= End) || ((*this->_input)[i] <= (*this->_input)[j])))
			(*this->_output)[k] = (*this->_input)[i++];
		else
			(*this->_output)[k] = (*this->_input)[j++];
	}

	delete this->_input;
}


} /* namespace Sort */
