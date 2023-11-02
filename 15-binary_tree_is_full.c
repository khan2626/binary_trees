#include "binary_trees.h"

/**
 * is_full_recursive - Checks if binary is full recursive
 * @tree: Pointer the root node of the tree
 * Return: 1, else 0 if tree is not full
 */

int is_full_recursive(const binary_tree_t *tree)
{
  if (tree != NULL)
    {
      if ((tree-> != NULL && tree->right == NULL) ||
	  (tree->left == NULL && tree->right != NULL) ||
	  is_full_recursive(tree->left) == 0 ||
	  is_full_recursive(tree->right) == 0)
	return (0);
    }
  return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree
 * Return: 0 if if tree is NULL, else 1.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
  if (tree == NULL)
    return (0);
  return (is_full_recursive(tree));
}
