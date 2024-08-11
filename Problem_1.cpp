#include <iostream>
#include <string>
#include <vector>

int main(){

 int t, a, b, c;

 std::cin >> t;

 std::vector<std::string> result(t);
 
for(int i = 0; i < t; i++){  
 
 std::cin >> a >> b >> c;

 if(a + b == c || a + c == b || c + b == a ){
  result[i] = "Yes";
 }else{ 
    result[i] = "No";
}
}

for (const std::string& res : result){

std::cout << res << std::endl;

}

return 0;
}