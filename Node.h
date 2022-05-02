// Node Class Specification
//
// Author: Brian Horner
// Edit History:
// 4/22/2022 - Initial Version
// 4/23/2022 - Added Constructors, Gets & Sets

#ifndef HW4_NODE_H
#define HW4_NODE_H

// --- Standard Library Includes ---
#include <string>

// --- User Defined Includes ---



class Node {
public:
    Node ();



    // Sets
    void setNextPointer(Node*);
    void setPreviousPointer(Node*);
    void setName(std::string&);

    // Gets
    Node* getNextPointer();
    Node* getPreviousPointer();
    std::string getName();


private:
    std::string name;
    Node* next{nullptr};
    Node* previous{nullptr};
};


#endif
