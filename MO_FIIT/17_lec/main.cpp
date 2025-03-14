#include <iostream>
#include <vector>

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
    MyVector(size_t size) {
        m_size = size;
        m_cap = m_size;
        m_arr = new int[m_size];
        // std::fill
        for(int i=0;i<m_size;i++)
            m_arr[i] = 0;
    }
    // std::copy
    // делегирующий конструктор
    MyVector(const MyVector& other) {
        m_size = other.m_size;
        m_cap = other.m_cap;
        m_arr = new int[m_size];
        for(int i=0;i<m_size;i++)
            m_arr[i] = other.m_arr[i];
    }
    // Оператор присваивания копированием
    MyVector& operator=(const MyVector& other) = delete;

    // Деструктор
    ~MyVector() {
        if(m_arr != nullptr)
            delete[] m_arr;
    }

    // Без m_cap
    void push_back(int value) {
        if(m_size + 1 <= m_cap) {
            m_arr[m_size] = value;
            m_size++;
        } else {
            m_size++;
            m_cap = m_cap * 2 + 1;
            int* tmp = new int[m_cap];
            for(int i=0;i<m_size-1;i++)
                tmp[i] = m_arr[i];
            tmp[m_size-1] = value;
            delete[] m_arr;
            m_arr = tmp;
        }
    }

    size_t size() {
        return m_size;
    }

    size_t capacity() {
        return m_cap;
    }

    void reserve(size_t cap) {
        if(m_cap >= cap)
            return;
        m_cap = cap;
        int* tmp = new int[m_cap];
        for(int i=0;i<m_size;i++) {
            tmp[i] = m_arr[i];
        }
        delete[] m_arr;
        m_arr = tmp;
    }

    void shrink_to_fit() {
        m_cap = m_size;
        int* tmp = new int[m_cap];
        for(int i=0;i<m_size;i++) {
            tmp[i] = m_arr[i];
        }
        delete m_arr;
        m_arr = tmp;
    }

    int& back() {
        return m_arr[m_size-1];
    }

    int& operator[](size_t index) {
        return m_arr[index];
    }

    // 
    int& at(size_t index) {

    }

    /*
    // Без m_cap
    void push_back(int value) {
        m_size++;
        int* tmp = new int[m_size];
        for(int i=0;i<m_size-1;i++)
            tmp[i] = m_arr[i];
        tmp[m_size-1] = value;
        delete m_arr;
        m_arr = tmp;
    }
    */
};

void f(const MyVector& vec) {

}

int main() {
    std::vector<int> v;
    try {
        if(1) {
            throw std::out_of_range("111");
        }
    }
    catch(std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }
    return 0;


    MyVector vec;
    vec.reserve(10000);
    for(int i=0;i<100;i++) {
        vec.push_back(i);
        std::cout << vec.size() << " " << vec.capacity() << std::endl;
    }
    vec.shrink_to_fit();
    std::cout << vec.size() << " " << vec.capacity() << std::endl;

    std::cout << vec[50] << std::endl;
    vec[50] = 10;
    std::cout << vec[50] << std::endl;


    /*
    //int* mas = new int[n];
    //std::vector<int> mas(n);

    if(mas[0] == 0) {
        //delete[] mas;
        return 0;
    }

    if(mas[0] == 1) {
        //delete[] mas;
        return -1;
    }

    //delete[] mas;*/
}