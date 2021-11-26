#include <iostream>
using namespace std;

int main(){

    //Declaring and Initializing
    int Nums [10] = {10,20,30,40,50,60,70,80,90,100};
    int Sum = 0;
    int Mean = 10;

for (int i = 0; i < 10; i++){
//Formula
Sum= Sum + Nums[i];
Mean= Sum/10;

   cout << " The Mean of the array is:"<< Mean <<endl;
}
    return 0;

}