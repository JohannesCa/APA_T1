/*
 * Heap.cpp
 *
 *  Created on: 25 de ago de 2016
 *      Author: johannes
 */

#include "Heap.h"

namespace Sort {

Heap::Heap(string filePath)
{
	this->_input = new vector<int>;

	ifstream input;
	string line;

	input.open(filePath, std::ios::in);
	while(getline(input, line))
		this->_input->push_back(stoi(line));

	input.close();

	this->Sort();
}


Heap::~Heap()
{
	delete this->_input;
}


int Heap::FindParent(int i)
{
	return floor((i-1)/2);
}


int Heap::FindLChild(int i)
{
	return (2*i + 1);
}


void Heap::Swap(int a, int b)
{
	int aux = (*this->_input)[a];
	(*this->_input)[a] = (*this->_input)[b];
	(*this->_input)[b] = aux;
}


void Heap::Sort()
{
	this->PrepHeap();

	int End = this->_input->size()-1;
	while(End > 0){
		Swap(0, End);
		End--;

		this->SiftDown(0, End);
	}
}


void Heap::PrepHeap()
{
	int begin = this->FindParent(this->_input->size()-1);

	while(begin >= 0){
		this->SiftDown(begin, this->_input->size()-1);
		begin--;
	}
}


void Heap::SiftDown(int Begin, int End)
{
	int root = Begin;

	while(FindLChild(root) <= End){
		int child = FindLChild(root);
		int auxi = root;

		if((*this->_input)[auxi] < (*this->_input)[child])
			auxi = child;

		if((child+1 <= End) && ((*this->_input)[auxi] < (*this->_input)[child+1]))
			auxi = child + 1;

		if(auxi == root)
			return;
		else{
			this->Swap(root, auxi);
			root = auxi;
		}

	}
}

} /* namespace Sort */
