/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node *current = head;
    Node *prev = NULL;
    int count = 0;
    while(count != position) {
        prev = current;
        current = current->next;
        count++;
    }
    
    if(prev == NULL) {
        head = head->next;
        free(current);
    }
    else {
        prev->next = current->next;
        free(current);
    }
    return head;
}
