#include "Rbtree_node.h"
#include<string.h>
#define RED true
#define BLACK false
Rbtree_node::Rbtree_node(char d[40])
{
	 parent = NULL;
     left = NULL;
	 right = NULL;
	 strcpy(word, d);
	 colour = BLACK;
}

Rbtree_node::~Rbtree_node()
{

}

void Rbtree_node::change_colour()
{
	colour = !colour;
}
