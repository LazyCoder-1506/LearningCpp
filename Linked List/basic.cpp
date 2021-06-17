#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
  int data;
  Node* next;

  Node(int val) {
    data = val;
    next = NULL;
  }
};

void insertAtTail(Node* &head, int val) {
  Node* n = new Node(val);

  if (head == NULL) {
    head = n;
    return;
  }

  Node* ptr = head;
  while(ptr->next != NULL) {
    ptr = ptr->next;
  }
  ptr->next = n;
}

void insertAtHead(Node* &head, int val) {
  Node* n = new Node(val);

  if (head == NULL) {
    head = n;
    return;
  }

  Node* ptr = head;
  n->next = ptr;
  head = n;
}

void insertAtIndex(Node* &head, int val, int index) {
  Node* ptr = head;
  int idx = 0;

  Node* n = new Node(val);

  while (ptr->next != NULL)
  {
    if (idx == index - 1) {
      n->next = ptr->next;
      ptr->next = n;
      break;
    }
    ptr = ptr->next;
    idx++;
  }
  
}

void display(Node* head) {
  Node* ptr = head;
  while (ptr->next != NULL)
  {
    cout << ptr->data << " -> ";
    ptr = ptr->next;
  }
  cout << ptr->data << " -> NULL\n";
  
}

int main() {

  Node* head = NULL;
  insertAtTail(head, 1);
  insertAtTail(head, 2);
  insertAtTail(head, 3);
  
  display(head);

  insertAtTail(head, 5);
  
  display(head);

  insertAtHead(head, 0);
  
  display(head);

  insertAtIndex(head, 4, 4);

  display(head);

  return 0;
}