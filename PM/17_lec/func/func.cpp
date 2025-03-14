#include "func.hpp"
#include <iostream>

namespace mt
{
    void Make(Node*& head)
    {
        head = new Node {0, nullptr};
    }

    void PushBack(Node* head, int value)
    {
        Node* p = head; // head-> == (*head).
        while(p->next != nullptr)
            p = p->next;
        
        Node* q = new Node;
        q->data = value;
        q->next = nullptr;
        p->next = q;
    }

    void Print(Node* head)
    {
        Node* p = head->next;
        while(p != nullptr)
        {
            std::cout << p->data << " ";
            p = p->next;
        }
    }

    void Remove(Node* head, int index)
    {
        Node* p = head;
        int i = 0;
        while(p->next != nullptr && i != index)
        {
            i++;
            p = p->next;
        }

        if(p->next == nullptr)
            return;

        Node* tmp = p->next;
        p->next = p->next->next;
        delete tmp;
    }

    void Clear(Node* head)
    {
        Node* p = head;
        while(p->next != nullptr)
        {
            Node* tmp = p;
            p = p->next;
            delete tmp;
        }
    }
}