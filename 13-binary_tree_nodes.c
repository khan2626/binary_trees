#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least one child
 * @tree: Pointer to the root node
 * Return: node count, else 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
  size_t node_count = 0;

  if (tree)
    {
      node_count += (tree->left || tree->right) ? 1 : 0;
      node_count += binary_tree_nodes(tree->left);
      node_count += binary_tree_nodes(tree->right);
    }
  return (node_count);
}
