#include "binary_trees.h"

unsigned char is_leaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree, size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * is_leaf - Checks if node is a leaf node
 * @node: Pointer the root node of the tree
 * Return: 1 if it's a leaf node, else 0
 */

unsigned char is_leaf(const binary_tree_t *node)
{
  return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - Returns depth of node
 * @tree: Pointer to the root node of the tree
 * Return: Node's depth
 */

size_t depth(const binary_tree_t *tree)
{
  return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - Returns a leaf of a binary tree
 * Return: Pointer to first leaf
 */

const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
  if (is_leaf(tree) == 1)
    return (tree);
  return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - Checks if binary tree is perfect recursively
 * @tree: Pointer to the root node of the tree
 * @level: level of current node
 * @leaf_depth: depth of a leaf
 * Return: 1 if tree is perfect, els 0.
 */

int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
  if (is_leaf(tree))
    return (level == leaf_depth ? 1 : 0);
  if (tree->left == NULL || tree->right == NULL)
    return (0);
  return (is_perfect_recursive(tree->left, leaf_depth, level + 1) && is_perfect_recursive(tree->reight, leaf_depth, level + 1));
}

/**
 * binary_tree_isperfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * Return: 0 if tree is not perfect, else 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
  if (tree == NULL)
    return (0);
  return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
