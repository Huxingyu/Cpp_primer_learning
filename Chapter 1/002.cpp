#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int sum=0,value;
    while(std::cin>>value){
        sum+=value;
    }
    std::cout<<sum<<endl;;
    system("pause");
    return 0;
}