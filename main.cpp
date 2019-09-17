#include <iostream>
#include <cstdlib>
#include <vector>
#include <string.h>
#include <string>
#include <array>
#include <cmath>
#include <sstream>
#include <iterator>
#include "proj1.h"
using namespace std;
string tot;
vector<int> vals;
string operat ="";

int main(int argc, char * argv[]){
    int count=0;
    for(int i=0;i<argc;i++){
        if(strcmp(argv[i],"-v")==0){
            for(int j=i+1;count<5;j++){
                vals.push_back(stoi(argv[j]));
                count++;
            }
        }
        
        if(strcmp(argv[i],"-e")==0){
            tot=argv[i+1];
        }
        
        if(strcmp(argv[i],"-a")==0){
            operat = "a";
        }
        if(strcmp(argv[i],"-b")==0){
            operat = "b";
        }
    }
    
    std::cout<<"total: "<< tot<<endl;
    std::cout<<"operator: "<< operat<<endl;
    for(unsigned int i=0;i< vals.size();i++){
        std::cout<<": "<< vals.at(i)<<endl;
    }
    int total=stoi(tot);
    bitwise(total,vals);
    
}
