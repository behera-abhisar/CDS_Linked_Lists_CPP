#include <iostream>
using namespace std;

class Link {
public:
    int data;
    Link* next;

    Link(int data) {
        this->data = data;
        next = NULL;
    }
};

void insertTail(Link* &head, int data) {
    Link* n = new Link(data);
    if (head == NULL) {
        head = n;
        return;
    }
    Link* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void display(Link* head) {
    Link* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) {
            cout << "->";
        }
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Link* head = NULL;

    insertTail(head, 35);
    insertTail(head, 40);
    insertTail(head, 45);
    display(head);

    insertTail(head, 50);
    insertTail(head, 55);
    display(head);

    return 0;
}
