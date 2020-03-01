/*
 * binary-tree.c
 *
 *  Created on: Feb 29, 2020
 *      Author: glcesar
 */

#include <stdio.h>
#include <stdlib.h>

#include "binary-tree.h"

node_t *create_node(int data) {
        node_t *node = (node_t*) malloc(sizeof(node_t));

        node->data = data;

        node->left = NULL;
        node->right = NULL;

        return (node);
}

void create_tree(tree_t *tree) {
        tree->root = NULL;
}

void insert_node(node_t **root, int data) {
        node_t *new_node = NULL;
        if (*root == NULL) {
                new_node = create_node(data);
                *root = new_node;
                return;
        }

        if (data < (*root)->data) {
                insert_node(&(*root)->left, data);
        } else {
                insert_node(&(*root)->right, data);
        }
}

void destroy_tree(node_t *root) {
        if (root) {
                destroy_tree(root->left);
                destroy_tree(root->right);
                free(root);
                root = NULL;
        }
}

void print_inorder(node_t *root) {
        if (root) {
                print_inorder(root->left);
                printf("%d\n", root->data);
                print_inorder(root->right);
        }
}
