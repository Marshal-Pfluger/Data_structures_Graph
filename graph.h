/*********************
 * Name:Marshal Pfluger
 * Final Project
 * Create a working bi-directional weighted
 * graph class with all the standard methods
 * for a data structure of that type.
**********************/

#ifndef FINAL_PROJECT_GRAPH_H
#define FINAL_PROJECT_GRAPH_H
#include <iostream>
#include "data.h"
#include <list>
#include <iterator>

class Graph {
public:
//Constructor/destructor
    Graph();
    ~Graph();

// public member functions for Graph
    void addVerts(int);
    bool addEdge(int, int, int);
    void displayAdList();
    void clearGraph();
    bool remEdge(int, int);
    void dfs(int);
    int numVert();
    bool isEmpty();
    int numEdge();

private:
//private member function fo dfs overload.
    void dfsOverload(int,bool*);
// structure for graph.
    std::list<Edge*> *adList;
    int edgeCount;
    int vertCount;
};

#endif //FINAL_PROJECT_GRAPH_H
