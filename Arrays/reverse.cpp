#include <iostream>
#include <vector>

void reverse_array()
{
    int n;
    std::cout<<"Enter n:  ";
    std::cin>>n;

    int arr[n], rev_arr[n];
    std::cout<<"\nEnter array:  ";
    for(int i=0;i<n;i++)
        std::cin>>arr[i];
    
    int ctr=n-1;
    for(int i=0;i<n;i++)
    {
        rev_arr[ctr] = arr[i];
        --ctr;
    }

    std::cout<<"\nReversed Array:  ";
    for(int i=0;i<n;i++)
        std::cout<<rev_arr[i]<<"  ";
    std::cout<<std::endl;
}

void reverse_vector()
{
    std::vector<int> vec;
    std::vector<int> rev_vec;
    int temp = 0;
    std::cout<<"Enter vector, enter 99 to stop input:  ";
    while(temp != 99)
    {
        std::cin>>temp;
        vec.push_back(temp);
    }
    vec.pop_back();

    for(int i=vec.size()-1;i>=0;i--)
        rev_vec.push_back(vec[i]);

    std::cout<<"\nReversed vector:  ";
    for(int i=0;i<rev_vec.size();i++)
        std::cout<<rev_vec[i]<<"  ";
    std::cout<<std::endl;
}

int main()
{
    //reverse_array();
    reverse_vector();

    return 0;
}