// linked-list.hpp
#include <cstring>

namespace LinkedList {
    struct Node {
        char content[256];
        Node* next;

        Node(const char* initContent = "", Node* initNext = nullptr) {
            strncpy(content, initContent, sizeof(content) - 1);
            content[sizeof(content) - 1] = '\0';
            next = initNext;
        }
    };

    void createNewList(Node*& root);
    int getCount(Node* root);
    void printList(Node* root);
    void addEntry(Node*& root, const char* name);
    Node* getEntry(Node* root, int index);
    bool deleteEntryAtIndex(Node*& root, int index);
    void clearList(Node*& root);
}
