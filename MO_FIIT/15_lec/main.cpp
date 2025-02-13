#include <iostream>

class BigInt {
        char m_digits[1000];
        unsigned short m_size;
    public:
        // Необходимость правила Трех???
        BigInt(const std::string& number) {
            m_size = number.length();
            for(int i=0;i<m_size;i++)
                m_digits[m_size-i-1] = number[i];
        }
        void Print() {
            for(int i=m_size-1;i>=0;i--)
                std::cout << m_digits[i];
            std::cout << std::endl;
        }
        void Add(const BigInt& other) {
            int carry = 0;
            for(int i=0;i<m_size;i++) {
                int res = (m_digits[i]-'0') + (other.m_digits[i]-'0');
                m_digits[i] = (res % 10 + carry) + '0';
                carry = 0;
                if(res > 9)
                    carry = 1;
            }
        } 
};

int main() {
    BigInt a("1234");
    a.Print();
    BigInt b("4328");
    b.Print();

    a.Add(b); // +=
    a.Print();
}