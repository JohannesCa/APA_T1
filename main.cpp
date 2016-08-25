/*
 * main.cpp
 *
 *  Created on: 24 de ago de 2016
 *      Author: johannes
 */

#include <iostream>
#include "Selection.h"
#include "Insertion.h"
#include "Merge.h"
#include "Quick.h"
#include "Heap.h"

using namespace std;

int main(int argc, char** argv)
{
	std::cout << "Have " << argc << " arguments:" << std::endl;
	for (int i = 0; i < argc; ++i) {
		std::cout << argv[i] << std::endl;
    }

	return 0;
}
