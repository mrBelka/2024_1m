#include <vector>
#include <iostream>

class MyVector {
    int* m_arr;
    size_t m_size;
    size_t m_cap;
public:
    MyVector() {
        m_size = 0;
        m_cap = 0;
        m_arr = nullptr;
    }
    MyVector(size_t size, int value) {
        m_arr = new int[size];
        m_cap = size;
        m_size = size;
    }
    ~MyVector() {
        if(m_arr != nullptr)
            delete[] m_arr;
    }

    void push_back(int value) {
        if(m_size + 1 <= m_cap) {
            m_arr[m_size] = value;
            m_size++;
            return;
        }
        m_cap = m_cap * 2 + 1;
        int* tmp = new int[m_cap];
        for(int i=0;i<m_size;i++)
            tmp[i] = m_arr[i];
        tmp[m_size] = value;
        delete[] m_arr;
        m_arr = tmp;
        m_size++;
    }

    void reserve(size_t cap) {
        if(m_size >= cap)
            return;
        m_cap = cap;
        int* tmp = new int[m_cap];
        for(int i=0;i<m_size;i++)
            tmp[i] = m_arr[i];
        delete[] m_arr;
        m_arr = tmp;
    } 

    void shrink_to_fit() {
        m_cap = m_size;
        int* tmp = new int[m_cap];
        for(int i=0;i<m_size;i++)
            tmp[i] = m_arr[i];
        delete[] m_arr;
        m_arr = tmp;
    }

    size_t size() {
        return m_size;
    }

    size_t capacity() {
        return m_cap;
    }

    int& operator[](size_t index) {
        return m_arr[index];
    }

    int& back() {
        return m_arr[m_size - 1];
    }

    int& at(size_t index) {
        // Проверка
        return m_arr[index];
    }

    MyVector(const MyVector&) = delete;
    MyVector& operator=(const MyVector&) = delete;
};

void foo(MyVector vec) {

}

int main() {
    std::vector<int> mas;
    mas.resize(20);
    mas[10] = 2;
    for(int i=0;i<100;i++) {
        mas.push_back(i);
        std::cout << mas.size() << " " << mas.capacity() << std::endl;
    }
    mas.shrink_to_fit();
    std::cout << mas.size() << " " << mas.capacity() << std::endl;

    std::cout << mas[10] << std::endl;
    mas[10] = 2;
    std::cout << mas[10] << std::endl;

    return 0;
}