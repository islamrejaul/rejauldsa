

//19. Remove Nth Node From End of List.. lec 4



      //  ListNode* removeNthFromEnd(ListNode* head,int n){








      //            int count=0;

      //              ListNode* temp=head;

      //              //count total no of nodes

      //              while(temp){
      //               count++;
      //               temp=temp->next;
      //              }

      //              count=count-n;
                        
      //             if(count==0){     // 1st node ta k delete korbo...head k 2nd node a pathiye debo
      //              temp=head;
      //              head=head->next;
      //              delete temp;
      //              return head;
      //             }
                  



      //                  ListNode* curr=head;

      //                      ListNode* prev=NULL;

      //                      while(count--){
      //                       prev=curr;
      //                       curr=curr->next;

      //                      }

      //                      prev->next=curr->next;
      //                      delete curr;



      //                      return head;




















      //         }



















