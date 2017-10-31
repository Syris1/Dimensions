#pragma once

#include <set>

class Edge;
class Vertex
{
public:
	std::set<Edge&> edgesTo;
	std::set<Edge&> edgesFrom;
	std::string mChoice;

	Vertex(std::string choice);
	~Vertex();

};

