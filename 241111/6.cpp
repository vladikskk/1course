#include <algorithm>
#include <iostream>

int main() {
        int k;
        std::cin >> k;

        int arr[k];
        for(int i = 0; i < k; i++){
                std::cin >> arr[i];
        }

        std::reverse(arr, arr + k);
        
        for(int i = 0; i < k; i++){
                std::cout << arr[i] << std::endl;
        }
    
    return 0;
}