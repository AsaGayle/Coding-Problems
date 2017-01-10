#include <iostream>
#include <string>

bool is_unique(std::string s){
    //if string is greater than the total amount of ASCII characters there are
    //definitely duplicates
    if(s.size()>128){
        return false;
    }

    bool arr[128] = {false};

    for(unsigned int i=0; i<s.size(); i++){
        int x = s[i];
        if(arr[x]){
            return false;
        }
        arr[x] = true;
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
