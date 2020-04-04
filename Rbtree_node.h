#pragma once
class Rbtree_node
{
private:
	
public:
	Rbtree_node* parent;
	Rbtree_node* left;
	Rbtree_node* right;
	char  word[40];
	bool colour;
	Rbtree_node(char d[40]);
	~Rbtree_node();
	void change_colour();

};

