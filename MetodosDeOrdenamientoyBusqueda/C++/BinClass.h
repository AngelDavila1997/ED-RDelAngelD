#pragma once
#include "FetchClass.h"
#include "SortClass.h"
#include <stdio.h>

class BinClass : public FetchClass, public SortClass {
public:
	BinClass();
	int bFetch(int e);
	static int bFetch(std::vector<int> &a, int e);
};
