#include "binary_trees.h"

/**
* binary_tree_preorder - prints the values of the tree's nodes in
*						 preorder
* @tree: pointer to the tree root
* @func: pointer to a function
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
