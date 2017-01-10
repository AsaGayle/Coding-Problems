#include <iostream>
#include <string>
#include <algorithm>
#include <locale>

bool is_palindrome_perm(std::string s){
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    std::sort(s.begin(), s.end());
    std::cout<<s<<std::endl;
    int i = 0;
    while(std::isspace(s[i]) || (std::ispunct(s[i]))){
        i++;
    }
    std::cout << i << std::endl;

    if(((s.size() - i)%2) == 1){
        int count = 0;
        bool odd = false;

        while(i < s.size()){
            count++;
            if(s[i+1] != s[i] && count%2 == 1 && odd){
                return false;
            } else if(s[i+1] != s[i] && (count)%2 == 1){
                count = 0;
                odd = true;
            } else if(s[i+1] != s[i]){
                count = 0;
            }
            i++;
        }
    }
     else{
        int count = 0;

        while(i < s.size()){
            count++;
            if(s[i+1] != s[i] && count%2 == 1){
                return false;
            } else if(s[i+1] != s[i]){
                count = 0;
            }
            i++;
        }
    }
    return true;
}

int main(){
    std::string s;
    std::getline(std::cin, s);

    if(is_palindrome_perm(s)){
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    };

    return 0;
}
