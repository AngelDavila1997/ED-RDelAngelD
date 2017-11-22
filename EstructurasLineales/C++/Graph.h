#pragma once
#ifndef Graph_h
#define Graph_h

#include "Edge.h"
#include "List.cpp"
#include "Stack.cpp"
#include "Queue.cpp"
#include <string>

class Graph {
private:
	//Atributos
	int v, e;//Vertices y arista
	List <Edge> **g; //Apuntador a un arreglo de objetos (listas)
	//Apuntador a un arreglo

	//Para Depth First Search y Breadth First Search
	bool *visited; //Apuntador a un vector de enteros
	std::string path;

	std::string recursiveDFS(int origin);

public:
	//Metodos
	Graph();
	Graph(int v);
	int getEdges();
	int getVertices();
	bool isEdge(int s, int d);//Valida si existe la arista
	double getEWeight(int s, int d);//Devuelve el peso de la arista
	void insertE(int s, int d);//Inserta arista sin peso
	void insertE(int s, int d, double w);//Inserta arista con peso
	List<Edge> adjacentTo(int s);//Devuelve el vertice adjacente
	std::string to_string();//Devuelve e grafo en una cadena
	std::string BFS(int origin);
	std::string DFS(int origin);
};
#endif /*Graph_h*/