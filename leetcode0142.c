#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *detectCycle(struct ListNode *head)
{
    if (head == NULL) {
        return NULL;
    }
    struct ListNode *fastNode = head;
    struct ListNode *slowNode = head;
    while (fastNode) {
        if (fastNode->next && fastNode->next->next) {
            fastNode = fastNode->next->next;
            slowNode = slowNode->next;
        } else {
            break;
        }
        if (fastNode == slowNode) {
            fastNode = head;
            while (1) {
                if (fastNode == slowNode) {
                    return fastNode;
                }
                fastNode = fastNode->next;
                slowNode = slowNode->next;
            }
        }
    }
    return NULL;
}