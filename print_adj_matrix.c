/**
*   @file print_adj_matrix.c
*   @brief For simplicity, I choose to print the adjancy matrix on lcd.
*
*   @author Stoian Andreea-Maria
*
*   @date 7/06/2018
*/

#include<stdio.h>
#include"print_adj_matrix.h"
#include"make_graph.h"


void print_adj_matrix(struct a_graph *graph){
    int iterator_rows;
    int iterator_columns;
    int aux;

    if (graph->init == 1){
        printf("=== Printing adj_matrix ===\n");
        for (iterator_rows = 0; iterator_rows < graph->no_nodes; iterator_rows++ ){
            for (iterator_columns = 0; iterator_columns < graph->no_nodes; iterator_columns++ ){
                aux = get_adj_matrix_value(graph, iterator_rows, iterator_columns);
                printf(" %d ", aux);
            }
            printf("\n");
        }
    }else{
        printf("\nPlease read the adj_matrix first");
    }
}
