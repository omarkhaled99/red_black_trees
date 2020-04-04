#include <iostream>
#include "Rbtree.h"
#include <stdlib.h>
#include<stdio.h>
#include <string.h>
#include<fstream>
using namespace std;
int main()
{
	system("color 1a");
	Rbtree tree;
	char temp[50] = "";
	string filename;
	ifstream file("dictionary.txt", std::ios_base::in);
	while (file.getline(temp, 50)) {
		tree.insert(temp);
	}

	tree.printtree();
	cout << tree.height() << endl;
	cout << tree.size() << endl;
	while (true)
	{
		cout << "Please enter the word : \n";
		char word[20];
		cin >> word; // 
		int x = tree.findElement(word);
		if (x == 1)cout << "WORD FOUND\n";
		else
			cout << "WORD NOT FOUND\n";
	}
	

	
}