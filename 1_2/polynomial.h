#include <vector>


float cucl(const std::vector<int> coff, float point){
    if(coff.size() == 0){
        throw 1;
    }
    if(coff.size() == 1){
        return coff[0];
    }
    float tmp = coff[0]*point;
    for(int i=1;i<coff.size();i++)
    {
        if(i == coff.size() - 1){
            return tmp + coff[i];
        }
        tmp = (tmp + coff[i])*point;
    }
    return tmp;
}
