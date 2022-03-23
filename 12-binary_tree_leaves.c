#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if node given is leaf node
 * @node: node to check
 * Return: 1 if leaf 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
		return (1);
	return (0);
}
/**
 * binary_tree_leaves - measures the size of a binary tree
 * @tree: pointer to tree
 * Return: measure of tree size
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (!tree)
		return (0);
	l = binary_tree_is_leaf(tree);
	return (l + binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
