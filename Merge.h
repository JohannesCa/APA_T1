/*
 * Merge.h
 *
 *  Created on: 24 de ago de 2016
 *      Author: johannes
 */

#ifndef MERGE_H_
#define MERGE_H_

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

namespace Sort {

class Merge {
private:
	vector<int> *_input;
	vector<int> *_output;
	void Sort(void);
	void Split(void);
	void Comp(void);

public:
	Merge(string filePath);
	~Merge();
};

} /* namespace Sort */

#endif /* MERGE_H_ */
