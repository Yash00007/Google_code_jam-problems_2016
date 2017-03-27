#include<iostream>
using namespace std;
int done[10];
void make(){
	int i=0;
	while(i < 11){
    	done[i] = 0;
		i++;
	}	
}
int main(){
int tt=0;
int kk=0;
cin>>kk;
for(int j = 0;j<kk;j++){
cin>>tt;
make();
int count=0;
int ott = tt;
for(int i = 0;1; tt = tt + ott,i++){
	if(tt == 0){
	     cout<<"case #"<<i<<": INSOMNIA"<<endl;
	       make();
	       break;
		
	}
	int nn=tt;
	while(nn){
		if( done[nn%10]  != 1 ) 
		{
			done[nn%10] = 1;
			count++;
		}
		   nn = nn/10;
	}
	if(count == 10)
    {
    cout<<"case #"<<i<<": "<<tt<<endl;
	make();
	break;
    }
}
}
	return 0;
}
