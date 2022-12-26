#pragma once
#include <iostream>
using namespace std;

class Massive {
	int size;
	int* arr;

public:
	Massive();

	Massive(const int s) : arr(nullptr), size(0) {}

	~Massive();

	int GetElem(const int index);

};

