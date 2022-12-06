#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int square_plus_one(int n){
    return n*n+1;
}

int main(){
    vector<int> nums{1,2,3,4,5,6,7,8,9};
    
    //applies square_plus_one to nums and sets it to transform
    transform(nums.begin(),nums.end(),nums.begin(),square_plus_one);
    
    //prints [2,5,10,17,26,37,50,65,82]
    for(vector<int>::iterator i=nums.begin();i!=nums.end();i++){
        cout<<" "<<*i<<"\n";
    }
}