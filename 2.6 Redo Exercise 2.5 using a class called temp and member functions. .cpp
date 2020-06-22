#include<iostream>
#include<iomanip>
using namespace std;
class temp {
        float f,theta;
         public:
                  float conversion(float f);
                   };
                      float temp::conversion(float f)
                       {
                                theta=((f-32)/9)*5;
                                     return theta;
                                     }
                                      int main()
                                      {
                                               temp t;
                                                    float f;
                                                         cout<<" Enter temperature in Farenheite scale :"<<endl;
                                                            cin>>f;
                                                                 cout<<" Temperature in Celsius scale = "<<t.conversion(f)<<endl;
                                                                 return 0;
                                                                  }

