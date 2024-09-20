// C++ Program to demonstrate
// Use of template
#include <bits/stdc++.h>
using namespace std;

// One function works for all data types. This would work
// even for user defined types if operator '>' is overloaded
template <typename T> T selSort(T arr)
{
    int n=arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        // Find the minimum element in
        // unsorted array
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        // Swap the found minimum element
        // with the first element
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
        for(int x=0; x<n; x++ ){
            cout<<arr[x]<<" ";
        }
        cout<<endl;
    }

    return arr;
}

int main()
{
    // Call myMax for int
    vector<int>v={1,5 ,4,6,8,2,4, 5,0};
    vector<int> vec=selSort(v);
    // for(int i=0; i<vec.size(); i++){
    //     cout<<vec[i]<<" ";
    // }
    
    return 0;
}
