/**
*   @file make_graph.h
*   @brief This header file will contain the definitions of the functions from the file make_graph.c
*
*   @author Stoian Andreea-Maria
*
*   @date 7/06/2018
*/

#ifndef MAKE_GRAPH_H_INCLUDED
#define MAKE_GRAPH_H_INCLUDED
#include "backtracking.h"

void set_adj_matrix_value(struct a_graph *graph, int row_index, int column_index, int element_value);
int get_adj_matrix_value(struct a_graph *graph, int row_index, int column_index);
void init_graph_file(struct a_graph *graph);

#endif // MAKE_GRAPH_H_INCLUDED
