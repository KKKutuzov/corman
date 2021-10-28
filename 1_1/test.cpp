#include <iostream>
#include <vector>
#include "Insertion_Sort.h"
#include "find_task.h"
#include "binary_sum.h"

using namespace std;
bool comp(int a, int b)
{ 
    return a < b; 
}

int main()
{
    vector<int>  v = {6,5,4,3,2,1};
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    Insertion_Sort(v);
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    //Insertion_Sort(v, comp);
    Insertion_Sort(v, [](const int &a, const int &b){return a<b;});
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    cout << find_value(v,0) << endl;
    cout << find_value(v,2) << endl;
    vector<int> test_find = bsum({1,0,1},{0,0,0});
    for(int i=0;i<test_find.size();i++)
    {
        cout << test_find[i] << " ";
    }
    cout << "\n";
    vector<int> test_find_1 = bsum({1,0,1},{1,0,0});
    for(int i=0;i<test_find_1.size();i++)
    {
        cout << test_find_1[i] << " ";
    }
    cout << "\n";
    vector<int> test_find_2 = bsum({1,0,1},{1,1,1});
    for(int i=0;i<test_find_2.size();i++)
    {
        cout << test_find_2[i] << " ";
    }
    cout << "\n";
    return 0;
}