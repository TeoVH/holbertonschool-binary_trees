# Binary Trees in C

Implementation of binary tree primitives in C, completed as part of the Holberton School low-level programming curriculum (project **0x1D — C - Binary trees**). Each file implements a single, focused function that operates on a basic binary tree node.

The shared node type is defined in [`binary_trees.h`](./binary_trees.h):

```c
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;
```

## Functions

| File | Function | Description |
|------|----------|-------------|
| [`0-binary_tree_node.c`](./0-binary_tree_node.c) | `binary_tree_node` | Create a new binary tree node |
| [`1-binary_tree_insert_left.c`](./1-binary_tree_insert_left.c) | `binary_tree_insert_left` | Insert a node as the left child |
| [`2-binary_tree_insert_right.c`](./2-binary_tree_insert_right.c) | `binary_tree_insert_right` | Insert a node as the right child |
| [`3-binary_tree_delete.c`](./3-binary_tree_delete.c) | `binary_tree_delete` | Recursively delete a tree |
| [`4-binary_tree_is_leaf.c`](./4-binary_tree_is_leaf.c) | `binary_tree_is_leaf` | Check if a node is a leaf |
| [`5-binary_tree_is_root.c`](./5-binary_tree_is_root.c) | `binary_tree_is_root` | Check if a node is a root |
| [`6-binary_tree_preorder.c`](./6-binary_tree_preorder.c) | `binary_tree_preorder` | Pre-order traversal |
| [`7-binary_tree_inorder.c`](./7-binary_tree_inorder.c) | `binary_tree_inorder` | In-order traversal |
| [`8-binary_tree_postorder.c`](./8-binary_tree_postorder.c) | `binary_tree_postorder` | Post-order traversal |
| [`9-binary_tree_height.c`](./9-binary_tree_height.c) | `binary_tree_height` | Measure the height of a tree |
| [`10-binary_tree_depth.c`](./10-binary_tree_depth.c) | `binary_tree_depth` | Measure the depth of a node |
| [`11-binary_tree_size.c`](./11-binary_tree_size.c) | `binary_tree_size` | Count all nodes |
| [`12-binary_tree_leaves.c`](./12-binary_tree_leaves.c) | `binary_tree_leaves` | Count leaf nodes |
| [`13-binary_tree_nodes.c`](./13-binary_tree_nodes.c) | `binary_tree_nodes` | Count nodes with at least one child |
| [`14-binary_tree_balance.c`](./14-binary_tree_balance.c) | `binary_tree_balance` | Compute the balance factor |
| [`15-binary_tree_is_full.c`](./15-binary_tree_is_full.c) | `binary_tree_is_full` | Check if a tree is full |
| [`16-binary_tree_is_perfect.c`](./16-binary_tree_is_perfect.c) | `binary_tree_is_perfect` | Check if a tree is perfect |
| [`17-binary_tree_sibling.c`](./17-binary_tree_sibling.c) | `binary_tree_sibling` | Find a node's sibling |
| [`18-binary_tree_uncle.c`](./18-binary_tree_uncle.c) | `binary_tree_uncle` | Find a node's uncle |

`binary_tree_print.c` is a visualization helper provided for debugging; it pretty-prints a tree to stdout.

## Build

All files compile with the Holberton standard flags:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_trees
```

To test a single function, write a small `main.c`, then compile it together with the relevant source file(s) and `binary_tree_print.c`:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \
    main.c 0-binary_tree_node.c binary_tree_print.c -o test_node
./test_node
```

## Code Style

- **Betty** style (Holberton's coding standard, based on the Linux kernel style).
- No global variables.
- No more than 5 functions per file.
- All header files are include-guarded.

## Author

- **Mateo Villada** — [@TeoVH](https://github.com/TeoVH)

## Acknowledgments

Project completed as part of the [Holberton School](https://www.holbertonschool.com/) low-level programming curriculum.
