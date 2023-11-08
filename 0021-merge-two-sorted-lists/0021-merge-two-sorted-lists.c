/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* result = { NULL };
	struct ListNode* tail = { NULL };

	if (list1 == NULL && list2 == NULL) {
		return NULL;
	}

	while (list1 != NULL || list2 != NULL) {
		struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
		if (new_node == NULL) {
			return NULL;
		}
		if (list1 == NULL) {
			new_node->val = list2->val;
			list2 = list2->next;
		}

		else if (list2 == NULL) {
			new_node->val = list1->val;
			list1 = list1->next;
		}

		else if (list1->val < list2->val) {
			new_node->val = list1->val;
			list1 = list1->next;
		}

		else {
			new_node->val = list2->val;
			list2 = list2->next;
		}

		new_node->next = NULL;

		if (result == NULL && tail == NULL) {
			result = new_node;
			tail = new_node;
		}

		else {
			tail->next = new_node;
			tail = tail->next;
		}
	}
	return result;
}