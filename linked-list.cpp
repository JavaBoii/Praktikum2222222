// linked-list.cpp
#include "linked-list.hpp"
#include <iostream>

namespace LinkedList {
    // Aufgabe: createNewList
    void createNewList(Node*& root) {
        root = nullptr;
    }

    // Aufgabe: getCount
    int getCount(Node* root) {
        int count = 0;
        while(root) {
            count++;
            root = root->next;
        }
        return count;
    }

    // Aufgabe: printList
    void printList(Node* root) {
        std::cout << "Anzahl der Elemente: " << getCount(root) << std::endl;
        while(root) {
            std::cout << root->content << std::endl;
            root = root->next;
        }
    }

    // Aufgabe: addEntry
    void addEntry(Node*& root, const char* name) {
        if(!root) {
            root = new Node(name);
        } else {
            Node* current = root;
            while(current->next) {
                current = current->next;
            }
            current->next = new Node(name);
        }
    }

    // Aufgabe: getEntry
    Node* getEntry(Node* root, int index) {
        int currentIndex = 0;
        while(root && currentIndex != index) {
            root = root->next;
            currentIndex++;
        }
        return (currentIndex == index && root) ? root : nullptr;
    }

    // Bonusaufgabe: deleteEntryAtIndex
    bool deleteEntryAtIndex(Node*& root, int index) {
        if(!root) return false;
        if(index == 0) {
            Node* temp = root;
            root = root->next;
            delete temp;
            return true;
        }

        Node* prev = root;
        Node* current = root->next;
        int currentIndex = 1;
        while(current && currentIndex != index) {
            prev = current;
            current = current->next;
            currentIndex++;
        }

        if(currentIndex == index && current) {
            prev->next = current->next;
            delete current;
            return true;
        }

        return false;
    }

    // Aufgabe: clearList
    void clearList(Node*& root) {
        while(root) {
            Node* temp = root;
            root = root->next;
            delete temp;
        }
    }
}
