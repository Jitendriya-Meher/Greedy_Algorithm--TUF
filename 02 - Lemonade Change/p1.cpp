#include<bits/stdc++.h>
using namespace std;

bool lemonadeChange(vector<int>& bills) {

    int rs5 = 0;
    int rs10 = 0;
    int n = bills.size();

    for( int i = 0; i < n; i++){
        if( bills[i] == 5){
            rs5++;
        }
        else if( bills[i] == 10){
            if( rs5  > 0){
                rs5--;
            }else{
                return false;
            }
            rs10++;
        }
        else{
            if( (rs5  > 0) &&( rs10 > 0)){
                rs5--;
                rs10--;
            }else if( rs5 >= 3){
                rs5 -= 3;
            }
            else{
                return false;
            }
        }
    }

    return true;
        
}

int main(){

    vector<int> bills {5,5,20,5,5,10,5,10,5,20};
    int ans = lemonadeChange(bills);

    cout<<"lemonadeChange : "<<ans<<endl;

    return 0;

}