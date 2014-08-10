/*
 * Test.c
 *
 *  Created on: Jul 27, 2014
 *      Author: Matt.Gawlik
 */

#include <iostream>
#include <LinkedList.h>
using namespace std;

int main() {

	LinkedList* list = new LinkedList(0);
	list->Print();
	list->Append(0);
	list->Append(1);
	list->Append(3);
	list->Append(2);
	list->Insert(4);

	list->Print();

	return 0;
}


