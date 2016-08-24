/*
 * Insertion.h
 *
 *  Created on: 24 de ago de 2016
 *      Author: johannes
 */

#ifndef INSERTION_H_
#define INSERTION_H_

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

namespace Sort {

class Insertion {
private:
	vector<int> *_input;
	void Sort(void);
	void Swap(vector<int>::iterator a, vector<int>::iterator b);

public:
	Insertion(string filePath);
	~Insertion();
};

} /* namespace Sort */

#endif /* INSERTION_H_ */
