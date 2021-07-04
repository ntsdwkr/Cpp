// https://www.hackerrank.com/challenges/diagonal-difference/problem

int diagonalDifference(vector<vector<int>> arr) {
    int a=0,b=0,ans,x;
    for(int i=0;i<arr.size();i++){
        a += arr[i][i];
    }
    x=arr.size()-1;
    for(int i=0;i<arr.size();i++){
        b += arr[i][x];
        x--;
    }
    ans=a-b;
    if(ans<0) return -1*ans;
    return ans;
}
