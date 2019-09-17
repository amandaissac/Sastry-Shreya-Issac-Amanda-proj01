#include <iostream>
#include <cstdlib>
#include <vector>
#include <string.h>
#include <string>
#include <array>
#include <cmath>
#include <sstream>
#include <iterator>

using namespace std;
bool second=true;
bool third=true;
bool fourth=true;
int a,b,c,d,e;
bool noA,noB,noC,noD,noE;
vector<int>vec;
string bitwise(int total,vector<int>v){
    a=v[0];
    b=v[1];
    c=v[2];
    d=v[3];
    e=v[4];
    for(int x=0;x<5;x++){
        noA=true;
        noB=true;
        noC=true;
        noD=true;
        noE=true;
        vec.clear();
        if(x==0){
            vec.push_back(a);
            noA=false;
        }
        if(x==1){
            vec.push_back(b);
            noB=false;
        }
        if(x==2){
            vec.push_back(c);
            noC=false;
            
        }
        if(x==3){
            vec.push_back(d);
            noD=false;
        }
        if(x==4){
            vec.push_back(e);
            noE=false;
        }
        //cout<<vec[0]<<endl;
        //figuring out second space
        for(int y=0;y<5;y++){
            second=true;
            if((y==0)&&noA){
                vec.push_back(a);
                noA=false;
            }
            else if((y==1)&&noB){
                vec.push_back(b);
                noB=false;
            }
            else if((y==2)&&noC){
                vec.push_back(c);
                noC=false;
            }
            else if((y==3)&&noD){
                vec.push_back(d);
                noD=false;
            }
            else if((y==4)&&noE){
                vec.push_back(e);
                noE=false;
            }
            else{
                second=false;
            }
            cout<<vec[0]<< " "<<vec[1]<<endl;
        }
        //figuring out third space
/*
        if(second){
            for(int z=0;z<5;z++){
                third=true;
                if((z==0)&&noA){
                    vec.push_back(a);
                    noA=false;
                }
                if(z==1&&noB){

                }
                
            }
        }
*/
    }
/*
    string expression="";
    int comboCount=0;
    int counta=0,countb=1,countc=2,countd=3,counte=4;
    vector<string> bitOps;
    bitOps.push_back("<<");
    bitOps.push_back(">>");
    bitOps.push_back("&");
    bitOps.push_back("|");
    bitOps.push_back("^");
    
    for(int a=0;a<5;a++){//first number
        if(counta==4){
            counta=0;
        }
        counta++;
        for(int b=0;b<5;b++){
            if(countb==4){
                countb=0;
            }
            countb++;
            for(int c=0;c<5;c++){
                 if(countc==4){
                     countc=0;
                 }
                 countc++;
                 for(int d=0;d<5;d++){
                     if(countd==4){
                         countd=0;
                     }
                     countd++;
                     for(int e=0;e<5;e++){
                         if(counte==4){
                             counte=0;
                         }
                         //expression=v.at(counta)+bitOps.at(counta)+v.at(countb)+bitOps.at(countb)+v.at(countc)+bitOps.at(countc)+v.at(countd)+bitOps.at(countd)+v.at(counte)+bitOps.at(counte);
                         counte++;
                         comboCount++;
                         //std::cout<<"Expressions: "<<expression;
                     }
                 }
            }
        }
    }
    std::cout<<"count: "<<comboCount<<endl;
*/    
return "";


    
}

