/**
*   @file backtracking.c
*   @brief I customized backtracking classic function.
*
*   @author Stoian Andreea-Maria
*
*   @date 7/06/2018
*/

#include<stdio.h>
#include"backtracking.h"
#include"make_graph.h"

void backtracking(int *colored_vector, int current_position, struct a_graph *graph){

    int iterator1;
    int iterator2;

    for( iterator1 = 0; iterator1 < graph->no_nodes; iterator1++ ){

        colored_vector[current_position] = iterator1+1;

        int ok = 1;

        for( iterator2 = 0; iterator2 < current_position; iterator2++ ){

            int aux = get_adj_matrix_value(graph, current_position, iterator2);
            if( colored_vector[iterator2] == colored_vector[current_position] && ( aux != 0 ) ){

                ok = 0;
            }
        }

        if( ok == 1 ){

            if( current_position == graph->no_nodes - 1 ){

                printf("=== The order of coloring is: ===\n ");
                for( iterator2 = 0; iterator2 < graph->no_nodes; iterator2++ ){

                    printf("Color for node %d is : %d \n ", iterator2+1,colored_vector[iterator2]);

                }
            int min=0;

            int *vect_min = calloc(graph->no_nodes,sizeof(int));
            for( int j = 0;j <= current_position; j++ )
                if( colored_vector[j] != 0 )
                    vect_min[colored_vector[j]]=1;
            for( int j = 1;j <= current_position+1;j++ )
                if(vect_min[j] == 1)
                    min++;
            printf("=== The minimum number that can be used for coloring this graph is: === %d",min );

            printf("\n");
            exit(0);
            }
            else backtracking(colored_vector, current_position + 1, graph);
         }
        }
}
