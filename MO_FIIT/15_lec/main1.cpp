#include <iostream>

class MyString {
    private:
        size_t m_size;
        char* m_str;
    public:
        /*
        MyString(const char* str) {
            m_size = strlen(str) + 1;
            m_str = new char[m_size];
            for(int i=0;i<m_size;i++) {
                m_str[i] = str[i];
            }
            // std::copy
        }
        */
        MyString() {
            m_size = 1;
            m_str = new char[1];
            m_str[0] = '\0';
        }
        MyString(const char* str) : m_size(strlen(str) + 1),
            m_str(new char[m_size]) {

            std::copy(str, str+m_size, m_str);
        }

        /*
        MyString(const MyString& other) {
            m_size = other.m_size;
            m_str = new char[m_size];
            std::copy(other.m_str, other.m_str + m_size, m_str);
        }
        */
        MyString(const MyString& other) : MyString(other.m_str){
            std::cout << "Copy ctor" << std::endl;
        }
        //MyString(const MyString& other) = delete;

        
        /*MyString& operator=(const MyString& other) {
            if(&other != this) {
                delete[] m_str;
                m_size = other.m_size;
                m_str = new char[m_size];
                std::copy(other.m_str, other.m_str + m_size, m_str);
            }
            return *this;
        }*/

        // idiom Copy-and-Swap
        void Swap(MyString& a, MyString& b) {
            std::swap(a.m_size, b.m_size);
            std::swap(a.m_str, b.m_str);
        }
        MyString& operator=(MyString other) {
            Swap(*this, other);
            return *this;
        }

        ~MyString() {
            delete[] m_str;
        }
};

void foo(const MyString& str) {

}

int main() {
    MyString str1("Hello, world!");
    MyString str2;
    MyString str3 = str1;
    str3 = str2 = str1;  // str2.operator=(str1);
    
    foo(str1);

    //...

    return 0;
}