#include <iostream>
#include <algorithm>
#include <map>


int main(){
    std::unordered_map<char, short> freq;
    std::string str{"Hello world!!"};
    for( int i{0}; i< str.size(); ++i){
        ++freq[str[i]];
    }
    std::vector< std::pair< char, short>> vec(freq.begin(),freq.end());

    std::sort(vec.begin(),vec.end(),
              [](const auto& i1, const auto& i2){
            return std::tie(i2.second, i1.first)< std::tie(i1.second, i2.first);
         // Cначала сравниваем частоты по убыванию, потом— слова по возрастанию.
        }
    );

    for(auto it: vec){
        std::cout<< it.first<< ':'<< ' '<< it.second<< std::endl;
    }
    std::cout<< std::endl;
    return 0;
}
