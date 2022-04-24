// Linked List Class Specification
//
// Author: Brian Horner
// Edit History:
// 4/23/2022 - Initial Version
// 4/23/2022 - Added specifications constructor, print, add, findName, delete
// and get/set for name


#ifndef HW4_LINKEDLIST_H
#define HW4_LINKEDLIST_H

// --- Standard Library Includes ---

// --- User Defined Includes ---

class LinkedList {
public:
    LinkedList();

    void addNode(std::string);
    void printList();
    Node* findName(std::string);
    void deleteNode (std::string);

//    Node* findIndex(int); -- Maybe implement indexing? Overload operator

    Node* getFirstName();
    void setFirstName(Node*);

private:
    Node* headNode;
};


#endif
