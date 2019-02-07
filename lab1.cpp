#include <iostream>
#include <random> //allow access to C++ random facilities

using namespace std;


int main()
{
    std::random_device rd; // will be used to seed the engine eng1 below
    std::mt19937 eng1(rd()); // this engine produces different ouput every time
    std::mt19937 eng2(1337);// this engine  produces the same output every time

    float mean = 36.7f; // average
    float sd = 4.565f; // standard deviation

    int min = 10; // minimum number to generate
    int max = 48; // maximum number to generate

    // values near the mean are the most likely
    // standard deviation affects the dispersion of generated values from the mean
    std::normal_distribution<float> norm(mean,sd);
    std::uniform_int_distribution<> unifrm(min, max);

  //generate 20 normally distributed floats  
  for(int n=0 ;  n < 20 ;  n++) 
   {
        cout<<norm(eng1)<<" "; // different output each time
    }

  //generate 20 uniformly distributed integers 
  for(int n=0 ;  n < 20 ; n++) 
  {
        cout<<unifrm(eng2)<<" ";// same output each time
    }
}
