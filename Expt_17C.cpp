#include<iostream>
using namespace std;

class Link{
    public:
    int data;
    Link* next;

    Link(int data){
        (*this).data = data;
        next = NULL;
}
};
void insertHead(Link* &head, int data){
    Link* n = new Link(data);
    (*n).next = head;
    head = n;
}
void display(Link* head){
    Link* temp = head;
    while(temp != NULL){
        cout<<(*temp).data;
        if((*temp).next != NULL) {
            cout << "->";
        }
        temp = (*temp).next;
    }
    cout<<endl;
};

int main() {
    Link* head = NULL;
    insertHead(head, 30);
    display(head);
    insertHead(head, 35);
    display(head);
    insertHead(head, 40);
    display(head);
    return 0;
}
