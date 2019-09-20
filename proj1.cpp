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

bool second=true;
bool third=true;
bool fourth=true;
bool fifth=true;
int a,b,c,d,e;
int count=0;
bool noA,noB,noC,noD,noE;
vector<string> ari={"","","",""};
int op1,op2,op3,op4;
vector<int>vec={-1,-1,-1,-1,-1};
vector<vector<int>>all; //a vector holding vector memory
vector<vector<string>>alla; //vectoro holding all ari vectors
vector<string>output; //holding all the output strings
vector<string> correctExp;
string arithmetic(int total,vector<int>v){
  //int op=0;
    a=v[0];
    b=v[1];
    c=v[2];
    d=v[3];
    e=v[4];
    for(int x=0;x<5;x+=1){
        noA=true;
        noB=true;
        noC=true;
        noD=true;
        noE=true;
        //vec.clear();
        vec={-1,-1,-1,-1,-1};
        firstInt(a,b,c,d,e,x);
        //figuring first arithmetic
        for(int a1=0;a1<5;a1++){
            //setting first value of ari[0]
          findArith(0,a1);
          //cout<<vec[0]<<endl;
          //figuring out second space
          for(int y=0;y<5;y+=1){
              second=true;
              secondInt(a,b,c,d,e,y);
              //second arithmetic
              for(int a2=0;a2<5;a2++){
                  findArith(1,a2);
                  //after we have figured out the second one... within loop
                  if(second){	      
                      //cout<<vec[0]<<" "<<vec[1]<<endl;
                      for(int z=0;z<5;z+=1){
                          third=true;
                          thirdInt(a,b,c,d,e,z);
                          //cout<<"This is Z: "<<z<<endl;
                          
                          //find third arithmetic
                          //now setting the third operand (in total there is 4)
                          for(int a3=0;a3<5;a3++){
                              findArith(2,a3);
                              fourthToTotal(total);
                              // secondNum(a,b,c,d,e,third,z);
                              //going onto the fourth
                          }//third arithmetic
                      }//for: finding third integer
                  }//if second to third integer
              }//second arithmetic 
          }//second integer
        }//first arithmetic value
    }//first integer
    cout<<count<<" arithmetic expressions found that evaluate to "<<total<<endl;
    return "";
}
void fourthToTotal(int total){
    if(third){//NEW METH
        //cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2]<<endl;
        //count+=1;
        for(int w=0;w<5;w++){
            fourth=true;
            fourthInt(a,b,c,d,e,w);
            
            //if the fourth one is found! Going to fifth!
            if(fourth){
                //count+=1;
                //cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2]<<" "<<vec[3]<<endl;
                ///*
                for(int h=0;h<5;h+=1){
                    fifth=true;
                    fifthInt(a,b,c,d,e,h);
                    
                    //find fourth arithmetic!
                    //now looking for the 4th operand
                    for(int a4=0;a4<5;a4++){
                        findArith(3,a4);
                        if(fifth){
                            calcArith();
                            //all.push_back(vec);
                            if(op4==total){
                                cout<<"((("<<vec[0]<<ari[0]<<vec[1]<<")"<<ari[1]<<vec[2]<<")"<<ari[2]<<vec[3]<<")"<<ari[3]<<vec[4]<<endl;
                                count+=1;
                            } //if op4 is total
                        }//fourth arithmetic
                    }//if all values found
                }//if: going from fourth to fifth integer
            }//finding fourth arithmetic 
        }//for: finding fourth integer
    }//if: third to fourth integer
    //NEW METH
}

//HELPER METHODS
//finds first integer
//checks if the first value of vec is each integer then sets it equal to the integer if it's not
void firstInt(int a, int b, int c, int d, int e, int iterator){
    if(iterator==0){ //option 1
        vec[0]=a;
        noA=false;
    }
    if(iterator==1){//option 2...and so on
        vec[0]=b;
        noB=false;
    }
    if(iterator==2){
        vec[0]=c;
        noC=false;
        
    }
    if(iterator==3){
        vec[0]=d;
        noD=false;
    }
    if(iterator==4){
        vec[0]=e;
        noE=false;
    }
}
//finds second integer
void secondInt(int a, int b, int c, int d, int e, int iterator){
    if((iterator==0)&&(vec[0]!=a)){//goes through each option
		//vec.push_back(a);
		vec[1]=a;
		noA=false;
    }
    else if((iterator==1)&&(vec[0]!=b)){//checks if the second value of vec is each integer then sets it equal to the integer if it's not
		vec[1]=b;
		noB=false;
    }
    else if((iterator==2)&&(vec[0]!=c)){
        vec[1]=c;
        noC=false;
    }
    else if((iterator==3)&&(vec[0]!=d)){
		vec[1]=d;
		noD=false;
    }
    else if((iterator==4)&&(vec[0]!=e)){
		vec[1]=e;
		noE=false;
    }
    else{
		second=false;
    }
}
//finds third integer
//checks if the third value of vec is each integer then sets it equal to the integer if it's not
void thirdInt(int a, int b, int c, int d, int e, int iterator){
    if((iterator==0)&&(vec[0]!=a)&&(vec[1]!=a)){//goes through each option
        vec[2]=a;//checks if the first value of vec is each integer then sets it equal to the integer if it's not
    }
    else if((iterator==1)&&(vec[0]!=b)&&(vec[1]!=b)){
        vec[2]=b;
    }
    else if((iterator==2)&&(vec[0]!=c)&&(vec[1]!=c)){
        vec[2]=c;
    }
    else if((iterator==3)&&(vec[0]!=d)&&(vec[1]!=d)){
        vec[2]=d;
    }
    else if((iterator==4)&&(vec[0]!=e)&&(vec[1]!=e)){
        vec[2]=e;
    }
    else{
        third=false;
    }
}
//finds fourth integer
//checks if the fourth value of vec is each integer then sets it equal to the integer if it's not
void fourthInt(int a, int b, int c, int d, int e, int iterator){
    if((iterator==0)&&(vec[0]!=a)&&(vec[1]!=a)&&(vec[2]!=a)){// checks each option
        vec[3]=a;
    }
    else if((iterator==1)&&(vec[0]!=b)&&(vec[1]!=b)&&(vec[2]!=b)){
        vec[3]=b;
    }
    else if((iterator==2)&&(vec[0]!=c)&&(vec[1]!=c)&&(vec[2]!=c)){
        vec[3]=c;
    }
    else if((iterator==3)&&(vec[0]!=d)&&(vec[1]!=d)&&(vec[2]!=d)){
			      vec[3]=d;
    }
    else if((iterator==4)&&(vec[0]!=e)&&(vec[1]!=e)&&(vec[2]!=e)){
        vec[3]=e;
    }
    else{
        fourth=false;
    }
    
}
//finds fifth integer
//checks if the fifth value of vec is each integer then sets it equal to the integer if it's not
void fifthInt(int a, int b, int c, int d, int e, int iterator){
    if((iterator==0)&&(vec[0]!=a)&&(vec[1]!=a)&&(vec[2]!=a)&&(vec[3]!=a)){
        vec[4]=a;
    }
    else if((iterator==1)&&(vec[0]!=b)&&(vec[1]!=b)&&(vec[2]!=b)&&(vec[3]!=b)){
        vec[4]=b;
    }
    else if((iterator==2)&&(vec[0]!=c)&&(vec[1]!=c)&&(vec[2]!=c)&&(vec[3]!=c)){
        vec[4]=c;
    }
    else if((iterator==3)&&(vec[0]!=d)&&(vec[1]!=d)&&(vec[2]!=d)&&(vec[3]!=d)){
        vec[4]=d;
    }
    else if((iterator==4)&&(vec[0]!=e)&&(vec[1]!=e)&&(vec[2]!=e)&&(vec[3]!=e)){
        vec[4]=e;
    }
    else{
        fifth=false;
    }
}
//calculate the totals of each expression of arithmetic operators
void calcArith(){
    if(ari[0].compare("+")==0){//checks if the first value in ari is each arith operator and does it
        op1=vec[0]+vec[1];
    }
    if(ari[0].compare("-")==0){
        op1=vec[0]-vec[1];
    }
    if(ari[0].compare("*")==0){
        op1=vec[0]*vec[1];
    }
    if((ari[0].compare("/")==0)&&(vec[1]!=0)){
        op1=vec[0]/vec[1];
    }
    if((ari[0].compare("%")==0)&&(vec[1]!=0)){
        op1=vec[0]%vec[1];
    }
    if(ari[1].compare("+")==0){
        op2=op1+vec[2];
    }
    if(ari[1].compare("-")==0){
        op2=op1-vec[2];
    }
    if(ari[1].compare("*")==0){
        op2=op1*vec[2];
    }
    //NEW METH
    calcArith2();
    
}
//second half of calculating arithmetic totals
void calcArith2(){
    if((ari[1].compare("/")==0)&&(vec[2]!=0)){
        op2=op1/vec[2];
    }
    if((ari[1].compare("%")==0)&&(vec[2]!=0)){
        op2=op1%vec[2];
    }
    if(ari[2].compare("+")==0){//value of ari at 2 is plus, then perform operation
        op3=op2+vec[3];
    }
    if(ari[2].compare("-")==0){
        op3=op2-vec[3];
    }
    if(ari[2].compare("*")==0){
        op3=op2*vec[3];
    }
    if((ari[2].compare("/")==0)&&(vec[3]!=0)){
        op3=op2/vec[3];
    }
    if((ari[2].compare("%")==0)&&(vec[3]!=0)){
        op3=op2%vec[3];
    }
    if(ari[3].compare("+")==0){
        op4=op3+vec[4];
    }
    if(ari[3].compare("-")==0){
        op4=op3-vec[4];
    }
    if(ari[3].compare("*")==0){
        op4=op3*vec[4];
    }
    if((ari[3].compare("/")==0)&&(vec[4]!=0)){
        op4=op3/vec[4];
    }
    if((ari[3].compare("%")==0)&&(vec[4]!=0)){
        op4=op3%vec[4];
    }
}
//adds arithmetic operators to ari vector 
void findArith(int place,int iterator){
    if(iterator==0){ //adds the operator to ari to find different combos of operators
        ari[place]="+";
        //op4=op3+vec[4];
    }
    if(iterator==1){
        ari[place]="-";
        //op4=op3-vec[4];
    }
    if(iterator==2){
        ari[place]="*";
        //op4=op3*vec[4];
				  }
    if((iterator==3)&&(vec[place+1]!=0)){
        ari[place]="/";
        //op4=op3/vec[4];
    }
    if((iterator==4)&&(vec[place +1]!=0)){
        ari[place]="%";
        //op4=op3%vec[4];
    }
}
//adds bitwise operators to ari vector
void findBitwise(int place, int iterator){
//setting first value of ari[0]
	if(iterator==0){ //adds bitwise operator to ari
	  ari[place]="&";
	  //op1=vec[0]+vec[1];
	}
	if(iterator==1){
	  ari[place]="|";
	  //op1=vec[0]-vec[1];
	}
	if(iterator==2){
	  ari[place]="^";
	  //op1=vec[0]*vec[1];
	}
	if((iterator==3)&&(vec[place+1]!=0)){
	  ari[place]="<<";
	  //op1=vec[0]/vec[1];
	}
	if((iterator==4)&&(vec[place+1]!=0)){
	  ari[place]=">>";
	  //op1=vec[0]%vec[1];
	}
}
//calculates bitwise total
void calcBitwise(){
    if(ari[0].compare("&")==0){ //checks the value of ari at each position and performs that operation
        op1=vec[0]&vec[1]; 
    }
    if(ari[0].compare("|")==0){
        op1=vec[0]|vec[1];
    }
    if(ari[0].compare("^")==0){
        op1=vec[0]^vec[1];
    }
    if(ari[0].compare("<<")==0){
        op1=vec[0]<<vec[1];
    }
    if(ari[0].compare(">>")==0){
        op1=vec[0]>>vec[1];
    }
    if(ari[1].compare("&")==0){// if value at one of ari is and, then perform operation
        op2=op1&vec[2];
    }
    if(ari[1].compare("|")==0){
        op2=op1|vec[2];
    }
    if(ari[1].compare("^")==0){
        op2=op1^vec[2];
    }
    if(ari[1].compare("<<")==0){
        op2=op1<<vec[2];
    }
    if(ari[1].compare(">>")==0){
        op2=op1>>vec[2];
    }
    //NEW METH
    calcBitwise2();
    
}
//second half of calculating bitwise totals
void calcBitwise2(){
    if(ari[2].compare("&")==0){
        op3=op2&vec[3];
    }
    if(ari[2].compare("|")==0){
        op3=op2|vec[3];
    }
    if(ari[2].compare("^")==0){
        op3=op2^vec[3];
    }
    if(ari[2].compare("<<")==0){
        op3=op2<<vec[3];
    }
    if(ari[2].compare(">>")==0){// if value at 2 of ari is right shift, then oerform operation
        op3=op2>>vec[3];
    }
    if(ari[3].compare("&")==0){
        op4=op3&vec[4];
    }
    if(ari[3].compare("|")==0){
        op4=op3|vec[4];
    }
    if(ari[3].compare("^")==0){
        op4=op3^vec[4];
    }
    if(ari[3].compare("<<")==0){
        op4=op3<<vec[4];
    }
    if(ari[3].compare(">>")==0){
        op4=op3>>vec[4];
    }
}
void fourthToTotalBit(int total){
    if(third){
        //cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2]<<endl;
        //count+=1;
        for(int w=0;w<5;w++){
            fourth=true;
            fourthInt(a,b,c,d,e,w);
            //if the fourth one is found! Going to fifth!
            if(fourth){
                for(int h=0;h<5;h+=1){
                    fifth=true;
                    fifthInt(a,b,c,d,e,h);
                    //find fourth arithmetic!
                    //now looking for the 4th operand
                    for(int a4=0;a4<5;a4++){
                        findBitwise(3,a4);
                        if(fifth){
                            calcBitwise();
                            //all.push_back(vec);
                            if(op4==total){
                                
                                cout<<"((("<<vec[0]<<ari[0]<<vec[1]<<")"<<ari[1]<<vec[2]<<")"<<ari[2]<<vec[3]<<")"<<ari[3]<<vec[4]<<endl;
                                count+=1;
                            } //if op4 is total
                        }//fourth arithmetic
                    }//if all values found
                }//if: going from fourth to fifth integer
            }//finding fourth arithmetic 
        }//for: finding fourth integer
    }//if: third to fourth integer
    //NEW METH   
}


string bitwise(int total,vector<int>v){
  //int op=0;
  a=v[0];
  b=v[1];
  c=v[2];
  d=v[3];
  e=v[4];
  for(int x=0;x<5;x+=1){
    noA=true;
    noB=true;
    noC=true;
    noD=true;
    noE=true;
    //vec.clear();
    vec={-1,-1,-1,-1,-1};
    firstInt(a,b,c,d,e,x);

      //figuring first arithmetic
      for(int a1=0;a1<5;a1++){
          findBitwise(0,a1);
          //cout<<vec[0]<<endl;
          //figuring out second space
          for(int y=0;y<5;y+=1){
              second=true;
              secondInt(a,b,c,d,e,y);

              //second arithmetic
              for(int a2=0;a2<5;a2++){
                  findBitwise(1,a2);
                  //after we have figured out the second one... within loop
                  if(second){
                      
                      //cout<<vec[0]<<" "<<vec[1]<<endl;
                      for(int z=0;z<5;z+=1){
                          
                          third=true;
                          thirdInt(a,b,c,d,e,z);
                          //cout<<"This is Z: "<<z<<endl;
                          //find third arithmetic
                          //now setting the third operand (in total there is 4)
                          for(int a3=0;a3<5;a3++){
                              findBitwise(2,a3);
                              fourthToTotalBit(total);
                              // secondNum(a,b,c,d,e,third,z);
                              //going onto the fourth
                          }//third arithmetic
                      }//for: finding third integer
                  }//if second to third integer
              }//second arithmetic 
          }//second integer
      }//first arithmetic value
  }//first integer
  cout<<count<<" bitwise expressions found that evaluate to "<<total<<endl;
  return "";
}
