#include "binary_trees.h"

/**
 * binary_tee_leaves - Counts number of leaves in a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: Number of leaves in the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
  size_t leaves_num = 0;

  if (tree)
    {
      leaves_num += (!tree->left && !tree->right) ? 1 : 0;
      leaves_num += binary_tree_leaves(tree->left);
      leaves_num += binary_tree_leaves(tree->right);
    }
  return (leaves_num);
}
