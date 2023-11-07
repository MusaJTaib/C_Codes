#include "Hoffman.h"
#include<iostream>  //for making a console
#include<stdlib.h>  //for making good memory complexity
#include<string>    //for string inputs and usage of strings
#include <queue>    //for generating the perfect huffman tree
#include <unordered_map>  //for conversion of the generated codes into a single string
#include<sstream> //for making the console
#include<fstream>  //for file handling

using namespace std;



node* main_node::newNode(string data, unsigned freq)//function for creating a new element
{
	node* temp = new node;
	temp->left = temp->right = NULL;
	temp->data = data;
	temp->frequency = freq;
	return temp;
}
main_node* main_node::createMinHeap(unsigned capacity)//make the tree a minheap
{

	main_node* minheap = new main_node;

	// current size is 0 
	minheap->size = 0;

	minheap->capacity = capacity;

	minheap->array
		= (struct node**)malloc(minheap->
		capacity * sizeof(struct node*));
	return minheap;
}
void main_node::swapMinHeapNode(node** a, node** b)//function for swapping two nodes
{
	node* t = new node;
	t = *a;
	*a = *b;
	*b = t;
}
void main_node::minHeapify(main_node* minHeap, int idx)//function for giving position for parent left and right children
{
	int smallest = idx;//parent
	int left = 2 * idx + 1;//left child
	int right = 2 * idx + 2;//right child
	if (left < minHeap->size && minHeap->array[left]->
		frequency < minHeap->array[smallest]->frequency)
		smallest = left;
	if (right < minHeap->size && minHeap->array[right]->
		frequency < minHeap->array[smallest]->frequency)
		smallest = right;
	if (smallest != idx)
	{
		swapMinHeapNode(&minHeap->array[smallest],
			&minHeap->array[idx]);
		minHeapify(minHeap, smallest);
	}
}
int main_node::isSizeOne(main_node* minHeap)//give the size of the minheap
{
	return (minHeap->size == 1);
}
node* main_node::extractMin(main_node* minHeap)//give the parent node

{

	node* temp = minHeap->array[0];
	minHeap->array[0]
		= minHeap->array[minHeap->size - 1];

	--minHeap->size;
	minHeapify(minHeap, 0);

	return temp;
}
void main_node::insertMinHeap(main_node* minHeap, node* minHeapNode)//for inserting the element
{
	++minHeap->size;
	int i = minHeap->size - 1;
	while (i && minHeapNode->frequency < minHeap->array[(i - 1) / 2]->frequency)
	{
		minHeap->array[i] = minHeap->array[(i - 1) / 2];
		i = (i - 1) / 2;
	}
	minHeap->array[i] = minHeapNode;
}
void main_node::buildMinHeap(main_node* minHeap)//add a new element

{

	int n = minHeap->size - 1;
	int i;

	for (i = (n - 1) / 2; i >= 0; --i)
		minHeapify(minHeap, i);
}

// A utility function to print an array of size n 
void main_node::printArr(int arr[], int n)//printer
{
	int j = 0;
	int i = 0;
	string bbc[10];
	for (i; i < n; ++i)
	{
		cout << arr[i];
		if (arr[i] == 0)
		{
			bbc[i] = '0';
		}
		else
			bbc[i] = '1';
	}
	for (int k = 0; k < 10; k++)
	{
		abc[j] += bbc[k];
	}
	j++;
	cout << "\n";
}
int main_node::isLeaf(node* root)
{
	return !(root->left) && !(root->right);
}
// Creates a min heap of capacity 
// equal to size and inserts all character of 
// data[] in min heap. Initially size of 
// min heap is equal to capacity 
main_node* main_node::createAndBuildMinHeap(string data[], int freq[], int size)
{

	main_node* minHeap = createMinHeap(size);

	for (int i = 0; i < size; ++i)
		minHeap->array[i] = newNode(data[i], freq[i]);

	minHeap->size = size;
	buildMinHeap(minHeap);

	return minHeap;
}
node* main_node::buildHuffmanTree(string data[], int freq[], int size)

{
	node *left, *right, *top;

	// Step 1: Create a min heap of capacity 
	// equal to size.  Initially, there are 
	// modes equal to size. 
	main_node* minHeap = createAndBuildMinHeap(data, freq, size);

	// Iterate while size of heap doesn't become 1 
	while (!isSizeOne(minHeap)) {

		// Step 2: Extract the two minimum 
		// freq items from min heap 
		left = extractMin(minHeap);
		right = extractMin(minHeap);

		// Step 3:  Create a new internal 
		// node with frequency equal to the 
		// sum of the two nodes frequencies. 
		// Make the two extracted node as 
		// left and right children of this new node. 
		// Add this node to the min heap 
		// '$' is a special value for internal nodes, not used 
		top = newNode("abc", left->frequency + right->frequency);

		top->left = left;
		top->right = right;

		insertMinHeap(minHeap, top);
	}

	// Step 4: The remaining node is the 
	// root node and the tree is complete. 
	return extractMin(minHeap);
}
void main_node::printCodes(node* root, int arr[], int top)
{
	// Assign 0 to left edge and recur 
	if (root->left)
	{
		arr[top] = 0;
		printCodes(root->left, arr, top + 1);
	}
	// Assign 1 to right edge and recur 
	if (root->right)
	{
		arr[top] = 1;
		printCodes(root->right, arr, top + 1);
	}
	// If this is a leaf node, then 
	// it contains one of the input 
	// characters, print the character 
	// and its code from arr[] 
	if (isLeaf(root))
	{
		cout << root->data << " ";
		//printf("%c: ", root->data);
		printArr(arr, top);
	}
}
void main_node::HuffmanCodes(string data[], int freq[], int size)

{
	// Construct Huffman Tree 
	node* root
		= buildHuffmanTree(data, freq, size);
	unordered_map<char, string> huffmanCode;
	// Print Huffman codes using 
	// the Huffman tree built above 
	int arr[100], top = 0;
	cout << "The compressed code for each element based upon their frequency is as follows: " << endl;
	printCodes(root, arr, top);
	string str = "";
	int index = -1;
	for (int i = 0; i<size; i++)
	{
		//decode(root, index, str);
		//string ch = root->data;
		str += abc[i];
		cout << abc[i];
		//str += ch;//
		//str += root->data;
	}
	cout << str;
	index = -1;
	cout << "\nDecoded elements with their string is: \n";
	cout << "Elements  Frequencies" << endl;
	while (index < (int)str.size() - 2)
	{
		decode(root, index, str);
	};
}
void main_node::decode(node* root, int &index, string str)
{

	if (root == nullptr)
	{
		return;
	}
	// found a leaf node
	if (!root->left && !root->right)
	{
		cout << root->data;
		cout << "  " << root->frequency << endl;
		return;
	}
	index++;
	unordered_map<char, string> huffmanCode;
	char x = '0';
	string ss(1, x);

	if (str[index] == '0')
	{
		decode(root->left, index, str);
		//return;
	}
	else
	{
		decode(root->right, index, str);
		//return;
	}
}