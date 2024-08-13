#include <iostream>
#include <vector>


template<class T>
T abc(T a)
{
    return a * a;
}
template<class T>
std::vector<T> abc(std::vector<T> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        a[i] *= a[i];
    }
    return a;
}
int main()
{
    int a = 4;
    std::vector<int> b {-1, 4, 8};
    std::cout << "[IN]: " << a << std::endl;
    std::cout << "[OUT]: " << abc(a) << std::endl;
    std::cout << "[IN]: ";
    for (int i = 0; i < b.size(); i++)
    { 
        std::cout << b[i] << " ";
    }
    std::cout << '\n';
    std::cout << "[OUT]: ";
    b = abc(b);
    for (int i = 0; i < b.size(); i++)
    {
        std::cout << b[i] << " ";
    }
}

