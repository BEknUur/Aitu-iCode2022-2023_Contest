#include <bits/stdc++.h>
using namespace std;
int main(){
    #1
    /*int n;
    cin>>n;
    int san=0;
    for (int i=1;i<n;i++){
        san+=50;
    }
    cout<<san+100;
    */

/*   #2
   vector<int>sandar;
   int easy=2;
   int mid=2;
   int hard=1;
   int a,b,c;
   cin>>a>>b>>c;
   int easy_can=a/easy;
   int mid_can=b/mid;
   int hard_can=c/hard;
   sandar.push_back(easy_can);
   sandar.push_back(mid_can);
   sandar.push_back(hard_can);
   sort(sandar.begin(),sandar.end());
   cout<<sandar[0];
}
*/
#3
/*int a,b;
cin>>a>>b;
int som=3;
int tenge=4;
int cnt=0;
int cnt1=0;
if(a==1){
    cnt+=6;  

}
else if(a==2){
    cnt+=6;
}
else if(a==3){
    cnt+=5;
}
else if(a==4){
    cnt+=7;
}
else if(a==5){
    cnt+=6;
}
else if(a==6){
    cnt+=7;
}
else if(a==7){
    cnt+=7;
}
else if(a==8){
    cnt+=8;
}
else if(a==9){
    cnt+=8;
}
if(b==1){
    cnt1+=7;
}
else if(b==2){
    cnt1+=7;
}
else if(b==3){
    cnt1+=6;
}
else if(b==4){
    cnt1+=8;
}
else if(b==5){
    cnt1+=7;
}
else if(b==6){
    cnt1+=8;
}
else if(b==7){
    cnt1+=8;
}
else if(b==8){
    cnt1+=9;
}
else if(b==9){
    cnt1+=9;
}
if(cnt>cnt1){
    cout<<">";
}
else if(cnt<cnt1){
    cout<<"<";
}
else{
    cout<<"=";
}




}
*/

#4
/*
   string N;
    cin >> N;
    int sum_of_digits = 0;
    for (char digit : N) {
        sum_of_digits += digit - '0';
    }

    
    int remainder = sum_of_digits % 3;

    
    if (remainder == 0) {
        
        cout << 0 << endl;
    } else if (remainder == 1) {
        
        bool removed = false;
        for (int i = 0; i < N.size(); ++i) {
            if ((N[i] - '0') % 3 == 1) {
                N.erase(i, 1);
                removed = true;
                break;
            }
        }
        if (!removed) {
            int count_2 = 0;
            for (char digit : N) {
                if ((digit - '0') % 3 == 2) {
                    ++count_2;
                }
            }
            if (count_2 >= 2) {
                cout << 2 << endl;
            } else {
                cout << -1 << endl; 
            }
        } else {
            cout << 1 << endl;
        }
    } else { 
        bool removed = false;
        for (int i = 0; i < N.size(); ++i) {
            if ((N[i] - '0') % 3 == 2) {
                N.erase(i, 1);
                removed = true;
                break;
            }
        }
        if (!removed) {
            int count_1 = 0;
            for (char digit : N) {
                if ((digit - '0') % 3 == 1) {
                    ++count_1;
                }
            }
            if (count_1 >= 2) {
                cout << 2 << endl;
            } else {
                cout << -1 << endl; 
            }
        } else {
            cout << 1 << endl;
        }
    }

}

*/

#5
  int X, Y, Z, A, B;
    cin >> X >> Y >> Z >> A >> B;
    int combo_cost = min(A, B) * Z * 2;

    if (A > B)
        combo_cost += (A - B) * X;
    else if (A < B)
        combo_cost += (B - A) * Y;

    cout << combo_cost << endl;

    return 0;
}