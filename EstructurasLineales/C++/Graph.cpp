#include "Graph.h"

Graph::Graph(int v)
{
	this->v = v;
	this->e = 0;
	g = new List<Edge>*[v + 1];

	for (int i = 1; i < v + 1; i++) {
		g[i] = new List<Edge>();//Instancia una lista en cada elemento del arreglo
	}
}

int Graph::getEdges()
{
	return this->e;
}

int Graph::getVertices()
{
	return this->v;
}

bool Graph::isEdge(int s, int d)
{
	List<Edge> l = *this->g[s];
	Node<Edge> *p = l.first;
	for (int i = 0; i < l.length; i++) {
		if (d == p->data.getDest()) {
			return true;
		}
		p = p->next;
	}
	return false;
}

double Graph::getEWeight(int s, int d)
{
	List<Edge> l = *this->g[s];
	Node<Edge> *p = l.first;
	for (int i = 0; i < l.length; i++) {
		if (d == p->data.getDest()) {
			return p->data.getWeight();
		}
		p = p->next;
	}
	return -1.0;
}

void Graph::insertE(int s, int d)
{
	insertE(s, d, 0.0);
}

void Graph::insertE(int s, int d, double w)
{
	if (!isEdge(s,d)) {
		this->g[s]->insertFirst(*new Edge(d, w));
		this->e++;
	} else {
		std::cout << "No es posible insertar el elemento, (" << s << "," << d << ") ya se encuentra en el grafo" << endl;
	}
}

List<Edge> Graph::adjacentTo(int s)
{
	return *this->g[s]; //Me va a mandar la lista
}

std::string Graph::to_string()
{
	return std::string();
}
