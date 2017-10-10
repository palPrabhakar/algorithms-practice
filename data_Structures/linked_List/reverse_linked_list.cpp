/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

void recursiveReverse(struct Node** headref){
    struct Node* current = *headref;

    if(current == NULL || current->next == NULL){
        return;
    }
    *headref = (*headref)->next;
    recursiveReverse(&(*headref));

    current->next->next = current;
    current->next = NULL;

}

Node* Reverse(Node *head)
{
  // Complete this method
  recursiveReverse(&head);
  return head;
}