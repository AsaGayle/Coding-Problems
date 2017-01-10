#include <iostream>
#include <string>

bool one_away(std::string a, std::string b){
    int a_pos = a.size()-1;
    int b_pos = b.size()-1;
    bool shifted_one = false;

    if(((a_pos - b_pos) > 1) || ((a_pos - b_pos) < -1)){
        std::cout << "Something" << (a_pos - b_pos) << std::endl;
        return false;
    }

    do{
        if(a[a_pos] == b[b_pos]){
            a_pos--;
            b_pos--;
        } else if(shifted_one == false){
            a.size()>b.size() ? a_pos-- : b_pos--;
            shifted_one = true;
        } else{
            return false;
        }
    }while(a_pos >=0 && b_pos >=0);

    return true;
}

int main(){
    std::string first;
    std::string second;

    std::cout << "Please enter the first string: ";
    std::getline(std::cin, first);
    std::cout << "Please enter the second string: ";
    std::getline(std::cin, second);

    if(one_away(first,second)){
        std::cout << "true" << std::endl;
    } else{
        std::cout << "false" << std::endl;
    }
    return 0;
}
