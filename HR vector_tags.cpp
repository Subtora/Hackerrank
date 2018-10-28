#if 0
#include <iostream>
#include <string>
#include <vector>

int main(){
    int N, Q;
    std::vector<std::string> list;
    std::cin >> N >> Q;
    list.resize(N + Q);
    
    for(int i = 0; i < N + Q; i++ ){
        std::string input;
        getline(std::cin, input);
        list.emplace_back(input);
    }
    for(auto i : list){
        std::cout << i << std::endl;
    }
    
} 
#endif

#include <iostream>
#include <string>

int main(){
    std::cout << "hello"<<std::endl;
    return 0;
}