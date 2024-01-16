/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */

function deleteDuplicates(head: ListNode | null): ListNode | null {
    if (head === null || head.next === null) {
        return head;
    }
    
    var checkVar = head.val;
    var checkNode = head;
    var currentNode = head.next;
    
    while (currentNode !== null) {
        if (currentNode.val === checkVar) {
            currentNode = currentNode.next
        }
        else {
            checkNode.next = currentNode;
            checkVar = currentNode.val;
            checkNode = currentNode;
        }
        
        if (currentNode === null || (currentNode.next === null && checkVar === currentNode.val)) {
            checkNode.next = null;
            break;
        }
    }
    return head;
};