/*
 ============================================================================
 Name        : binary-tree.c
 Author      : glcesar
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "binary-tree.h"

int main(void) {
        tree_t tree;

        create_tree(&tree);

        insert_node(&tree.root, 10);
        insert_node(&tree.root, 5);
        insert_node(&tree.root, 11);

        print_inorder(tree.root);

        destroy_tree(tree.root);

        return 0;
}
