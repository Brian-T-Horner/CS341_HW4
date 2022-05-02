// Linked List Class Implementation
//
// Author: Brian Horner
// Edit History:
// 4/23/2022 - Initial Version

// --- Standard Library Includes ---
#include <string>
#include <iostream>
// --- User Defined Includes ---
#include "Node.h"
#include "LinkedList.h"

// --- Constructor ---
LinkedList::LinkedList() {headNode= nullptr; tailNode= nullptr;}

void LinkedList::sortList(std::string &name) {
    Node * newNode = new Node;
    if(newNode != nullptr){
        newNode->setName(name);
        if(getHeadNode() == nullptr){
            // If there is no node in linked list
            setHeadNode(newNode);
            setTailNode(newNode);
        }else if (getHeadNode()!= nullptr){
            // If there is a head node
            if (headNode->getName() < newNode->getName()){
                // If head node is less than new node
                if(headNode == tailNode){
                    // If there is only one node in the list
                    headNode->setNextPointer(newNode);
                    newNode->setPreviousPointer(headNode);
                    setTailNode(newNode);
                }else if (headNode != tailNode){
                    // If there is more than one node in the list
                    Node * comparison = headNode;
                    // Sort through until temp node is less than comparison
                    while (comparison->getNextPointer()!= nullptr &&
                    comparison->getNextPointer()->getName() < newNode->getName
                    ()){
                        comparison = comparison->getNextPointer();
                    }
                    // Setting temp next node to comparison next node
                    newNode->setNextPointer(comparison->getNextPointer());
                    // setting comparison next to new node
                    comparison->setNextPointer(newNode);
                    // setting new node previous to comparison node
                    newNode->setPreviousPointer(comparison);
                }
            }else if(headNode->getName() > newNode->getName()){
            // If new node is less than head node
            newNode->setNextPointer(headNode);
            headNode->setPreviousPointer(newNode);
                setHeadNode(newNode);
            }

        }
    }else{
        // Catch for if out of heap memory
        std::cout << "Error: Out of heap memory for node objects." <<std::endl;
    }

}
void LinkedList::addNode(std::string &newName) {
    Node * temp = new Node;
    if(temp != nullptr){
        temp->setName(newName);

        if (getHeadNode() == nullptr){
            setHeadNode(temp);
            setTailNode(temp);
        }else{
            tailNode->setNextPointer(temp);
            setTailNode(temp);
        }
    }
}

void LinkedList::printList() {
    Node* temp = getHeadNode();
    std::cout << "\nUser Data: " <<std::endl;
    while(temp != nullptr){
        std::cout << temp->getName()<<std::endl;
        temp = temp->getNextPointer();
    }

}

// --- Get Methods ---
Node* LinkedList::getHeadNode(){return headNode;}
Node* LinkedList::getTailNode(){return tailNode;}

// --- Set Methods ---
void LinkedList::setHeadNode(Node* newHeadNode){
    if(newHeadNode != nullptr){
        this->headNode = newHeadNode;
    }
}
void LinkedList::setTailNode(Node* newTailNode){
    if(newTailNode != nullptr){
        this->tailNode = newTailNode;
    }
}

LinkedList::~LinkedList() {}