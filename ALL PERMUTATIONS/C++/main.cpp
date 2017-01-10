#include <iostream>
#include <string>

int permu_count(std::string a, std::string b);

int main(){
    std::string example_a;
    std::string example_b = "caaxadeacaaaxdeaxcedaaa";
    std::cout << "Please enter a string: ";
    std::cin >> example_a;
    std::cout << permu_count(example_a, example_b) << std::endl;
}

int permu_count(std::string a, std::string b){
    std::string temp_string = a;
    int permu_count = 0;

    for(int i=0; i<b.length(); i++){
        for(int j=0; j<a.length(); j++){
            if(temp_string.find(b[i+j]) != std::string::npos){
                temp_string.erase((temp_string.find(b[i+j])),1);
            }
        }
        if(temp_string.length() == 0){
            permu_count++;
        }
        temp_string = a;
    }

    return permu_count;
}
