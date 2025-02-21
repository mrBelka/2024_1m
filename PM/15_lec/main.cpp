#include <iostream>
#include <string>
#define N_Max 1000

class BigInt {
    char m_value[N_Max];
    short m_size = 0;

    public:
        BigInt() = default;
        BigInt(const std::string& value) {
            size_t len = value.length();
            for(int i=0;i<len;i++)
                m_value[i] = value[len-i-1] - '0';
            for(int i=len;i<N_Max;i++) {
                m_value[i] = 0;
            }
            m_size = len;
        }

        BigInt& operator+=(const BigInt& other) {
            for(int i=0;i<m_size;i++) {
                m_value[i] += other.m_value[i];
                if(m_value[i] > 9) {
                    m_value[i] -= 10;
                    m_value[i+1]++;
                    if(i+1 == m_size)
                        m_size++;
                }
            }
            return *this;
        }

        BigInt& operator+=(int other) {
            *this += BigInt(std::to_string(other));
            return *this;
        }

        // Return value optimization (RVO)
        BigInt operator+(const BigInt& other) {
            BigInt result(*this);
            result += other;
            return result;
        }

        bool operator<(const BigInt& other) {
            if(m_size < other.m_size)
                return true;
            else if(m_size > other.m_size)
                return false;
            else {
                for(int i=m_size-1;i>=0;i--) {
                    if(m_value[i] < other.m_value[i])
                        return true;
                    else if(m_value[i] > other.m_value[i])
                        return false;
                }
                return false;
            }
        }

        bool operator>=(const BigInt& other) {
            return !(*this < other);
        }

        BigInt operator++(int) {
            BigInt result(*this);
            *this += BigInt("1");
            return result;
        }

        BigInt& operator++() {
            *this += BigInt("1");
            return *this;
        }

        friend std::ostream& operator<<(std::ostream& out, const BigInt& other);
};

std::istream& operator>>(std::istream& in, BigInt& other) {
    std::string s;
    in >> s;
    other = BigInt(s);
    return in;
}

std::ostream& operator<<(std::ostream& out, const BigInt& other) {
    for(int i=0;i<other.m_size;i++) {
        out << static_cast<short>(other.m_value[other.m_size - i - 1]);
    }
    return out;
}

int main() {
    BigInt x;
    std::cin >> x;
    BigInt y("999");
    
    BigInt z = x + y;

    for(BigInt i = 0; i < BigInt("1000"); i+=1) {

    }

    if(x < y) {
        std::cout << "LESS" << std::endl;
    }
    
    std::cout << z << std::endl;
    return 0;
}