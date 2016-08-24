/*
 * Selection.cpp
 *
 *  Created on: 24 de ago de 2016
 *      Author: johannes
 */

#include "Selection.h"

namespace Sort {

Selection::Selection(string filePath) // Lembrar de passar o caminho completo
{
	this->_input = new vector<int>;
	this->_output = new vector<int>;

	ifstream input;
	string line;

	input.open(filePath, std::ios::in);
	while(getline(input, line))
		this->_input->push_back(stoi(line));

	input.close();
}


Selection::~Selection()
{
	delete this->_output;
	delete this->_input;
}


void Selection::Sort(void)
{
	while(!this->_input->empty()){
		vector<int>::iterator min = this->_input->begin();
		vector<int>::iterator j;

		for(j = this->_input->begin()+1; j < this->_input->end(); j++){
			if(*min > *j)
				min = j;
		}
		if(min != j){
			this->_output->push_back(*min);
			this->_input->erase(min);
		}
	}
}


vector<int> Selection::getOrdered(void) // Get a copy of the ordered vector
{
	return *(this->_output);
}


} /* namespace Sort */
