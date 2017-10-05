#pragma once
#include "FetchClass.h"

#include <stdio.h>
class SecClass : public FetchClass {
public:
	SecClass();
	int sFetch(int e);
	static int sFetch(std::vector<int> &a, int e);
};