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

void sort_vector()
{
    std::vector<int> vec;
    int temp=0;

    std::cout<<"Enter elements of vector, 99 to stop:  ";
    while(temp!=99)
    {
        std::cin>>temp;
        vec.push_back(temp);
    }
    vec.pop_back();

    int ctr=0;
    auto it = vec.begin();

    for(int i=0;i<vec.size();i++)
    {
        if(vec[i] == 0)
        {
            vec.erase(it+i);
            vec.insert(it+ctr, 0);
            ++ctr;
        }
    }

    for(int i=0;i<vec.size();i++)
    {
        if(vec[i] == 1)
        {
            vec.erase(it+i);
            vec.insert(it+ctr, 1);
            ++ctr;
        }
    }

    std::cout<<"\n Sorted vector:  ";
    for(int i=0;i<vec.size();i++)
    {
        std::cout<<vec[i]<<"  ";
    }
}

int main()
{
    //sort_array();
    sort_vector();
    return 0;
}