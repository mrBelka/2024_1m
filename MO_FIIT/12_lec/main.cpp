#include <iostream>
#include <thread>

void f() {
    return;
}

// 1 1 2 3 5 8 13 21 ...
int Fibo(int n) {
    if(n < 2)
        return 1;
    return Fibo(n-1) + Fibo(n-2);
}

int main() {
    int b, a, c;
    b = c = a = 7;
    std::cout << b;
    return 0;
}

/*
// #pragma pack
struct Node {
    int data;
    Node* left;
    Node* right;
};

void AddBack(Node* sent, int data) {
    Node* p = new Node;
    p->data = data;
    p->left = sent->left;
    p->right = sent;
    sent->left->right = p;
    sent->left = p;
}

void Print(Node* sent) {
    Node* p = sent->right;
    while(p != sent) {
        std::cout << p->data << std::endl;
        p = p->right;
    }
}

void Clear(Node* sent) {
    Node* p = sent->right;
    while(p != sent) {
        Node* tmp = p;
        p = p->right;
        delete tmp;
    }
    sent->left = sent;
    sent->right = sent;
}

void DeleteEven(Node* sent) {
    Node* p = sent->right;
    while(p != sent) {
        if(p->data % 2 == 0) {
            Node* tmp = p;
            p->right->left = p->left;
            p->left->right = p->right;
            p = p->right;
            delete tmp;
        }
        else
            p = p->right;
    }
}

int main() {
    Node* sent = new Node;
    sent->left = sent;
    sent->right = sent;

    AddBack(sent, 1);
    AddBack(sent, 2);
    AddBack(sent, 3);

    DeleteEven(sent);

    
    //while(1) {
    //    int i = 0;
    //    while(i<10'000'000) {
    //        AddBack(sent, i);
    //        i++;
    //    }
    //    std::this_thread::sleep_for(std::chrono::seconds(1));
    //    Clear(sent);
    //    std::this_thread::sleep_for(std::chrono::seconds(1));
    //}
    

    Print(sent);

    Clear(sent);
    delete sent;
    return 0;
}
*/