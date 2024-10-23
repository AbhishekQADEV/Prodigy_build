# Binary Search Tree and Doubly Linked-List Implementation in C

This repository contains C programs which implement a Binary Search Tree (BST) and Doubly Linked-List.

## Software Required
- GCC Compiler

For both setups:

1. Install C (GCC compiler). Download link: [GCC](https://gcc.gnu.org/install/index.html)

   For **Mac**, use the Homebrew package manager:
   ```
   brew install gcc
   ```

   For **Windows**, use Cygwin:
   - Download [Cygwin](https://cygwin.com/install.html).
   - During setup, select GCC for installation.
  
2. Check your installation with the following command:
   ```
   gcc --version
   ```

## Running

Use the command `gcc [filename] -o [output file name]` to compile the C source files. For example, to compile and run the Binary Search Tree implementation:

1. Compile the file
   ```
   gcc BST.c -o bst
   ```
2. Run the C program
   ```
   ./bst
   ```

Repeat for all other C programs in the repository.

## Note on CI/CD

These programs can be included in a Continuous Integration / Continuous Deployment (CI/CD) pipeline by adding a script to compile and test them as part of the build process.

No specific versioning requirements for this simple repository besides ensuring consistent installations of GCC to ensure all language features/items are supported.

A common development environment is made with the expected use of GCC and usage of standard C libraries. Please ensure these are installed and updated before use. 

## Contributing

Refer to CONTRIBUTING.md for guidelines to contribute to this project. With this being a very small repository, contribution is not expected to be extensive, likely centered around improving documentation or adding minor features.

