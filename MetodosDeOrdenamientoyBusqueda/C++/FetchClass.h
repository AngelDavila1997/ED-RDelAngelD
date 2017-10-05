#pragma once
#include <cstdlib>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <random>

class FetchClass {
protected:
	std::vector<int> myArray;
public:
	virtual std::vector<int> RandArray(int size);
	FetchClass();
	virtual void setArray(std::vector<int> a);
	virtual std::vector<int> getArray();
	virtual void showArray();
	virtual void showFetch(int position);
	virtual void showArray(std::vector<int> &a);
};