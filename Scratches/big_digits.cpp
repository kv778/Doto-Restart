#include <iostream>
#include <vector>
#include <math.h>

int main()
{
    int N;
    std::cout<<"Enter no of digits:  ";
    std::cin>>N;

    std::vector<int> v1;
    std::vector<int> v2;

    for(int i=N;i>0;i--)
    {
        int temp;
        temp = rand() % 10;
        v1.push_back(temp);

        temp = rand() % 10;
        v2.push_back(temp);
    }

    std::cout<<"Big number 1:  ";
    for(int i=0;i<v1.size();i++)
        std::cout<<v1[i];
    std::cout<<std::endl;

    std::cout<<"Big number 2:  ";
    for(int i=0;i<v2.size();i++)
        std::cout<<v2[i];
    std::cout<<std::endl;

    int carryOver = 0;
    std::vector<int> v3;

    for(int i=(v1.size()-1);i>=0;i--)
    {
        int temp=0;
        temp = v1[i] + v2[i] + carryOver;
        carryOver = 0;

        if(temp > 10)
        {
            temp = temp - 10;
            carryOver = 1;
            v3.insert(v3.begin(), temp);
        }
        
        else
        {
            v3.insert(v3.begin(), temp);
        }
    }

    std::cout<<"Big sum:  ";
    for(int i=0;i<v3.size();i++)
        std::cout<<v3[i];
    
    std::cout<<std::endl;
    return 0;
}