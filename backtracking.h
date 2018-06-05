/**
*   @file backtracking.h
*   @brief This header file will contain the definitions of the function backtracking and the graph's structure
*
*   @author Stoian Andreea-Maria
*
*   @date 7/06/2018
*/

#ifndef BACKTRACKING_H_INCLUDED
#define BACKTRACKING_H_INCLUDED

struct a_graph {
    int no_nodes;
    int init;
    int *adj_matrix;
};

void backtracking(int *colored_vector, int current_position, struct a_graph *graph);

#endif // BACKTRACKING_H_INCLUDED
