#include <iostream>
#include <vector>
#include "merge.h"
#include "bin_search.h"

using namespace std;

int main(){
    vector<int> v = {1,5,8,9,3,4,4,5};
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    merge(v,0,3,7);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int> f = {1,2,3,4,5,6};
    cout << bin_search(f,1);
    cout << bin_search(f,2);
    cout << bin_search(f,3);
    cout << bin_search(f,4);
    cout << bin_search(f,5);
    cout << bin_search(f,6);
}