/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* push(struct Node* headref, int data){
    struct Node* newNode = (Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = headref;
    return newNode; 
}


Node* InsertNth(Node *head, int data, int pos)
{
  struct Node* current = head;
    int count = 0;

    if(pos == 0){
       return(push(head, data));
    }
    else{
        while(count != pos-1 ){
            current = current-> next;
            count++;
        }
        current->next = push(current->next, data);
        return head;
    }
    
}


