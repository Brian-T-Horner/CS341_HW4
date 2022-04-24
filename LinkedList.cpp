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
LinkedList::LinkedList() {this->headNode= nullptr;}


void LinkedList::addNode(std::string &newName) {
    std::cout << "Start addNode" <<std::endl;
    Node temp;
    temp.setName(newName);
    Node* newNodePointer = &temp;
    temp.setName(newName);
    if (headNode == nullptr){
        headNode = newNodePointer;
    }else if (headNode->getName() > temp.getName()){
        Node* temp = headNode;
        // Setting new node to head node
        headNode = newNodePointer;
        // Setting head node (new node) next to previous head node
        headNode->setNextPointer(temp);
        // Setting temp(previous head node) previous ptr to head node (new node)
        temp->setNextPointer(newNodePointer);

    }else if (headNode->getName()< temp.getName()){
        if(headNode->getNextPointer() == nullptr){

            // Set head nodes next to new pointer
            headNode->setNextPointer(newNodePointer);
            // Set new node previous ptr to head node
            newNodePointer->setPreviousPointer(headNode);

        }else if(headNode->getNextPointer()!= nullptr){
            Node* comparisonPtr = headNode->getNextPointer();

            while (comparisonPtr->getName() < temp.getName()){
                if(comparisonPtr->getNextPointer() != nullptr){
                    comparisonPtr = comparisonPtr->getNextPointer();
                }else{
                    // Set comparisons next ptr to new
                    comparisonPtr->setNextPointer(newNodePointer);

                    // Set new nodes previous ptr to comparison
                    temp.setPreviousPointer(comparisonPtr);
                    break;
                }
                Node* tempPtr = comparisonPtr;

                // Set comparison's previous node's next pointer to new node
                comparisonPtr->getPreviousPointer()->setNextPointer
                (newNodePointer);

                // Set comparisonPtr to new nodePtr
                comparisonPtr = newNodePointer;

                // Set new nodes previous pointer to temp(comparisons) previous
                // pointer
                newNodePointer->setPreviousPointer
                (tempPtr->getPreviousPointer());

               // Set new nodes next pointer to temp (comparison)
               newNodePointer->setNextPointer(tempPtr);

                //Set temp(comparison) previous ptr to new node
                tempPtr->setPreviousPointer(newNodePointer);

                // break out of loop
                break;
            }
        }
    }

std::cout << "End addNode" <<std::endl;
}

void LinkedList::printList() {
    std::cout << "Start printList" <<std::endl;
    Node* temp;
    temp = headNode;
    std::cout << "User Data: ";
    std::cout << temp->getName();
    while (temp->getNextPointer() != nullptr){
        temp = temp->getNextPointer();
        std::cout << temp->getName();
    }
    std::cout << "End print list" <<std::endl;
//    delete temp; //TODO -- Check if this deletes the last node or just temp
}


// --- Get and Set for first node;
Node* LinkedList::getFirstNode() {return headNode;}
void LinkedList::setFirstNode(Node * newHeadNode) {this->headNode=newHeadNode;}