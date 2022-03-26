#include "BSTNode.h"




BSTNode::BSTNode()
{
	pLeft = pRight = nullptr;
	letter = '\0';
	morse = "";
}

BSTNode::BSTNode(char newLetter, string newMorse)
{
	pLeft = pRight = nullptr;
	letter = newLetter;
	morse = newMorse;
}

char BSTNode::getLetter() const
{
	return letter;
}

string BSTNode::getMorse() const
{
	return morse;
}

BSTNode* BSTNode::getLeftPtr() const
{
	return pLeft;
}

BSTNode* BSTNode::getRightPtr() const
{
	return pRight;
}

void BSTNode::setRightPtr(BSTNode* const newRightPtr)
{
	pRight = newRightPtr;
}

void BSTNode::setLeftPtr(BSTNode* const newLeftPtr)
{
	pLeft = newLeftPtr;
}

void BSTNode::setLetter(char const newLetter)
{
	letter = newLetter;
}

void BSTNode::setMorse(const string& newMorse)
{
	morse = newMorse;
}