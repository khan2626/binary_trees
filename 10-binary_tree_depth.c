#include "binary_trees.h"

/**
 * binary_tree_depth - Measures node's depth in a binary tree
 * @tree: Pointer to the node to measure the depth
 * Return: depth, else 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
  return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
