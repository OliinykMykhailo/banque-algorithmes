#include <iostream>

//implementation des listes enchainees simples

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {} // constructor
};

int main()
{
    ListNode* CList = new ListNode(2); // initialisation de la tete de la liste et la creation du pointeur CList vers cette tete
    CList->next = new ListNode(0); // initialisation du second element (new ListNode(0)) et liaison avec la tete de la liste (CList->next)

    delete CList->next;
    delete CList; // liberation de la memoire afin d'eviter la fuite de memoire

    return 0;
}