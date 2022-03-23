#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_leaves - measures the size of a binary tree
 * @tree: pointer to tree
 * Return: measure of tree size
 */
 size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_flag = 0;

	if (!tree)
		return (0);
	leaf_flag = binary_tree_is_leaf(tree);
	return (leaf_flag + binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
