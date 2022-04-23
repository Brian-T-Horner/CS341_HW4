// CS341 - Homework 4
//
// Author: Brian Horner
// Edit History:
// 4/22/2022 - Initial Version

// --- Standard Library Includes ---
#include <iostream>
#include <string>
// --- User Built Includes ---

void nameSort(std::string &, std::string &);
int stringComparion(std::string &, std::string &);


int main() {
    std::string test1 = "testtt";
    std::string test2 = "testt";

//    int var = 05;
//    std::cout << (char)var<<std::endl;
    nameSort(test1, test2);

    return 0;
}



void nameSort (std::string &firstString, std::string &secondString){
// Function to sort the names in a linked list
int bounds = stringComparion(firstString, secondString);
for (int i{0}; i < bounds; i++){
    if(tolower(firstString[i]) < tolower(secondString[i])){
        std::cout << firstString;
        break;
    }else if (tolower(firstString[i]) == tolower(secondString[i])){
        continue;
    }else{
        std::cout <<secondString;
        break;
    }
}

}



int stringComparion(std::string &firstString, std::string &secondString){
// Function to return bounds for comparing strings
    bool firstGreater = (firstString.length() >= secondString.length());
    if (firstGreater){
        return static_cast<int>(firstString.length());

    }else{
        return static_cast<int>(secondString.length());
    }
}