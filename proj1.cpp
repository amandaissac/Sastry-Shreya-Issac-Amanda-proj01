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
bool fifth=true;
int a,b,c,d,e;
int count=0;
bool noA,noB,noC,noD,noE;
vector<int>vec={-1,-1,-1,-1,-1};
vector<vector<int>>all; //a vector holding vector memory
string bitwise(int total,vector<int>v){
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
        if(x==0){
	  vec[0]=a;
	  noA=false;
        }
        if(x==1){
	  vec[0]=b;
	  noB=false;
        }
        if(x==2){
	  vec[0]=c;
	  noC=false;
            
        }
        if(x==3){
	  vec[0]=d;
	  noD=false;
        }
        if(x==4){
	  vec[0]=e;
	  noE=false;
        }
        //cout<<vec[0]<<endl;
        //figuring out second space
        for(int y=0;y<5;y+=1){
            second=true;
            if((y==0)&&(vec[0]!=a)){
	      //vec.push_back(a);
	      vec[1]=a;
	      noA=false;
            }
            else if((y==1)&&(vec[0]!=b)){
	      vec[1]=b;
	      noB=false;
            }
            else if((y==2)&&(vec[0]!=c)){
	      vec[1]=c;
	      noC=false;
            }
            else if((y==3)&&(vec[0]!=d)){
	      vec[1]=d;
	      noD=false;
            }
            else if((y==4)&&(vec[0]!=e)){
	      vec[1]=e;
	      noE=false;
            }
            else{
                second=false;
            }
	    //after we have figured out the second one... within loop
	    if(second){
	      //cout<<vec[0]<<" "<<vec[1]<<endl;
	      for(int z=0;z<5;z+=1){
		third=true;
		//cout<<"This is Z: "<<z<<endl;
		if((z==0)&&(vec[0]!=a)&&(vec[1]!=a)){
		  vec[2]=a;
		}
		else if((z==1)&&(vec[0]!=b)&&(vec[1]!=b)){
		  vec[2]=b;
		}
		else if((z==2)&&(vec[0]!=c)&&(vec[1]!=c)){
		  vec[2]=c;
		}
		else if((z==3)&&(vec[0]!=d)&&(vec[1]!=d)){
		  vec[2]=d;
		}
		else if((z==4)&&(vec[0]!=e)&&(vec[1]!=e)){
		  vec[2]=e;
		}
		else{
		  third=false;
		}
		//going onto the fourth
		if(third){
		  //cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2]<<endl;
		  //count+=1;
		  for(int w=0;w<5;w++){
		    fourth=true;
		    if((w==0)&&(vec[0]!=a)&&(vec[1]!=a)&&(vec[2]!=a)){
		      vec[3]=a;
		    }
		    else if((w==1)&&(vec[0]!=b)&&(vec[1]!=b)&&(vec[2]!=b)){
		      vec[3]=b;
		    }
		    else if((w==2)&&(vec[0]!=c)&&(vec[1]!=c)&&(vec[2]!=c)){
		      vec[3]=c;
		    }
		    else if((w==3)&&(vec[0]!=d)&&(vec[1]!=d)&&(vec[2]!=d)){
		      vec[3]=d;
		    }
		    else if((w==4)&&(vec[0]!=e)&&(vec[1]!=e)&&(vec[2]!=e)){
		      vec[3]=e;
		    }
		    else{
		      fourth=false;
		    }
		    //if the fourth one is found! Going to fifth!
		    if(fourth){
		      //count+=1;
		      //cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2]<<" "<<vec[3]<<endl;
		      ///*
		      for(int h=0;h<5;h+=1){
			fifth=true;
			if((h==0)&&(vec[0]!=a)&&(vec[1]!=a)&&(vec[2]!=a)&&(vec[3]!=a)){
			  vec[4]=a;
			}
			else if((h==1)&&(vec[0]!=b)&&(vec[1]!=b)&&(vec[2]!=b)&&(vec[3]!=b)){
			  vec[4]=b;
			}
			else if((h==2)&&(vec[0]!=c)&&(vec[1]!=c)&&(vec[2]!=c)&&(vec[3]!=c)){
			  vec[4]=c;
			}
			else if((h==3)&&(vec[0]!=d)&&(vec[1]!=d)&&(vec[2]!=d)&&(vec[3]!=d)){
			  vec[4]=d;
			}
			else if((h==4)&&(vec[0]!=e)&&(vec[1]!=e)&&(vec[2]!=e)&&(vec[3]!=e)){
			  vec[4]=e;
			}
			else{
			  fifth=false;
			}
			if(fifth){
			  all.push_back(vec);
			}
		      }//for h
		      //*/
		    }
		  }//for for w
		}
	      }
	    }//if second
        }          
    }
    count=all.size(); //count is the size
    for(int q=0;q<count;q+=1){
      v=all[q]; //setting v as temperory vector at iteration q
      cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<endl;
    }
    return "";
}

