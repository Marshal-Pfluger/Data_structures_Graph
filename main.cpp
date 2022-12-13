/*********************
 * Name:Marshal Pfluger
 * Final Project
 * Create a working bi-directional weighted
 * graph class with all the standard methods
 * for a data structure of that type.
**********************/

#include "main.h"

int main() {
    //Seed rand number generation
    srand(time(nullptr));

    //create instance of sequence 1 testing
    Graph graph1;

    //Start test sequence 1
    std::cout << "*******************Test Sequence 1*********************" << std::endl;
    // checking empty graph
    //********************
    std::cout << "Checking graph" << std::endl;
    std::cout << "..." << std::endl;
    if (graph1.isEmpty()) {
        std::cout << "The graph is empty" << std::endl;
    } else {
        graph1.displayAdList();
        std::cout << "Number of vertices:" << graph1.numVert() << std::endl;
        std::cout << "Number of edges:" << graph1.numEdge() << std::endl;
    }
    std::cout << "*******************" << std::endl;
    std::cout << std::endl;

    //Add vertices to list.
    //*********************
    std::cout << "adding vertices to graph" << std::endl;
    std::cout << "..." << std::endl;
    //generate random number for testing
    int randNum = rand() % (MAX - MIN + 1) + MIN;
    graph1.addVerts(randNum);
    std::cout << "adding edges to graph" << std::endl;
    std::cout << "..." << std::endl;
    // adding edges.

    for (int i = 0; i < MAX; i++) {
        int randEdge1 = rand() % (randNum - FLOOR + 1) + FLOOR;
        int randEdge2 = rand() % (randNum - FLOOR + 1) + FLOOR;
        int randWeight = rand() % 100;
        graph1.addEdge(randEdge1, randEdge2, randWeight);
    }

    std::cout << std::endl;
    // display graph to check operation
    std::cout << "Checking graph" << std::endl;
    std::cout << "..." << std::endl;
    if (graph1.isEmpty()) {
        std::cout << "The graph is empty" << std::endl;
    } else {
        graph1.displayAdList();
        std::cout << "*******************" << std::endl;
        std::cout << "Number of vertices:" << graph1.numVert() << std::endl;
        std::cout << "Number of edges:" << graph1.numEdge() << std::endl;
        std::cout << "*******************" << std::endl;
    }
    std::cout << std::endl;

    // checking remove node function
    std::cout << "Checking remove function" << std::endl;
    std::cout << "Removing random edges" << std::endl;
    std::cout << "..." << std::endl;
    for(int i = 0; i < MAX; i++){
        int remEdge1 = rand() % ((randNum-1) - FLOOR + 1) + FLOOR;
        int remEdge2 = rand() % ((randNum-1) - FLOOR + 1) + FLOOR;
        if(graph1.remEdge(remEdge1, remEdge2)){
            std::cout << "Removing edge from start Vert:"
            << remEdge1 << " to end Vert:" << remEdge2 << std::endl;
        }
    }
    std::cout << std::endl;

    // display graph to check operation
    std::cout << "Checking graph" << std::endl;
    std::cout << "..." << std::endl;
    if (graph1.isEmpty()) {
        std::cout << "The graph is empty" << std::endl;
    } else {
        graph1.displayAdList();
        std::cout << "*******************" << std::endl;
        std::cout << "Number of vertices:" << graph1.numVert() << std::endl;
        std::cout << "Number of edges:" << graph1.numEdge() << std::endl;
        std::cout << "*******************" << std::endl;
    }
    std::cout << std::endl;

    //Checking depth first search
    for(int i = 0; i < MIN; i++) {
        int randDfs = rand() % (randNum - FLOOR + 1) + FLOOR;
        std::cout << "Checking Depth First Search starting from vert: "
                  << randDfs << std::endl;
        graph1.dfs(randDfs);
        std::cout << "*******************" << std::endl;
    }
    std::cout << "\n" << "\n" << "\n" << std::endl;

    //create instance of test sequence 2
    Graph graph2;

    //Checking test sequence 2
    std::cout << "******************Test Sequence 2*********************" << std::endl;
    // checking empty graph
    //********************
    std::cout << std::endl;
    std::cout << "Checking graph" << std::endl;
    std::cout << "..." << std::endl;
    if (graph2.isEmpty()) {
        std::cout << "The graph is empty" << std::endl;
    } else {
        graph2.displayAdList();
        std::cout << "Number of vertices:" << graph2.numVert() << std::endl;
        std::cout << "Number of edges:" << graph2.numEdge() << std::endl;
    }
    std::cout << "*******************" << std::endl;
    std::cout << std::endl;

    //Add vertices to list.
    //*********************
    std::cout << "adding vertices to graph" << std::endl;
    std::cout << "..." << std::endl;
    //generate random number for testing
    int randNum2 = rand() % (MAX2 - MIN + 1) + MIN;
    graph2.addVerts(randNum2);
    std::cout << "adding edges to graph" << std::endl;
    std::cout << "..." << std::endl;
    std::cout <<  std::endl;

    // adding edges.
    for (int i = 0; i < MIN; i++) {
        int randEdge1 = rand() % (randNum2 - FLOOR + 1) + FLOOR;
        int randEdge2 = rand() % (randNum2 - FLOOR + 1) + FLOOR;
        int randWeight = rand() % 100;
        graph2.addEdge(randEdge1, randEdge2, randWeight);
    }
    std::cout << std::endl;

    // display graph to check operation
    std::cout << "Checking graph" << std::endl;
    std::cout << "..." << std::endl;
    if (graph2.isEmpty()) {
        std::cout << "The graph is empty" << std::endl;
    } else {
        graph2.displayAdList();
        std::cout << "*******************" << std::endl;
        std::cout << "Number of vertices:" << graph2.numVert() << std::endl;
        std::cout << "Number of edges:" << graph2.numEdge() << std::endl;
        std::cout << "*******************" << std::endl;
    }
    std::cout << std::endl;

    // checking remove edge function
    std::cout << "Checking remove function" << std::endl;
    std::cout << "Removing random edges" << std::endl;
    std::cout << "..." << std::endl;
    for(int i = 0; i < (MAX+20); i++){
        int remEdge1 = rand() % ((randNum2-1) - FLOOR + 1) + FLOOR;
        int remEdge2 = rand() % ((randNum2-1) - FLOOR + 1) + FLOOR;
        if(graph2.remEdge(remEdge1, remEdge2)){
            std::cout << "Removing edge from start Vert:"
            << remEdge1 << " to end Vert:" << remEdge2 << std::endl;
        }
    }
    std::cout << std::endl;

    // display graph to check operation
    std::cout << "Checking graph" << std::endl;
    std::cout << "..." << std::endl;
    if (graph2.isEmpty()) {
        std::cout << "The graph is empty" << std::endl;
    } else {
        graph2.displayAdList();
        std::cout << "*******************" << std::endl;
        std::cout << "Number of vertices:" << graph2.numVert() << std::endl;
        std::cout << "Number of edges:" << graph2.numEdge() << std::endl;
        std::cout << "*******************" << std::endl;
    }
    std::cout << std::endl;

    // adding edges.
    for (int i = 0; i < MIN; i++) {
        int randEdge1 = rand() % (randNum2 - FLOOR + 1) + FLOOR;
        int randEdge2 = rand() % (randNum2 - FLOOR + 1) + FLOOR;
        int randWeight = rand() % 100;
        graph2.addEdge(randEdge1, randEdge2, randWeight);
    }
    std::cout << std::endl;

    // display graph to check operation
    std::cout << "Checking graph" << std::endl;
    std::cout << "..." << std::endl;
    if (graph2.isEmpty()) {
        std::cout << "The graph is empty" << std::endl;
    } else {
        graph2.displayAdList();
        std::cout << "*******************" << std::endl;
        std::cout << "Number of vertices:" << graph2.numVert() << std::endl;
        std::cout << "Number of edges:" << graph2.numEdge() << std::endl;
        std::cout << "*******************" << std::endl;
    }
    std::cout << std::endl;

    //Checking depth first search
    for (int i = 0; i < MIN; i++) {
        int randDfs = rand() % (randNum2 - FLOOR + 1) + FLOOR;
        std::cout << "Checking Depth First Search starting from vert: "
                  << randDfs << std::endl;
        graph2.dfs(randDfs);
        std::cout << "*******************" << std::endl;
    }

    return 0;
}