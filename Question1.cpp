#include <iostream>
using namespace std;
class node{
    public : 
    int data;
    node* next ;
};
node* head = NULL;
void IAB(int value){
    node* newnode = new node;
    newnode->data =value;
    newnode->next = head;
    head = newnode;
}
void display(){
    node* temp = head;
    while(temp!=NULL){
    cout << temp->data << " ";
    temp = temp->next;
    }
}

int main() {
     IAB(30);
    IAB(20);
    IAB(10);
    display();

    return 0;
}