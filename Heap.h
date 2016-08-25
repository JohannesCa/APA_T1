/*
 * Heap.h
 *
 *  Created on: 25 de ago de 2016
 *      Author: johannes
 */

#ifndef HEAP_H_
#define HEAP_H_

#include <iostream>
#include <vector>
#include <fstream>
#include <math.h>

using namespace std;

namespace Sort {

class Heap {
private:
	vector<int> *_input;
	int FindParent(int i);
	int FindLChild(int i);
	void Swap(int a, int b);
	void Sort(void);
	void PrepHeap(void);
	void SiftDown(int Begin, int End);

public:
	Heap(string filePath);
	~Heap();
};

} /* namespace Sort */

#endif /* HEAP_H_ */
