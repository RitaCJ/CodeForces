#include <iostream>
#include <string> 
#include <map>

int main(){
   
   std::string user_name;
   std::getline(std::cin, user_name);
    
    std::map<char, int> count;
    
    for(char caractere : user_name){
        count[caractere]++;
    }

    if(count.size() % 2 == 0){
     std::cout << "CHAT WITH HER!" << std::endl;
    }else{
        std::cout << "IGNORE HIM!" << std::endl;
    }
    
  
   return 0;

}

