// Node Class Implementation
//
// Author: Brian Horner
// Edit History:
// 4/22/2022 - Initial Version
// 4/23/2022 - Added Constructors, Gets and Sets

// --- Standard Library Includes ---
#include <string>
// --- User Defined Includes ---
#include "Node.h"


// --- Constructors ---

Node::Node() {
    this->name = "";
    this-> next = nullptr;
    this-> previous = nullptr;
}

Node::Node(std::string& nameValue){
    this->name = nameValue;
    this->next = nullptr;
    this->previous = nullptr;
}

Node::Node(std::string &value, Node* nextNode, Node* previousNode):name(value),
next(nextNode), previous(previousNode){}

// --- Set Functions ---

void Node::setNextPointer(Node * nextNode) {this->next = nextNode;}

void Node::setPreviousPointer(Node *previousNode) {this->previous =
previousNode;}

void Node::setName(std::string& nameValue) {this->name = nameValue;}

// --- Get Functions ---

Node *Node::getNextPointer() {return next;}
Node *Node::getPreviousPointer() {return previous;}
std::string Node::getName() {return name;}