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
    name = "";
    next = nullptr;
    previous = nullptr;
}


// --- Set Functions ---
void Node::setNextPointer(Node * nextNode) {next = nextNode;}
void Node::setPreviousPointer(Node *previousNode) {previous =previousNode;}
void Node::setName(std::string& nameValue) {name = nameValue;}

// --- Get Functions ---
Node *Node::getNextPointer() {return next;}
Node *Node::getPreviousPointer() {return previous;}
std::string Node::getName() {return name;}