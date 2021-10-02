#include <iostream>
#include <vector>

void sort_vec()
{
    int temp = 0;
    int temp1 = 0, temp2 = 0;
    std::vector<int> vec;
    std::cout<<"Enter vector, 99 to stop:  ";

    while(temp != 99)
    {
        std::cin>>temp;
        vec.push_back(temp);
    }
    vec.pop_back();

    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<(vec.size())-i-1;j++)
        {
            if(vec[j] > vec[j+1])
            {
                temp1 = vec[j];
                temp2 = vec[j+1];
                vec.erase(vec.begin()+j);
                vec.insert(vec.begin()+j, temp2);
                vec.erase(vec.begin()+j+1);
                vec.insert(vec.begin()+j+1, temp1);
            }
        }
    }

    std::cout<<"\nSorted vector:  ";
    for(int i=0;i<vec.size();i++)
        std::cout<<vec[i]<<"  ";
    std::cout<<std::endl;
}

int main()
{
    sort_vec();
    return 0;
}