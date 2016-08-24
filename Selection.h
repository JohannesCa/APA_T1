/*
 * Selection.h
 *
 *  Created on: 24 de ago de 2016
 *      Author: johannes
 */

#ifndef SELECTION_H_
#define SELECTION_H_

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

namespace Sort {

class Selection {
private:
	void Sort(void);
	vector<int> *_input;
	vector<int> *_output;

public:
	Selection(string file);
	vector<int> getOrdered(void);
	~Selection();
};

} /* namespace Sort */

#endif /* SELECTION_H_ */
