/*********************
 * Name:Marshal Pfluger
 * Final Project
 * Create a working bi-directional weighted
 * graph class with all the standard methods
 * for a data structure of that type.
**********************/

#include "graph.h"

//Constructor initializes counters
Graph::Graph() {
    edgeCount = 0;
    vertCount = 0;
}

//Destructor calls clearGraph to delete graph
Graph::~Graph(){
    clearGraph();
}

//adds vertices
void Graph::addVerts(int num){
    vertCount = num;
    //Create graph.
    adList = new std::list <Edge*>[num];
}

//Adds edges between vertexes
bool Graph::addEdge(int start, int end, int weight) {
    bool status = false;
    if(start < vertCount && end < vertCount) {
        //Allocate memory for new Edge
        Edge *newEdge = new Edge;
        //set new edge values to given values
        newEdge->edgeId = end;
        newEdge->weight = weight;
        //push new node to back of current list
        adList[start].emplace_back(newEdge);
        edgeCount++;
        status = true;
    }
    return status;
}

//step through graph and display adjacency list
void Graph::displayAdList(){
    if(!isEmpty()){
        std::cout << "**Display Adj list**" << std::endl;
        std::cout << std::endl;
        for(int i = 0; i < (vertCount); i++){
            std::cout << "__________________" << std::endl;
            std::cout << "-Start Vert:" << i << "-" << std::endl;
            for (auto const&  it : adList[i]){
                std::cout << "End Vert:" << it->edgeId << " Weight:" << it->weight << std::endl;
            }
        }
    }
}

//private member function for dfs overload
void Graph::dfsOverload(int id,bool visited[]){
    visited[id]=true;
    std::cout<<" "<<id<<", ";
    //range based for loop to iterate through graph
    for(auto const&  it : adList[id]){
        if (!visited[it->edgeId]){
            // recurse
            dfsOverload(it->edgeId,visited);
        }
    }
}

//Public member function for dfs
void Graph::dfs(int id){
    if(id < vertCount){
        if(!isEmpty()){
            bool *visited;
            visited = new bool[vertCount];
            for (int index = 0; index < vertCount; index++){
                visited[index] = false;
            }
            for(int i = 0; i < vertCount; i++){
                if (!visited[id]){
                    //send to private overload function to recurse through graph
                    dfsOverload(id,visited);
                    std::cout << std::endl;
                }
            }
            delete[] visited;
        }
    }

}

//Iterate through list and find edge to remove
bool Graph::remEdge(int start, int end){
    bool status = false;
    for (auto&  it : adList[start]){
        if(it->edgeId == end){
            adList[start].remove(it);
            edgeCount--;
            status = true;
            break;
        }
    }
    return status;
}

void Graph::clearGraph(){
    //delete allocated memory for graph
    delete [] adList;
    vertCount = 0;
    edgeCount = 0;
}

int Graph::numVert(){
    return vertCount;
}

int Graph::numEdge(){
    return edgeCount;
}

bool Graph::isEmpty(){
    bool status = true;
    if(vertCount != 0){
        status = false;
    }
    return status;
}




