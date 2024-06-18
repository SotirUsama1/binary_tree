#include "binary_trees.h"

/**
* binary_tree_height - returns the height of the tree
* @tree: pointer to the root node
* Return: size_t for the height of the tree
*/
size_t binary_tree_height(const binary_tree_t* tree)
{
    size_t hl = -1;
    size_t hr = -1;

    if(!tree)
        return -1;

    hl = 1 + binary_tree_height(tree->left);
    hr = 1 + binary_tree_height(tree->right);

    if (hl > hr)
        return (hl);
    return hr;
}