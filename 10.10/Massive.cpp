#include "Massive.h"
Massive::Massive() {
	size = 0;
	arr = 0;
}

Massive:: ~Massive() {
	delete[] arr;
}

int Massive::GetElem(const int index) {
	if (index < 0 || index >= size) {
		throw "Incorrect index!\n";
	}
	return arr[index];
}