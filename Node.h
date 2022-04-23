// Node Class Specification
//
// Author: Brian Horner
// Edit History:
// 4/22/2022 - Initial Version

#ifndef HW4_NODE_H
#define HW4_NODE_H

// --- Standard Library Includes ---
#include <string>

// --- User Defined Includes ---



class Node {
public:
    Node (){}

private:
    std::string name;
    Node* next;
    Node* previous;
};


#endif //HW4_NODE_H
