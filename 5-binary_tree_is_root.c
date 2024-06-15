#include "binary_trees.h"

/**
* binary_tree_is_root - checks if the node is root or not
* @node: pointer to the node
* Return: 1 if the node is root and 0 if not
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((node->parent == NULL) ? 1 : 0);
}
