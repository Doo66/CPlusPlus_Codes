//删除排序链表相同节点

ListNode* deleteDuplication(ListNode* pHead)
{
    if(pHead == NULL || pHead->next == NULL)
        return pHead;

    if(pHead->val == pHead->next->val)
    {
        ListNode* cur = pHead->next->next;
        int val = pHead->val;
        delete pHead;
        delete pHead->next;
        while(cur && cur->val == val)
        {
            ListNode* del = cur;
            cur = cur->next;
            delete del;
        }
        return deleteDuplication(cur);
    }
    else
    {
        pHead->next = deleteDuplication(pHead->next);
        return pHead;
    }
}
