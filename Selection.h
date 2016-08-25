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
	vector<int> *_input;
	vector<int> *_output;
	void Sort(void);

public:
	Selection(string file);
	vector<int> getOrdered(void);
	~Selection();
};

} /* namespace Sort */

#endif /* SELECTION_H_ */
