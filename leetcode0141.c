#include <stdlib.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

// 快慢指针, fast每次走两步，slow每次走一步，若有环，在必在环中相遇
bool hasCycle(struct ListNode *head)
{
    if (head == NULL) {
        return false;
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
            return true;
        }
    }
    return false;
}