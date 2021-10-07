#include <iostream>
#include <vector>

//TODO: Figure out cases with input 0 or repeated numbers pls

void array_max()
{
    int n,k,temp=0;
    std::cout<<"Enter no. of elements:  ";
    std::cin>>n;

    int arr[n];
    std::cout<<"Enter elements:  ";
    for(int i=0;i<n;i++)
        std::cin>>arr[i];
    
    std::cout<<"\nEnter k:  ";
    std::cin>>k;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    std::cout<<"\nK min element:  "<<arr[k-1];
    std::cout<<"\nK max element:  "<<arr[n-k+1];
}

int main()
{
    array_max();
    return 0;
}