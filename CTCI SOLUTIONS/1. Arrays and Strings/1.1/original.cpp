//My first implimentation
#include <iostream>
#include <algorithm>
#include <string>

bool is_unique(std::string s){
    if(s.size()>128){
        return false;
    }

    std::string temp = s;
    std::sort(temp.begin(), temp.end());

    for(int i=1; i<temp.size(); i++){
        if(temp[i] == temp[i-1]){
	    return false;
	}
    }
    return true;
}

int main(){
    std::string str;

    std::cout << "Please enter a string: ";
    std::getline(std::cin, str);

    if(is_unique(str)){
        std::cout << "true" << std::endl;
    } else{
        std::cout << "false" << std::endl;
    };
    return 0;
};
