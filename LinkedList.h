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
    //--- Constructor ---
    LinkedList();

    // --- General Methods ---
    void addNode(std::string&);
    void printList();
    void sortList(std::string&);


    // --- Get Methods ---
    Node* getHeadNode();
    Node* getTailNode();
    // --- Set Methods ---
    void setHeadNode(Node*);
    void setTailNode(Node*);

    // --- Destructor ---
    ~LinkedList();

private:
    Node* headNode;
    Node* tailNode;
};


#endif
