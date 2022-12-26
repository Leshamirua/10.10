#include "Massive.h"
Massive::Massive() {
	size = 0;
	arr = 0;
}

Massive::Massive(const int s) : arr(nullptr), size(0) {
	if (s <= 0) {
		throw s;
	}
	arr = new int[s];

	for (int i = 0; i < s; i++) {
		arr[i] = i;
	}
	size = s;

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