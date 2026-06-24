#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

class Graph {

private:

unordered_map<string,
vector<pair<string,int>>> adj;

public:

void addRoad(string u,string v,int dist);

void shortestPath(string start,
string end);

};

#endif