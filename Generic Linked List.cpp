#include <iostream>
using namespace std;

template<class T>
class Node {
public:
    T data;
    Node *next;
    Node(T item) {
        data = item;
        next = NULL;
    }
};

template<class T>
class LinkedList {
private:
    Node<T> *head;
public:
    LinkedList() {
        head = NULL;
    }

    bool isEmpty() {
        return  head == NULL;
    }


    void addEnd(T value) {
        Node<T> *newNode = new Node<T>(value);
        Node<T> *temp = head;
        if (isEmpty()) {
            head = newNode;
        }
        else {
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void removeEnd() {
        if (isEmpty()) {
            cout<< "Siktir git boş!!"<<endl;
            return;
        }
        else {
            Node<T> *temp = head;
            while (temp->next->next != NULL) {
                temp = temp->next;
            }
            temp = NULL;
        }
    }
};


int main() {

    LinkedList<int> *list = new LinkedList<int>();
    list->addEnd(1);
    list->addEnd(2);
    list->addEnd(3);


}
