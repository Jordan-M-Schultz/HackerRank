#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




string flip(string reg){
    string flipped = "";
    
    for(int i = reg.size()-1 ; i >= 0 ; i--) 
      flipped += (reg[i]);    
   
    
    return flipped;
}


int main() {
    short loopCounter;
    short temp = 0;
    string str, reverse;
    cin >> loopCounter;
    while(loopCounter)
    {
     cin >> str;
     reverse = flip(str);
    // if(str.size()%2 == 0){
             for(int f = 0 ; f < reverse.size()-1 ; f++)
             {
               if(abs(str[f+1] - str[f]) == abs(reverse[f+1]-reverse[f])){
                 temp++;
               }
               else
                   temp+=0;
             

             }//for
                
            if(temp == reverse.size()-1)
                cout<< "Funny" << endl;
            else
                cout << "Not Funny"<< endl;
            temp = 0;
           // cout << endl;

      //}else
       //  cout << "Not Funny"<<endl;
         loopCounter--;

    }
    
    return 0;
}
