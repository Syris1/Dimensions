#include "Vertex.h"
#include "Edge.h"


Vertex::Vertex(std::string choice)
	: mChoice(choice)
{
	edgesTo = std::set<Edge&>();
	edgesFrom = std::set<Edge&>();
}


Vertex::~Vertex()
{}
