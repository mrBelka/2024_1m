#include <iostream>
#define N 1000

class Cat {
    private:
        // Поля
        int m_fun;
        int m_age;
        std::string m_name;
    public:
        // Default ctor
        // Cat() = delete;
        /*// Конструктор, ctor
        Cat(const std::string& name, int age, int fun, int& ref) {
            std::cout << "ctor" << std::endl;
            m_name = name;
            // this->m_name = name;
            m_age = age;
            m_fun = fun;
            m_ref = ref;
        }*/
        // Member initializer list
        Cat(const std::string& name, int age, int fun):
                m_fun(fun), m_age(age), m_name(name) 
        {
            std::cout << "ctor" << std::endl;
        }
        ~Cat() {
            std::cout << "dtor" << std::endl;
        }
        // Методы
        void Pet() {
            m_fun++;
        }

        void setName(const std::string& _name) {
            if(_name == "Oleg")
                return;
            m_name = _name;
        }
};

int main() {
    // cat - объект, экземпляр
    //Cat cat1;
    Cat cat2("Barsik", 1, 10);
    std::cout << "===" << std::endl;
    cat2.Pet();
    //cat1.Pet();
    //cat1.setName("Oleg");

    return 0;
}