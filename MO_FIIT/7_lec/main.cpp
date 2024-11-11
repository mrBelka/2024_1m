#include <func.hpp>

void f(int** mat)
{

}

int main()
{
    //int mat[100][100];
    int** mat = new int*[100];
    for(int i=0;i<100;i++)
        mat[i] = new int[100];
    f(mat);


    int n;
    int mas[10000];
    mt::Read(mas, n);
    if(!mt::ExistNumberWithSum19(mas, n))
        mt::Sort(mas, n);
    mt::Write(mas, n);
    return 0;
}