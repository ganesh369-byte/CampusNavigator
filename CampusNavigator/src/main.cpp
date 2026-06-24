#include <iostream>
#include "Graph.h"

using namespace std;

int main() {

    Graph g;

    g.addRoad("MainGate","TechMarket",300);

    g.addRoad("TechMarket","Library",500);

    g.addRoad("Library","Nalanda",400);

    g.addRoad("MainGate","MMM",700);

    g.addRoad("MMM","Nalanda",200);

    string start,end;

    cout<<"Start: ";
    cin>>start;

    cout<<"Destination: ";
    cin>>end;

    g.shortestPath(start,end);

    return 0;
}