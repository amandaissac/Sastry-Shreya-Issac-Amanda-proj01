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
vector<string> ari={"","","",""};
int op1,op2,op3,op4;
vector<int>vec={-1,-1,-1,-1,-1};
vector<vector<int>>all; //a vector holding vector memory
vector<vector<string>>alla; //vectoro holding all ari vectors
vector<string>output; //holding all the output strings
void secondNum(int a,int b,int c,int d,int e,int third,int z);
string arithmetic(int total,vector<int>v){
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
	  //figuring first arithmetic
	  for(int a1=0;a1<5;a1++){
	    //setting first value of ari[0]
	    if(a1==0){
	      ari[0]="+";
	      op1=vec[0]+vec[1];
	    }
	    if(a1==1){
	      ari[0]="-";
	      op1=vec[0]-vec[1];
	    }
	    if(a1==2){
	      ari[0]="*";
	      op1=vec[0]*vec[1];
	    }
	    if((a1==3)&&(vec[1]!=0)){
	      ari[0]="/";
	      op1=vec[0]/vec[1];
	    }
	    if((a1==4)&&(vec[1]!=0)){
	      ari[0]="%";
	      op1=vec[0]%vec[1];
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
		//second arithmetic
		for(int a2=0;a2<5;a2++){
		  if(a2==0){
		    ari[1]="+";
		    op2=op1+vec[2];
		  }
		  if(a2==1){
		    ari[1]="-";
		    op2=op1-vec[2];
		  }
		  if(a2==2){
		    ari[1]="*";
		    op2=op1*vec[2];
		  }
		  if((a2==3)&&(vec[2]!=0)){
		      ari[1]="/";
		      op2=op1/vec[2];
		    }
		  if((a2==4)&&(vec[2]!=0)){
		    ari[1]="%";
		    op2=op1%vec[2];
		  }  
		  // secondNum(a,b,c,d,e,third,z);
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
		      //find third arithmetic
		      //now setting the third operand (in total there is 4)
		      for(int a3=0;a3<5;a3++){
			if(a3==0){
			  ari[2]="+";
			  op3=op2+vec[3];
			}
			if(a3==1){
			  ari[2]="-";
			  op3=op2-vec[3];
			}
			if(a3==2){
			  ari[2]="*";
			  op3=op2*vec[3];
			}
			if((a3==3)&&(vec[3]!=0)){
			  ari[2]="/";
			  op3=op2/vec[3];
			}
			if((a3==4)&&(vec[3]!=0)){
			  ari[2]="%";
			  op3=op2%vec[3];
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
			      //all.push_back(vec);
			      //find fourth arithmetic!
			      //now looking for the 4th operand
			      for(int a4=0;a4<5;a4++){
				if(a4==0){
				  ari[3]="+";
				  op4=op3+vec[4];
				}
				if(a4==1){
				  ari[3]="-";
				  op4=op3-vec[4];
				}
				if(a4==2){
				  ari[3]="*";
				  op4=op3*vec[4];
				}
				if((a4==3)&&(vec[4]!=0)){
				  ari[3]="/";
				   op4=op3/vec[4];
				}
				if((a4==4)&&(vec[4]!=0)){
				  ari[3]="%";
				   op4=op3%vec[4];
				}
				//seeing if op4 is total
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
		  }//third arithmetic
		}//for: finding third integer
	      }//if second to third integer
	    }//second arithmetic 
	  }//second integer
	}//first arithmetic value
    }//first integer
    
    /*
    //bascially all the values of the number vector have been found
    //Need to find the arithmetic number vectors
    for(int a1=0;a1<5;a1++){
      //setting first value of ari[0]
      if(a1==0){
	ari[0]="+";
      }
      if(a1==1){
	ari[0]="-";
      }
      if(a1==2){
	ari[0]="*";
      }
      if(a1==3){
	ari[0]="/";
      }
      if(a1==4){
	ari[0]="%";
      }
      //now setting the second value
      for(int a2=0;a2<5;a2++){
	if(a2==0){
	  ari[1]="+";
	}
	if(a2==1){
	  ari[1]="-";
	}
	if(a2==2){
	  ari[1]="*";
	}
	if(a2==3){
	  ari[1]="/";
	}
	if(a2==4){
	  ari[1]="%";
	}
	//now setting the third operand (in total there is 4)
	for(int a3=0;a3<5;a3++){
	  if(a3==0){
	    ari[2]="+";
	  }
	  if(a3==1){
	    ari[2]="-";
	  }
	  if(a3==2){
	    ari[2]="*";
	  }
	  if(a3==3){
	    ari[2]="/";
	  }
	  if(a3==4){
	    ari[2]="%";
	  }
	  //now looking for the 4th operand
	  for(int a4=0;a4<5;a4++){
	    if(a4==0){
	      ari[3]="+";
	    }
	    if(a4==1){
	      ari[3]="-";
	    }
	    if(a4==2){
	      ari[3]="*";
	    }
	    if(a4==3){
	      ari[3]="/";
	    }
	    if(a4==4){
	      ari[3]="%";
	    }
	    //so all 4 operands have been found... need to add ari to alla
	    alla.push_back(ari); //alla holds all combinations of ari
	  }
	}//for a3
      }
    }

    //need to loop through the two!
    for(int l=0;l<120;l++){
      //ari=alla[l];
      vec=all[l];
      for(int g=0;g<625;g++){
	//vec=all[g];
	ari=alla[g];
	if(ari[0].compare("+")==0){
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
	//operand 1 has been found. Now onto 2
	if(ari[1].compare("+")==0){
	  op2=op1+vec[2];
	}
	if(ari[1].compare("-")==0){
	  op2=op1-vec[2];
	}
	if(ari[1].compare("*")==0){
	  op2=op1*vec[2];
	}
	if((ari[1].compare("/")==0)&&(vec[2]!=0)){
	  op2=op1/vec[2];
	}
	if((ari[1].compare("%")==0)&&(vec[2]!=0)){
	  op2=op1%vec[2];
	}
	//operand 2 is found. Now for operand 3
	if(ari[2].compare("+")==0){
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
	//operand 4
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
	if(op4==total){
	  cout<<"((("<<vec[0]<<ari[0]<<vec[1]<<")"<<ari[1]<<vec[2]<<")"<<ari[2]<<vec[3]<<")"<<ari[3]<<vec[4]<<endl;
	  count+=1;
	}
      }
    }//for: each arithmetic
*/
    
    //we have the all vector carrying all number combinations
    /*
    for(int q=0;q<120;q+=1){
      v=all[q]; //setting s as temperary vector at iteration 
      //operand 1
      for(int a1=0;a1<5;a1++){
	//resetting
	//ari="";
	op1=0;
	op2=0;
	op3=0;
	op4=0;
	if(a1==0){
	  op1=v[0]+v[1];
	  ari[0]="+";
	}
	if(a1==1){
	  op1=v[0]-v[1];
	  ari[0]="-";
	}
	if(a1==2){
	  op1=v[0]*v[1];
	  ari[0]="*";
	}
	if((a1==3)&&(v[1]!=0)){
	  op1=v[0]/v[1];
	  ari[0]="/";
	}
	if((a1==4)&&(v[1]!=0)){
	  op1=v[0]%v[1];
	  ari[0]="%";
	}
	//cout<<"Operand 1: "<<ari<<endl;
	//got operand 1; Now to operand 2
	for(int a2=0;a2<5;a2++){
	  if(a2==0){
	    op2=op1+v[2];
	    ari[1]="+";
	  }
	  if(a2==1){
	    op2=op1-v[2];
	    ari[1]="-";
	  }
	  if(a2==2){
	    op2=op1*v[2];
	    ari[1]="*";
	  }
	  if((a2==3)&&(v[2]!=0)){
	    op2=op1/v[2];
	    ari[1]="/";
	  }
	  if((a2==4)&&(v[2]!=0)){
	    op2=op1%v[2];
	    ari[1]="%";
	  }
	  //cout<<"Operand 2: "<<ari<<endl;
	  //got operand 2; Now to operand 3
	  for(int a3=0;a3<5;a3++){
	    if(a3==0){
	      op3=op2+v[3];
	      ari[2]="+";
	    }
	    if(a3==1){
	      op3=op2-v[3];
	      ari[2]="-";
	    }
	    if(a3==2){
	      op3=op2*v[3];
	      ari[2]="*";
	    }
	    if((a3==3)&&(v[3]!=0)){
	      op3=op2/v[3];
	      ari[2]="/";
	    }
	    if((a3==4)&&(v[3]!=0)){
	      op3=op2%v[3];
	      ari[2]="%";
	    }
	    //cout<<"Operand 3: "<<ari<<endl;
	    //got operand 3; Now operand 4
	    for(int a4=0;a4<5;a4++){
	      if(a4==0){
	      op4=op3+v[4];
	      ari[3]="+";
	      }
	      if(a4==1){
		op4=op3-v[4];
		ari[3]="-";
	      }
	      if(a4==2){
		op4=op3*v[4];
		ari[3]="*";
	      }
	      if((a4==3)&&(v[4]!=0)){
		op4=op3/v[4];
		ari[3]="/";
	      }
	      if((a4==4)&&(v[4]!=0)){
		op4=op3%v[4];
		ari[3]="%";
	      }
	      //all 4 operands have been found
	      if(op4==total){
		//output.push_back("((("+to_string(v[0])+ari[0]+to_string(v[1])+")"+ari[1]+to_string(v[2])+")"+ari[2]+to_string(v[3])+")"+ari[3]+to_string(v[4]));
		cout<<"((("<<v[0]<<ari[0]<<v[1]<<")"<<ari[1]<<v[2]<<")"<<ari[2]<<v[3]<<")"<<ari[3]<<v[4]<<endl;
		count+=1;
	      }
	      //ari=""; //resetting ari after reaching 4th operand, etc.
	    }//for a4
	  }
	}
      }
    }//for: iterating through "all"
    */

    cout<<count<<" arithmetic expressions found that evaluate to "<<total<<endl;
    return "";
}
