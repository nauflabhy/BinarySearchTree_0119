#include <iostream>
using namespace std;

class Node
{
    public:
    Node *leftchild;
    Node *rightchild;

    //Constructor for the node class
    Node()
    {
        leftchild = nullptr; // Initialize left child to null
        rightchild = nullptr; // Initialize right child to null
    }
};

class BinaryTree
{
    public:
        Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // Initialize ROOT to null
    }

    void search(int element, Node *&parent, Node *&currentNode)
    {
        
    }
};