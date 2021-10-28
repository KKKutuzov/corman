#include <vector>

template <typename T>
int find_value(const std::vector<T> &v, T key){
    for(int i=0;i<v.size();i++){
        if(v[i] == key){
            return i;
        }
    }
    return -1;

}