#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    for(int i=0;i<11;i++) {
        v.push_back(i);
    }

    std::cout<<"Vector:  ";
    auto it = v.begin();

    for(int i=0;i<v.size();i++) {
        std::cout<<v[i]<<"  ";
    }

    std::cout<<std::endl;
    return 0;
}