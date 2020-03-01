/*
 * binary-tree.c
 *
 *  Created on: Feb 29, 2020
 *      Author: glcesar
 */
#ifndef BINARY_TREE_H_INCLUDED
#define BINARY_TREE_H_INCLUDED

#include <stdbool.h>

typedef struct node_s {
        int data;
        struct node_s *left;
        struct node_s *right;
} node_t;

typedef struct {
        node_t *root;
} tree_t;

node_t *create_node(int data);
void insert_node(node_t **root, int data);
void create_tree(tree_t *tree);
void destroy_tree(node_t *root);
bool is_node_in_tree(tree_t tree, int data);
node_t *search_on_tree(node_t *root, int data);
void print_inorder(node_t *root);

#endif /*BINARY_TREE_H_INCLUDED*/
