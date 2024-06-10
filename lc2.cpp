#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *ans = new ListNode(0);
    ListNode *cur_ans = ans;

    int add, ovfl;
    while (l1 != nullptr || l2 != nullptr)
    {
        if (l1 == nullptr){
            l1 = new ListNode(0);
        }
        if (l2 == nullptr){
            l2 = new ListNode(0);
        }

        add = (l1->val + l2->val + cur_ans->val) % 10;
        ovfl = (l1->val + l2->val + cur_ans->val) / 10;
        cur_ans->val = add;

        if (l1 -> next == nullptr && l2 -> next == nullptr && !ovfl) break; 

        l1 = l1->next;
        l2 = l2->next;

        cur_ans->next = new ListNode(ovfl);
        cur_ans = cur_ans->next;
    }

    return ans;
}

int main()
{
    ListNode node1_1(9);
    ListNode node1_2(9);
    ListNode node1_3(9);
    ListNode node1_4(9);
    ListNode node1_5(9);
    ListNode node1_6(9);

    node1_1.next = &node1_2;
    node1_2.next = &node1_3;
    node1_3.next = &node1_4;
    node1_4.next = &node1_5;
    node1_5.next = &node1_6;

    ListNode node2_1(9);
    ListNode node2_2(9);
    ListNode node2_3(9);

    node2_1.next = &node2_2;
    node2_2.next = &node2_3;

    ListNode *l1 = &node1_1;
    ListNode *l2 = &node2_1;

    ListNode* ans = addTwoNumbers(l1, l2);

    while (ans != nullptr)
    {
        cout << ans->val << ", ";
        ans = ans->next;
    }
    return 0;
}