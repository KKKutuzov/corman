#include <vector>



template <typename T> 
T find_greater_min(std::vector<T> &v, T value){
    int flag = 0;
    T min_value;
    for(int i=0;i<v.size();i++){
        if(flag  == 0 && v[i]  > value){
            min_value = v[i];
            flag = 1;
            continue;
        }
        if(v[i]  > value && min_value > v[i]){
            min_value = v[i];
        }
    }
    if(flag == 0){
        return value;
    }
    return min_value;

}

template <typename T>
void selection_sort(std::vector<T> &v)
{
    std::vector<T> answer;
    if(v.size() == 0){
        return;
    }
    T first_min = v[0];
    for(int i=0;i<v.size();i++){
        if(v[i] < first_min){
            first_min = v[i];
        }
    }
    answer.push_back(first_min);
    T second_min = first_min;
    for(int i=1;i<v.size();i++){
        second_min =  find_greater_min(v,first_min);
        answer.push_back(second_min);
        first_min = second_min;
    }
    v = answer;
}