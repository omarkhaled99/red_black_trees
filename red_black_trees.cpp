#include <iostream>
#include "Rbtree.h"
#include <stdlib.h>
#include<stdio.h>
#include <string.h>
#include<fstream>
using namespace std;
int main()
{

	Rbtree tree;
	char temp[50] ="";
	string filename;
	ifstream file("dictionary.txt", std::ios_base::in);
	while (file.getline(temp,50)) {
		tree.insert(temp);
	}

	tree.printtree();
	cout << tree.height()<<endl;
	cout << tree.size() << endl;

}
