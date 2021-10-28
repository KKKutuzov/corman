#include <vector>


std::vector<int> bsum(const std::vector<int> &a, const std::vector<int> &b){
    std::vector<int> answer(a.size()+1,0);
    if(a.size() != b.size()){
        throw -1;
    }
    int tmp=0;
    for(int i=0;i<a.size();i++){
        answer[i] = (a[i] + b[i] + tmp) % 2;
        if(a[i] + b[i] + tmp > 1){
            tmp = 1;
        }
        else{
            tmp = 0;
        }
    }
    if(tmp == 1){
        answer[a.size()] = 1;
    }
    return answer;
}