#include <iostream>
#include <string>

std::string URLify(std::string s, int len){
    std::string URL = "%20";

    int space_count = 0;
    int current = s.length()-1;

    while(std::isspace(s[current])){
        space_count++;
        current--;
    }

    int spaces = space_count/2;

    while(spaces > 0){
        while(!(std::isspace(s[current]))){
            s[current + space_count] = s[current];
            current--;
        }

        s.replace(current+(space_count-2), 3, "%20");
        space_count -= 2;
        current--;
        spaces--;
    }
    return s;
}

int main(){
    std::string str;
    std::cout << "Please enter a string: ";
    std::getline(std::cin, str);

    std::cout << "Here's your resulting string: " << std::endl;
    std::cout << URLify(str, str.size()) << std::endl;
}
