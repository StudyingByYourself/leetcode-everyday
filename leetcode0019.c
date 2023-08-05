#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

// 快慢指针
struct ListNode *removeNthFromEnd(struct ListNode *head, int n)
{
    struct ListNode *dummyHead = (struct ListNode *)malloc(sizeof(struct ListNode));
    dummyHead->next = head;
    struct ListNode *slow = dummyHead;
    struct ListNode *fast = dummyHead;
    for (int i = 0; i < n + 1; i++) {
        fast = fast->next;
    }
    while (fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return dummyHead->next;
}