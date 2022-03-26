#pragma once

#include "BSTNode.h"

class BST 
{
public:
	BST(BSTNode* newProot = nullptr);

	BSTNode* getProot() const;

	void insertNode(BSTNode* pTree, const char newLetter, const string& newMorse);
	void inOrderTraversal(BSTNode* pTree);

private:
	BSTNode* pRoot;
};