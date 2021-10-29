#include <iostream>
#include <vector>
#include "selection_sort.h"
#include "find_dublicate.h"
#include "polynomial.h"

using namespace std;

int main()
{
    vector<int> v = {1,6,5,4,3};
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    selection_sort(v);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    vector<float> f = {1.3,-1,5.2,123,-33/5};
    for(int i=0;i<f.size();i++){
        cout << f[i] << " ";
    }
    cout << endl;
    selection_sort(f);
    for(int i=0;i<f.size();i++){
        cout << f[i] << " ";
    }
    cout << endl;
    vector<int> vv = {6,5,4,3,2,1,5};
    cout << "Find: " << isHasDublicate(vv) << endl;

    vector<int> ll = {6,5,4,3,2,1,10};
    cout << "Find: " << isHasDublicate(ll) << endl;

    cout << cucl({1}, 5) << endl;
    return 0;
}