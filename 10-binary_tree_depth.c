#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to tree
 * Return: measure of tree depth
 */
 size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);

	counter = 1 + binary_tree_depth(tree->parent);
	return (counter);
}
