#include <iostream>
#include <vector>

void sort_array()
{
    int n;
    std::cout<<"Enter array length:  ";
    std::cin>>n;

    int arr[n];
    std::cout<<"\nEnter array elements:  ";
    for(int i=0;i<n;i++)
        std::cin>>arr[i];
    
    int ctr=0;
    int sorted_arr[n];
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0)
        {
            sorted_arr[ctr] = 0;
            ++ctr;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i] == 1)
        {
            sorted_arr[ctr] = 1;
            ++ctr;
        }
    }

    for(int i=ctr;i<n;i++) {
        sorted_arr[ctr] = 2;
        ++ctr;
    }
    
    std::cout<<"\nSorted array:  ";
    for(int i=0;i<n;i++)
        std::cout<<sorted_arr[i]<<"  ";
}

int main()
{
    sort_array();
    return 0;
}