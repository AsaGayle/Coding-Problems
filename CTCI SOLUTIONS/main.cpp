#include <iostream>
#include <string>

int main(){
    int arr[5] = {1,2,3,4,5};
    char testa = 'a';
    std::string testb = 'abc';
    std::cout << (arr[-1] == arr[1] ? "True" : "False");
    std::cout << (testa == testb[0] ? "True" : "False");
    return 0;
}
