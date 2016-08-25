/*
 * Quick.h
 *
 *  Created on: 25 de ago de 2016
 *      Author: johannes
 */

#ifndef QUICK_H_
#define QUICK_H_

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

namespace Sort {

class Quick {
private:
	vector<int> *_input;
	void Swap(int a, int b);
	void Sort(int Lo, int Hi);
	int Part(int Lo, int Hi);

public:
	Quick(string filePath);
	~Quick();
};

} /* namespace Sort */

#endif /* QUICK_H_ */
