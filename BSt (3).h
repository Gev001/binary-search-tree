#pragma once


#include<iostream>
using namespace std;
template<class T>
struct node {
	int val;
	node* left;
	node* right;
	node(node *left = nullptr, int val = int(), node*right = nullptr)
	{
		this->left = left;
		this->val = val;
		this->right = right;
	}
};

template<class T>
class BST {
public:
	BST() :root(nullptr), size(0) { cout << "def ctor: \n"; }
	void destroye() { delete root; root = nullptr; }
	~BST()
	{
		destroye();
		cout << "\ndtor: \n";
		system("pause");
	}


	bool empty() { return root == nullptr; }
	void size1() { cout << size << endl; }


	void insert(const T&x, node<T>*crr) //insert from recursiv call
	{
		if (crr == nullptr) { root = new node<T>(nullptr, x, nullptr); ++size; return; }
		else
		{
			if (x < crr->val) { if (crr->left == nullptr) { crr->left = new node<T>(nullptr, x, nullptr); ++size; return; } else { insert(x, crr->left); } }
			if (x > crr->val) { if (crr->right == nullptr) { crr->right = new node<T>(nullptr, x, nullptr); ++size; return; } else { insert(x, crr->right); } }

		}
	}

	void insert(const T&x) //insert from user
	{
		insert(x, root);
	}




	int search(const T&x, node<T>*crr)
	{
		if (crr == nullptr) { cout << "no el. \n"; return -1; }
		else
		{
			if (x == crr->val) { return x; }
			if (x < crr->val) { search(x, crr->left); }
			else if (x > crr->val) { search(x, crr->right); }
		}
	}
	int search(const T&x)
	{
		return search(x, root);
	}

	void Preorder(node<T>*crr)
	{
		if (crr != nullptr)
		{
			cout << crr->val << ",";
			Preorder(crr->left);
			Preorder(crr->right);
		}
	}
	void Preorder()
	{
		Preorder(root);
	}

	void inorder(node<T>*crr)
	{
		if (crr != nullptr)
		{
			inorder(crr->left);
			cout << crr->val << ",";
			inorder(crr->right);
		}
	}
	void inorder()
	{
		inorder(root);
	}


	void postorder(node<T>*crr)
	{
		if (crr != nullptr)
		{
			postorder(crr->left);
			postorder(crr->right);
			cout << crr->val << ",";
		}
	}
	void postorder()
	{
		postorder(root);
	}

	void erase(const T&x, node<T>*crr)
	{

	}

private:
	node<T>*root;
	unsigned size;
};
#pragma once
