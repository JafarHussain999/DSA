#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int top = 0, down = n-1 ,left =0 ,right = m-1;
    while (top <= down && left <= right)
    {
        for(int i=left ; i<=right ;i++){
            cout<<a[top][i];
        }
        top++;
        for(int i=top;i<=down;i++){
            cout<<a[i][right];
        }
        right--;
        for(int i=right ; i>=left;i--){
            cout<<a[down][i];
        }
        down--;
        for(int i=down ; i>=top;i--){
            cout<<a[i][left];
        }
        left++;
    }
    
    return 0;
}