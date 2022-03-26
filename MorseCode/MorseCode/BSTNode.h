#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::ostream;
using std::fstream;

class BSTNode
{
public:

    //constructors
    BSTNode();
    BSTNode(char newLetter, string newMorse);

    ////copy constructor
    //BSTNode(const BSTNode& copy);  

    //deconstrutor
    ~BSTNode();    

    //getters
    char getLetter() const;
    string getMorse() const;
    BSTNode* getLeftPtr() const;
    BSTNode* getRightPtr() const;

    //setters
    void setLetter(char const newLetter);
    void setMorse(const string& newMorse);
    void setLeftPtr(BSTNode* const newLeftPtr);
    void setRightPtr(BSTNode* const newRightPtr);

private:
    char letter;
    string morse;
    BSTNode* pLeft;
    BSTNode* pRight;

};