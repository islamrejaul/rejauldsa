
// leetcode 206

// 3 method




// 3rd method

    //  ListNode* Reverse(ListNode* curr,ListNode* prev){  // ei fun ta ami create korlam

    //     if(curr==NULL)   // base case
    //     return prev;

    //   ListNode* fut=curr->next;
    //   curr->next=prev;
    //   return Reverse(fut,curr);

    //  }



    // ListNode* reverseList(ListNode* head) {   // given fun



    //    head=Reverse(head,NULL);
       
    //    return head;















        // 1st method

        // vector<int>ans;
        // ListNode* temp=head;
        // while(temp!=NULL){
        //     ans.push_back(temp->val);
        //     temp=temp->next;

        // }

        // int i=ans.size()-1;
        // temp=head;

        // while(temp!=NULL){
        //     temp->val=ans[i];
        //     i--;
        //     temp=temp->next;

        // }

        // return head;





        // 2nd method

        // ListNode *curr = head, *prev = NULL, *fut = NULL;

        // while (curr) {
        //     fut = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = fut;
        // }
        // head = prev;

        // return head;










    // }







