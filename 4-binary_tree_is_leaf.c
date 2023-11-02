#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf node
 * @node: pointer to node to be checked if it is a leaf node
 * Return: 1 if node is a leaf node, else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
  if (node == NULL || node->leff != NULL || node->right != NULL)
    return (0);
  return (1);
}
