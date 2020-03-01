/*
 ============================================================================
 Name        : binary-tree.c
 Author      : glcesar
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

#include "binary-tree.h"

int main(void) {
        tree_t tree;

        create_tree(&tree);

        insert_node(&tree.root, 10);
        insert_node(&tree.root, 5);
        insert_node(&tree.root, 11);

        print_inorder(tree.root);

        if (is_node_in_tree(tree, 11)) {
                printf("Node 11 is on this tree!\n");
        }

        if (is_node_in_tree(tree, 6)) {
                printf("Node 6 is on this tree!\n");
        }

        if (is_node_in_tree(tree, 5)) {
                printf("Node 5 is on this tree!\n");
        }

        destroy_tree(tree.root);

        return 0;
}
