#include <iostream>
#include <string>
#include <sstream>
#include "Header.h"
#include <fstream>
using namespace std;

void main()
{
	Tree<int> mytree;
	int i ; int numnode; int schnode; int delnode;
	cout<< "Insert node : ";
	cin >> numnode;
	for(i = 1; i <= numnode; i++)
	{   int  x=rand();
            mytree.insert(x);	    
	}			
	mytree.inorder();
	cout << "The height of tree :" << mytree.height(mytree.root) << endl;
	mytree.clear();
	mytree.balance(mytree.myvecter,0,mytree.myvecter.size()-1);
	cout << "The new height of tree (Balance) : " << mytree.height(mytree.root) << endl ;
	cout << "Search node : " ;
	cin >> schnode;
	cout << "Search : " << mytree.search(schnode) << endl;
	cout << "Delete node : ";
	cin >> delnode;
	mytree.FindandDeletebymerging(delnode);
	cout << "The height of tree(deleted) : " << mytree.height(mytree.root);	    
}
