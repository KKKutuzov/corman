#include <vector>
#include <iostream>


template <typename T>
int bin_search(std::vector<T> &v, T value){
    int l = 0;
    int r = v.size();
    int m = (l+r)/2;
    while(r - l > 1){
        if(v[m] == value){
            return m;
        }
        if(v[m] > value){
            r = m;
        }
        else{
            l = m;
        }
        m = (l+r)/2;
    }
    return l;
}