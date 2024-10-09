#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* arraytoLL(vector <int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1 ; i<arr.size() ; i++){
        Node* temp=  new Node(arr[i] );
        mover->next = temp;
        mover = mover->next;
    }

    return head;
}

bool searchinLL(Node* head , int key){
    Node* temp = head;

    while(temp){

        if(temp->data == key) return true;
        temp = temp->next;
    }

    return false;
}
 void addNode(Node* head , int pos , int data){
    
    Node* temp = head;
    int cnt = 1;
    while(temp){
        if(cnt == pos-1){
            Node* newNode = new Node(data);
            newNode->data = data;
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
        cnt++;
        cout<<cnt<<endl;
    }

}

void deletefromLL(Node* head , int key){
    Node* temp= head;
    while(temp){
        if(temp->next->data == key){
            temp->next = temp->next->next;
            break;
        }
        temp = temp->next;
    }
    
}
int main(){

    vector <int> arr = {2,6,7,9,10};

    Node* head = arraytoLL(arr);
    Node* temp = head;
    deletefromLL(head , 9);
    cout<<endl;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

 
    return 0;
}