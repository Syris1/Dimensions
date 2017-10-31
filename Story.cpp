#include "Story.h"



Story::Story()
{
	vertices = std::set<Vertex&>();
	nbEdges = 0;
}

Story::~Story()
{}

void Story::add(Vertex& v) {
	vertices.insert(v);
}

void Story::connect(Vertex& src, Vertex& dest, std::string story) {
	Edge e(src, dest, story);
	src.edgesTo.insert(e);
	dest.edgesFrom.insert(e);
	nbEdges++;
}