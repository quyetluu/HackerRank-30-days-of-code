#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:  
		Node* insert(Node *head,int data)
		{
			//Complete this function
			Node *newNode = (Node *) malloc(sizeof(Node));
			Node *tmp = head;
			newNode->data = data;
			newNode->next = NULL;

			if (head == NULL) { 
				return newNode; 
			}
			
			while(tmp->next != NULL){
				tmp = tmp->next;
			}
			tmp->next = newNode;

			return head;
		}
      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}