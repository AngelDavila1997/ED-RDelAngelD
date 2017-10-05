#pragma once
#include <stdio.h>
#include <vector>
#include <iostream>

class SortClass {
public:
	void selection(std::vector<int>& a);
	void insertion(std::vector<int>& a);
	void bubble(std::vector<int>& a);
	void swap(std::vector<int>& a, int i, int j);
	void quicksort(std::vector<int>& a, int i, int f);
	void mergeSort(std::vector<int>& a);
	std::vector<int> merge(std::vector<int> &a, std::vector<int> &b);
};

