#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: 1 (if the node is a leaf).
 *         Or 0 (otherwise or if node is NULL).
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL || node->left != NULL || node->right != NULL)
return (0);

return (1);
}
