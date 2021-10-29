#include <vector>

template <typename T> 
void merge(std::vector<T> &v, int p, int q, int r){
    int i = p;
    int j = q+1;
    std::vector<T> answer;
    while(i < q+1 && j < r +1){
        if(v[i] < v[j]){
            answer.push_back(v[i]);
            i++;
        }
        else{
            answer.push_back(v[j]);
            j++;
        }
    }
    if(i == q){
        for(int k=j;k<r+1;k++){
            answer.push_back(v[k]);
        }
    }
    else{
        for(int k=i;k<q+1;k++){
            answer.push_back(v[k]);
        }
    }
    for(int i=p;i<r+1;i++){
        v[i] = answer[i-p];
    }
}