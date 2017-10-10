/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head, int data)
{
    struct Node* current = head;
    if(head == NULL){
        struct Node* newNode = (Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;
        return newNode;
    }
    else {
        while(current->next != NULL){
            current = current->next;
        }
        struct Node* newNode = (Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;
        current->next = newNode;
        return head;
    }
}