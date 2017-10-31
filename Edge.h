#pragma once
class Vertex;
class Edge
{
public:
	Vertex& mFrom;
	Vertex& mTo;
	std::string mStory;
	Edge(Vertex& from, Vertex& to, std::string story);
	~Edge();
};