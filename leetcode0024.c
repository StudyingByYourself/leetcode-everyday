#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *swapPairs(struct ListNode *head)
{
    struct ListNode *dummyHead = (struct ListNode *)malloc(sizeof(struct ListNode));
    dummyHead->next = head;
    struct ListNode *cur = dummyHead;
    struct ListNode *tmp1;
    struct ListNode *tmp2;
    while (cur->next != NULL && cur->next->next != NULL) {
        tmp1 = cur->next;
        tmp2 = cur->next->next->next;
        // 开始交换
        cur->next = tmp1->next;
        tmp1->next->next = tmp1;
        tmp1->next = tmp2;

        // cur 移动两格
        cur = cur->next->next;
    }
    return dummyHead->next;
}