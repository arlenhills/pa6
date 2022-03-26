#include "BST.h"

BST::BST(BSTNode* newProot)
{
	pRoot = newProot;
}

BSTNode* BST::getProot() const {
	return pRoot;
}

void BST::insertNode(BSTNode* pTree, const char newLetter, const string& newMorse)
{
	//empty tree
	if (pTree == nullptr) 
	{
		pRoot = new BSTNode(newLetter, newMorse);
	}
	//tree is not empty
	else 
	{
		//LEFT
		if (newLetter < pTree->getLetter()) 
		{
			//pLeft isnt empty
			if (pTree->getLeftPtr() != nullptr)
			{
				insertNode(pTree->getLeftPtr(), newLetter, newMorse);
			}
			//pLeft has space for pTree
			else
			{
				pTree->setLeftPtr(new BSTNode(newLetter, newMorse));
			}
		}

		//RIGHT
		if (newLetter > pTree->getLetter())
		{
			//pRight isnt empty
			if (pTree->getRightPtr() != nullptr)
			{
				insertNode(pTree->getRightPtr(), newLetter, newMorse);
			}
			//pRight is empty
			else
			{
				pTree->setRightPtr(new BSTNode(newLetter, newMorse));
			}
		}
	}
}
