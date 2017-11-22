#pragma once
#ifndef Edge_h
#define Edge_h

#include <string>

class Edge {
private:
	int dest;
	double weight;

public:
	Edge();
	//Constructores
	Edge(int dest);
	Edge(int dest, double weight);

	int getDest();
	double getWeight();
	std::string to_string();
};
#endif /*Edge_h*/