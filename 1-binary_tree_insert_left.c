#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as a left-child
 * @parent: pointer to parent node to insert the child
 * @value: integer value to sore in the new node
 * Return: pointer to new node, else NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  binary_tree_t *newnode;

  if (parent == NULL)
    return (NULL);

  newnode = binary_tree_node(parent, value);
  if (newnode == NULL)
    return (NULL);
  if (parent->left != NULL)
    {
      newnode->left = parent->left;
      parent->left->parent = newnode;
    }
  parent->left = newnode;

  return (newnode);
}
