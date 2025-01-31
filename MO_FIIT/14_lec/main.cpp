#include <iostream>

struct Test {
    int x = 10;

    struct B {
        int y;
    } b;
};

class Cat {
        // Поля
        int m_age;
        int m_weight;
        std::string m_name;
        int m_fun = 0;

        

    public:
        Cat() {}
        /*Cat() {
            std::cout << "Ctor" << std::endl;
        }*/
        ~Cat() {
            std::cout << "Dtor" << std::endl;
        }
        // Методы
        void Pet() {
            m_fun++;
        }
        void SetName(const std::string& name) {
            if(name == "Oleg")
                return;
            m_name = name;
        }     
};

int main() {
    Cat cat;
    return 0;
}

/*#include <iostream>
#include <fstream>
#define N 100
#define M 100

int n, m;
char field[N][M];
int steps[N][M];

void Search(int i, int j, int step) {
    if(steps[i][j] <= step)
        return;
    steps[i][j] = step;

    if(field[i][j] == 'E') 
        return;

    if(i+1 < N && field[i+1][j] != '#')
        Search(i+1, j, step + 1);
    if(i-1 >= 0 && field[i-1][j] != '#')
        Search(i-1, j, step + 1);
    if(j+1 < M && field[i][j+1] != '#')
        Search(i, j+1, step + 1);
    if(j-1 < N && field[i][j-1] != '#')
        Search(i, j-1, step + 1);
}

int main() {
    int si, sj, ei, ej;
    std::ifstream in("input.txt");
    in >> n >> m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) {
            in >> field[i][j];
            steps[i][j] = INT_MAX;
            if(field[i][j] == 'S') {
                si = i;
                sj = j;
            } else if(field[i][j] == 'E') {
                ei = i;
                ej = j;
            }
        }
    Search(si, sj, 0);
    std::cout << steps[ei][ej];
}
*/