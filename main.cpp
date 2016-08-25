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

void help(const char *prog)
{
	cout << "\nUse: " << prog << " <method_name> <input_file_name>\n\n"
			"Available sorting methods:\n"
			"\t- selection\n"
			"\t- insertion\n"
			"\t- merge\n"
			"\t- quick\n"
			"\t- heap\n\n";

}

int main(int argc, char** argv)
{
	/*
	if(argc != 3){
		help(argv[0]);
		return -1;
	}
	*/
	string method = "heap";//argv[1];
	string fName = "90.100000.1.in";//argv[2];
	string fPath = "Resources/";

	if(method == "selection"){
		Sort::Selection sort(fName, fPath);

	}else if(method == "insertion"){
		Sort::Insertion sort(fName, fPath);

	}else if(method == "merge"){
		Sort::Merge sort(fName, fPath);

	}else if(method == "quick"){
		Sort::Quick sort(fName, fPath);

	}else if(method == "heap"){
		Sort::Heap sort(fName, fPath);

	}else{
		help(argv[0]);
		return -1;
	}

	return 0;
}
