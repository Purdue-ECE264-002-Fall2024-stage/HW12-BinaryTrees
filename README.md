# Print the path from a node to the root

Learning Goals
==============

* Construct binary trees from in-order and post-order expressions
* Find the path from a node (not necessarily a leaf node) to the root

Construct a Binary Tree
=======================

Given the in order and post order expressions of a binary tree, you are asked to construct the binary tree.

You may assume that all inputs are valid, that the in-order and the post-order are from the same binary tree.

Note that unlike the previous assignment, the binary trees of this assignent are not necessarily binary search trees.

Path to Root
============

Consider [a
binary](https://i1.wp.com/www.techiedelight.com/wp-content/uploads/Root-To-Leaf-Paths.png?resize=323%2C338&ssl=1). The
path from node 7 includes 7, 3, and 1. The path from 8 includes 8, 6,
3, and 1. Please notice that this is not necessarily a binary search
tree.

For simplicity, this assignment asks you to print the path from bottom to top (the root is printed last).


Helper functions are allowed in both parts of this assignment.

Submission
==========

You are only required to submit tree.c to the assignment on Gradescope.
