#include <iostream>
 
int log(int);
 
int main() {
    
    int n;
    std::cin >> n;
 
    while(n--) {
        int k;
        std::cin >> k;
        
        std::cout << log(k) << std::endl;
    }
    return 0;
}
 
int log(int k) {
    int p = -1;
 
    do {
        k >>= 1;
        ++p;
    } while(k);
 
    return p;
}
