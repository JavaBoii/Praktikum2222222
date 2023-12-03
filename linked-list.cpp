#include <iostream>
#include <memory>

using namespace std;

template<typename T> class Node {
public:
    Node(T content, shared_ptr<Node> next) : m_content(content), m_next(next) {
        cout << "Created node with content " << m_content << "." << endl;
    }
    ~Node() {
        cout << "Destroyed node with content " << m_content << "." << endl;
    }

    T getContent() { return m_content; }
    void setContent(T content) { m_content = content; }

    shared_ptr<Node> getNext() { return m_next; }
    void setNext(shared_ptr<Node> next) { m_next = next; }

private:
    T m_content;
    shared_ptr<Node<T>> m_next;
};

template<typename T> void addNode(shared_ptr<Node<T>>& root, T content) {
    shared_ptr<Node<T>> newNode = make_shared<Node<T>>(content, nullptr);
    if(root == nullptr) {
        root = newNode;
    } else {
        shared_ptr<Node<T>> lastNode = root;
        while(lastNode->getNext() != nullptr) {
            lastNode = lastNode->getNext();
        }
        lastNode->setNext(newNode);
    }
}

template<typename T> void insertNode(shared_ptr<Node<T>>& root, T content, size_t position) {
    shared_ptr<Node<T>> newNode = make_shared<Node<T>>(content, nullptr);
    if(root == nullptr || position == 0) {
        newNode->setNext(root);
        root = newNode;
        return;
    }

    shared_ptr<Node<T>> insertNode = root;
    for(size_t i = 0; i < position-1 && insertNode->getNext() != nullptr; ++i) {
        insertNode = insertNode->getNext();
    }
    newNode->setNext(insertNode->getNext());
    insertNode->setNext(newNode);
}

template<typename T> void printList(shared_ptr<Node<T>> root) {
    cout << endl << "List:" << endl;
    for(shared_ptr<Node<T>> element = root; element != nullptr; element = element->getNext()) {
        cout << "- " << element->getContent() << endl;
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    shared_ptr<Node<int>> root = nullptr;
    addNode(root, 2);
    addNode(root, 7);
    addNode(root, 5);
    addNode(root, 1);
    addNode(root, 9);
    insertNode(root, 77, 2);
    insertNode(root, 88, 0);
    insertNode(root, 99, 7);

    printList(root);

    return 0;
}
