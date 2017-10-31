#include "Edge.h"
#include "Vertex.h"


Edge::Edge(Vertex& from, Vertex& to, std::string story)
	: mFrom(from)
	, mTo(to)
	, mStory(story)
{}


Edge::~Edge()
{}