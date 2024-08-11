#include <iostream>

int main (){

    int n, num, count = 0, result = 0;

    std::cin >> n;

    for(int i = 0; i < n; i++){
         for(int j = 1; j <= 3; j++){
             std::cin >> num;

                if(num == 1){
                    count++;
                }
            }

            if(count >= 2){
                result++;
            }

            count = 0;
    }

    std::cout << result << std::endl;


    return 0;
}