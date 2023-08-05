#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

// 增加一个虚拟头节点方便遍历
struct ListNode *removeElements(struct ListNode *head, int val)
{
    struct ListNode *dummyHead = (struct ListNode *)malloc(sizeof(struct ListNode));
    dummyHead->val = -1;
    dummyHead->next = head;
    struct ListNode *cur = dummyHead;
    while (head) {
        if (head->val != val) {
            cur = cur->next;
        } else {
            cur->next = head->next;
        }
        head = head->next;
    }
    return dummyHead->next;
}
