#pragma once

#include <set>

#include "Vertex.h"
#include "Edge.h"

#define DEPTH 1
#define WIDTH 2

class Story
{
public:
	std::set<Vertex&> vertices;
	int nbEdges;

	Story();
	~Story();

	Vertex& add(std::string choice);
	void add(Vertex& v);
	void connect(Vertex& src, Vertex& dest, std::string story);

	void explore(int idSrc, int type);
	void inDepth
};

