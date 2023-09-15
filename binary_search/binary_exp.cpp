#include <iostream>

using namespace std;

// Recursive
int re_power( int a , int b){
    int result;
    if (b == 0 ) return 1;
    int temp = re_power (a , b/2);
    result = temp * temp;
    if (b % 2 == 1) result *= a;
    return result;
}
// Iterative
int iter_power( int a , int b){
    int result = 1;
    while( b > 0){
        if (b % 2  == 1) result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}

int main(){
    int result = re_power(3,13);
    cout << "Result: " << result << endl;
}