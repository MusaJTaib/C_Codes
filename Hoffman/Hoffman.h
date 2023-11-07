#ifndef HOFFMAN_H
#define HOFFMAN_H
#include<iostream>  //for making a console
#include<stdlib.h>  //for making good memory complexity
#include<string>    //for string inputs and usage of strings
#include <queue>    //for generating the perfect huffman tree
#include <unordered_map>  //for conversion of the generated codes into a single string
#include<sstream> //for making the console
#include<fstream>  //for file handling

using namespace std;

class node //the structure for linked list
{
public:
	string data;//name for the node element
	unsigned int frequency;//data's frequency
	node* left;
	node* right;
	unsigned int money;
};


class main_node//main class for the linked list
{
public:
	unsigned int size;
	unsigned int capacity;
	node** array;
	string abc[10];
	node* newNode(string data, unsigned freq);//function for creating a new element
	main_node* createMinHeap(unsigned capacity);//make the tree a minheap
	void swapMinHeapNode(node** a, node** b);//function for swapping two nodes
	void minHeapify(main_node* minHeap, int idx);//function for giving position for parent left and right children
	int isSizeOne(main_node* minHeap);//give the size of the minheap
	node* extractMin(main_node* minHeap);//give the parent node
	void insertMinHeap(main_node* minHeap, node* minHeapNode);//for inserting the element
	void buildMinHeap(main_node* minHeap);//add a new element
	// A utility function to print an array of size n 
	void printArr(int arr[], int n);//printer
	int isLeaf(node* root);
	// Creates a min heap of capacity 
	// equal to size and inserts all character of 
	// data[] in min heap. Initially size of 
	// min heap is equal to capacity 
	main_node* createAndBuildMinHeap(string data[], int freq[], int size);
	void printCodes(node* root, int arr[], int top);
	void HuffmanCodes(string data[], int freq[], int size);
	void decode(node* root, int &index, string str);
	node* buildHuffmanTree(string data[], int freq[], int size);
};

#endif