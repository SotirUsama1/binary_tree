#include "binary_trees.h"

/**
* binary_tree_inorder - prints the values of the tree's nodes inorder
* @tree: pointer to the tree root
* @func: pointer to a function
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
