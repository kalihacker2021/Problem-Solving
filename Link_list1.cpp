//BISMILLAH
#include<bits/stdc++.h>
#define ll long long
#define do {
#define done }
#define start_ int main()
#define finish return 0;
using namespace std;

typedef struct node Node;

struct node{
   int data;
   Node *next;
};


Node* create_node(int item, Node* next) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        cout << "Couldn't create a new node" << endl;
        exit(1);
    }
    new_node->data = item;
    new_node->next = next;

    return new_node;
}

start_
do
   Node *n;
   n=create_node(10,NULL);
   printf("data=%d\n",n->data);
 finish
done
