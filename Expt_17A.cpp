#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    cout << (*head).val << " " << (*(*head).next).val << endl;
    return 0;
}
