#include <vector>

template <typename T>
void Insertion_Sort(std::vector<T> &v){
    for(int j=1;j<v.size();j++){
        T key = v[j];
        int i = j-1;
        while (i > -1 && v[i] > key){
            v[i+1] = v[i];
            i--;
        }
        v[i+1] = key;
    }
}
template <typename T, typename F>
void Insertion_Sort(std::vector<T> &v, const F& comparisonFcn){
    for(int j=1;j<v.size();j++){
        T key = v[j];
        int i = j-1;
        while (i > -1 && comparisonFcn(v[i], key)){
            v[i+1] = v[i];
            i--;
        }
        v[i+1] = key;
    }
}
