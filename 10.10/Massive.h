#pragma once
#include <iostream>
using namespace std;

class Massive {
	int size;
	int* arr;

public:
	Massive();

	Massive(const int s) : arr(nullptr), size(0) {
			if (s <= 0) {
				throw s;
			}
			arr = new int[s];

			for (int i = 0; i < s; i++) {
				arr[i] = i;
			}
			size = s;

	}

	~Massive();

	int GetElem(const int index);

};

