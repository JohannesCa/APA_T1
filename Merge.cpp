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

}


void Merge::Split()
{

}


void Merge::Comp()
{

}


} /* namespace Sort */
