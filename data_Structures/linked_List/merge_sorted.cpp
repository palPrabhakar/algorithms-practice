/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void moveNode(struct Node** destRef, struct Node** sourceRef){
    struct Node* dest = *destRef;
    struct Node* source = *sourceRef;
    if(source != NULL){
        *sourceRef = source->next;
        source->next = dest;
        *destRef = source;
    }
}

Node* MergeLists(Node *alist, Node* blist)
{
   struct Node dummy;
    struct Node* tail = &dummy;
    dummy.next = NULL;

  while(alist != NULL || blist != NULL){
      if(alist == NULL){
          moveNode(&(tail->next), &blist);
          tail = tail->next;
      }
      else if(blist == NULL){
          moveNode(&(tail->next), &alist);
          tail = tail->next;
      }
      else{
          if(alist->data < blist->data ){
              moveNode(&(tail->next), &alist);
              tail = tail->next;
          }
          else if(blist->data < alist->data ){
              moveNode(&(tail->next), &blist);
              tail = tail->next;
          }
      }
  }
  return dummy.next;
}