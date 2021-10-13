#include <iostream>
#include <ctime>
#include <cstdlib>

int main (){
 int semente;
 int dado;
    semente =time(0);

srand(semente);
 
 
 srand(time(NULL));
 std::cout << rand()%6+1;



    return 0;
}
