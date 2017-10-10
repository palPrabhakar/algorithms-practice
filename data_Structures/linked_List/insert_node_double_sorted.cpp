/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
    Node *current = head;
    
    Node *newNode = (Node*)malloc(sizeof(Node*));
    newNode->data = data;
   
    if(head == NULL) {
        head = newNode;
        newNode->prev = NULL;
        newNode->next = NULL;
        return head;
    }
    
    if(head->data > data){
        newNode->next = head;
        head->prev = newNode;
        newNode->prev = NULL;
        head = newNode;
        return head;
    }
    
    while(current->next != NULL && current->next->data < data){
        current = current->next;
    }
    newNode->next = current->next;
    if(current->next != NULL) current->next->prev = newNode;
    newNode->prev = current;
    current->next = newNode;
    
    return head;
}