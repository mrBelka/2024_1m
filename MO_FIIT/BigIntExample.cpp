#include <iostream>

class BigInt {
	char m_value[1000];
public:
	BigInt() {
		for (int i = 0; i < 1000; i++)
			m_value[i] = 0;
	}
	BigInt(const std::string& num) {
		for (int i = 0; i < 1000; i++)
			m_value[i] = 0;
		for (int i = 0; i < num.length(); i++)
			m_value[i] = num[num.length() - i - 1];
	}

	BigInt& operator+=(const BigInt& other) {
		short size1 = strlen(m_value);
		short size2 = strlen(other.m_value);
		bool carry = 0;
		for (int i = 0; i < std::max(size1, size2); i++) {
			if(m_value[i] == 0)
				m_value[i] = other.m_value[i] + carry;
			else if (other.m_value[i] == 0)
				m_value[i] = m_value[i] + carry;
			else
				m_value[i] = m_value[i] + other.m_value[i] + carry - '0';
			carry = 0;
			if (m_value[i] - '0' > 9) {
				carry = 1;
				m_value[i] -= 10;
			}
		}
		if (carry)
			m_value[std::max(size1, size2)] = 1 + '0';
		return *this;
	}

	/*BigInt& operator+=(const BigInt& other) {
		short size1 = strlen(m_value);
		short size2 = strlen(other.m_value);
		if (size1 == size2) {
			bool carry = 0;
			for (int i = 0; i < size1; i++) {
				m_value[i] = m_value[i] + other.m_value[i] + carry - '0';
				carry = 0;
				if (m_value[i] - '0' > 9) {
					carry = 1;
					m_value[i] -= 10;
				}
			}
			if (carry)
				m_value[size1] = 1 + '0';
		}
		else if (size1 > size2) {
			bool carry = 0;
			for (int i = 0; i < size2; i++) {
				m_value[i] = m_value[i] + other.m_value[i] + carry - '0';
				carry = 0;
				if (m_value[i] - '0' > 9) {
					carry = 1;
					m_value[i] -= 10;
				}
			}
			if (carry) {
				for (int i = size2; i < size1; i++) {
					m_value[i] = m_value[i] + carry;
					carry = 0;
					if (m_value[i] - '0' > 9) {
						carry = 1;
						m_value[i] -= 10;
					}
				}
				if (carry) {
					m_value[size1] = '1';
				}
			}
		}
		else if (size1 < size2) {
			bool carry = 0;
			for (int i = 0; i < size1; i++) {
				m_value[i] = m_value[i] + other.m_value[i] + carry - '0';
				carry = 0;
				if (m_value[i] - '0' > 9) {
					carry = 1;
					m_value[i] -= 10;
				}
			}
			if (carry) {
				for (int i = size1; i < size2; i++) {
					m_value[i] = other.m_value[i] + carry;
					carry = 0;
					if (m_value[i] - '0' > 9) {
						carry = 1;
						m_value[i] -= 10;
					}
				}
				if (carry) {
					m_value[size2] = '1';
				}
			}
		}
		return *this;
	}*/

	BigInt operator+(const BigInt& other) {
		BigInt result(*this);
		result += other;
		return result;
	}

	bool operator<(const BigInt& other) {
		short size1 = strlen(m_value);
		short size2 = strlen(other.m_value);
		if (size1 > size2)
			return false;
		else if (size1 < size2)
			return true;

		for (int i = size1 - 1; i >= 0; i--) {
			if (m_value[i] < other.m_value[i])
				return true;
		}
		return false;
	}

	bool operator>=(const BigInt& other) {
		return !(*this < other);
	}

	friend std::ostream& operator<<(std::ostream& out, BigInt& x);
};

std::istream& operator>>(std::istream& in, BigInt& x) {
	std::string s;
	in >> s;
	x = BigInt(s);
	return in;
}

std::ostream& operator<<(std::ostream& out, BigInt& x) {
	short size = strlen(x.m_value);
	for (int i = 0; i < size; i++) {
		out << x.m_value[size - i - 1];
	}
	return out;
}

int main() {
	BigInt x("31");
	BigInt y("39");
	BigInt z;

	z = x + y;

	if (x < y)
		std::cout << "Less" << std::endl;

	//std::cout << z << std::endl;
}