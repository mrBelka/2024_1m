#include <iostream>
#include <fstream>

void Search(int i, int j, int step, int n, int m, 
            char field[100][100], int table[100][100]) {
    if(step >= table[i][j])
        return;

    table[i][j] = step;

    if(field[i][j] == 'E')
        return;

    if(i + 1 < n && field[i+1][j] != '#')
        Search(i+1,j,step+1,n,m,field,table);
    if(i - 1 >= 0 && field[i-1][j] != '#')
        Search(i-1,j,step+1,n,m,field,table);
    if(j + 1 < m && field[i][j + 1] != '#')
        Search(i,j+1,step+1,n,m,field,table);
    if(j - 1 >= 0 && field[i][j - 1] != '#')
        Search(i,j-1,step+1,n,m,field,table);
}

int main() {
    char field[100][100];
    int table[100][100];

    std::ifstream in("input.txt");
    int n, m;
    int is, js;
    int ie, je;
    in >> n >> m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) {
            table[i][j] = INT_MAX;
            in >> field[i][j];
            if(field[i][j] == 'S') {
                is = i;
                js = j;
            }
            else if(field[i][j] == 'E') {
                ie = i;
                je = j;
            }
        }

    Search(is, js, 0, n, m, field, table);
    std::cout << table[ie][je] << std::endl;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            std::cout << field[i][j] << ' ';
        std::cout << std::endl;
    }
    
}

/*
#include <iostream>

using ull = unsigned long long;
// unsigned long long === size_t
unsigned long long f(int n) {
    if(n<=1)
        return 1;
    return n * f(n-1);
}

int main() {
    std::cout << f(6); // un. long long (8), 
}
*/

/*
#include <iostream>

struct Node {
    int data; // 4 + 4
    Node* prev; // 8
    Node* next; // 8
};

void AddBack(Node* sent, int data) {
    Node* p = new Node;
    p->data = data;
    p->next = sent;
    p->prev = sent->prev;
    sent->prev->next = p;
    sent->prev = p;
}

void Print(Node* sent) {
    Node* p = sent->next;
    while(p != sent) {
        std::cout << p->data << std::endl;
        p = p->next;
    }
}

void Clear(Node* sent) {
    Node* p = sent->next;
    while(p != sent) {
        Node* tmp = p;
        p = p->next;
        delete tmp;
    }
}

void DuplicateEven(Node* sent) {
    Node* p = sent->next;
    while(p != sent) {
        if(p->data % 2 == 0) {
            Node* q = new Node;
            q->data = p->data;
            q->prev = p;
            q->next = p->next;
            p->next->prev = q;
            p->next = q;
            p = p->next;
        }
        p = p->next;
    }
}

void RemoveOdd(Node* sent) {
    Node* p = sent->next;
    while(p != sent) {
        if(p->data % 2 != 0) {
            Node* tmp = p;
            p->prev->next = p->next;
            p->next->prev = p->prev;
            p = p->prev;
            delete tmp;
        }
        p = p->next;
    }
}

// Скопировать из односвязный список
void Sort() {
    // TODO
}

int main() {
    // Node* sent = new Node;
    // sent->next = sent; // -> === (*sent).next
    // sent->prev = sent;
    Node sent;
    sent.next = &sent;
    sent.prev = &sent;

    AddBack(&sent, 1);
    AddBack(&sent, 1);
    AddBack(&sent, 1);
    Print(&sent);
    DuplicateEven(&sent);
    RemoveOdd(&sent);
    Print(&sent);

    Clear(&sent);
    // delete sent;
}
*/