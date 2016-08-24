/*
 * main.cpp
 *
 *  Created on: 24 de ago de 2016
 *      Author: johannes
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	cout << "Hello World\n\nYou tipped: ";
	for(int i = 0; i < argc; i++){
		cout << argv[i];
	}


	return 0;
}
