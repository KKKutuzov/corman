#include <vector>
#include <map>

template <typename T>
bool isHasDublicate(std::vector<T> &v)
{
    std::map<T,int> mp;
    for(int i=0;i<v.size();i++){
        if(mp.find(v[i]) != mp.end()){
            return true;
        }
        mp[v[i]] = 1;
    }
    return false;
}