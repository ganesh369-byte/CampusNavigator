#include "Graph.h"
#include <algorithm>

void Graph::addRoad(string u,
string v,int dist){

adj[u].push_back({v,dist});

adj[v].push_back({u,dist});

}

void Graph::shortestPath(
string start,
string end){

unordered_map<string,int> distance;

unordered_map<string,string> parent;

priority_queue<
pair<int,string>,
vector<pair<int,string>>,
greater<pair<int,string>>
> pq;

for(auto node:adj){

distance[node.first]=1e9;

}

distance[start]=0;

pq.push({0,start});

while(!pq.empty()){

auto current=pq.top();

pq.pop();

int dist=current.first;

string node=current.second;

for(auto neighbour:adj[node]){

string next=neighbour.first;

int weight=neighbour.second;

if(dist+weight
<distance[next]){

distance[next]=dist+weight;

parent[next]=node;

pq.push({
distance[next],
next
});

}

}

}

vector<string> path;

string current=end;

while(current!=start){

path.push_back(current);

current=parent[current];

}

path.push_back(start);

reverse(path.begin(),
path.end());

cout<<"\nShortest Path:\n";

for(string x:path){

cout<<x<<" ";

if(x!=end)

cout<<"-> ";

}

cout<<"\nDistance: "
<<distance[end]
<<" meters\n";

}