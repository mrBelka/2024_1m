#include <iostream>

// The Rule of Three
class MyString {
    private:
        int m_size;
        char* m_str;
        // 1 
        // MyString& operator=(const MyString&) = default;
    public:
        MyString() {
            m_size = 0;
            m_str = nullptr;
        }
        // 2 
        MyString& operator=(const MyString&) = delete;
        /*MyString(char* str) {
            m_size = strlen(str) + 1;
            m_str = new char[m_size];
            for(int i=0;i<m_size;i++)
                m_str[i] = str[i];
        }*/
        MyString(char* str) : m_size(strlen(str) + 1),
            m_str(new char[m_size]) {
            
            // memcpy
            // std::copy
            std::copy(str, str+m_size, m_str);
            //for(int i=0;i<m_size;i++)
            //    m_str[i] = str[i];
        }
        // Copy ctor + делегирующий конструктор
        MyString(const MyString& other) : MyString(other.m_str) {
            std::cout << "Copy ctor" << std::endl;
            /*m_size = other.m_size;
            m_str = new char[m_size];
            std::copy(other.m_str, other.m_str+m_size, m_str);*/
        }
        /*MyString& operator=(const MyString& other) {
            if(&other != this) {
                m_size = other.m_size;
                
                if(m_str != nullptr)
                    delete[] m_str;
                m_str = new char[m_size];
                std::copy(other.m_str, other.m_str+m_size, m_str);
            }
            return *this;
        }*/
        // Copy and swap
        /*MyString& operator=(MyString tmp) {
            Swap(tmp, *this);
            return *this;
        }
        void Swap(MyString& a, MyString& b) {
            std::swap(a.m_size, b.m_size);
            std::swap(a.m_str, b.m_str);
        }*/
        ~MyString() {
            if(m_str != nullptr)
                delete[] m_str;
        }
};

int main() {
    MyString s1("abc"); // + 16 байтов стек
    //MyString s2 = s1;   // Copy ctor, конструктор копирования                          
    MyString s3;
    MyString s4;
    // Оператор присваивания копированием
    s1 = s1;            // Copy assigment operator
    return 0;
    // -16 байтов стек
}