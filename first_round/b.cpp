#include <iostream>
using namespace std;
int main(){
    #1
    int a,b;
    cin>>a>>b;   
    cout<<a+b;


    #2
    int ai,bi,ci;
    cin>>ai>>bi>>ci;
    cout<<ai*bi*ci;


    #3
   int a,b;
    cin>>a>>b;
    if((a>9)||(b>9)){
        cout<<-1;
    }
    else{
        cout<<a*b;
    }
    
    #4
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c<=21){
        cout<<"Winner, winner, chicken dinner.";
    }
    else{
        cout<<"«play again";
    }
    

   #5
   int a;
   cin>>a;
   int cnt=0;
  for(int i=1;i<=a;i++){
    if(a%i==0){
        cnt++;
    }

  }
  cout<<cnt;







}