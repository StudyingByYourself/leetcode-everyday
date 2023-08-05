#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
    // 1、计算出链表A和链表B的长度
    int headALen = 0;
    int headBLen = 0;
    struct ListNode *curA = headA;
    struct ListNode *curB = headB;
    while (curA) {
        curA = curA->next;
        headALen++;
    }
    while (curB) {
        curB = curB->next;
        headBLen++;
    }
    // 2、链表A和链表B交换，保证链表A的长度大于链表B
    if (headBLen > headALen) {
        struct ListNode *tmpNode = headA;
        headA = headB;
        headB = tmpNode;
        int tmp = headALen;
        headALen = headBLen;
        headBLen = tmp;
    }
    // 3、找到相交的部分
    int step = headALen - headBLen;
    curA = headA;
    curB = headB;
    while (step > 0) {  // 这里不能等于0
        curA = curA->next;
        step--;
    }
    while (curA) {
        if (curA == curB) {
            return curA;
        }
        curA = curA->next;
        curB = curB->next;
    }
    return NULL;
}
